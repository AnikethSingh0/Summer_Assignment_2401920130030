class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double ans = INT_MIN;
        double sum = 0;int n = nums.size();int j = 0;
        for(int i = 0;i < n;i++){
            sum += nums[i];
            if(i - j + 1 == k){
                double avg = sum / k;
                ans = max(ans,avg);
                sum -= nums[j];j++;
            }
        }
        return ans;
    }
};