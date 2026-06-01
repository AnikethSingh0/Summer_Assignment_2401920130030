class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int ,int >mpp;
        for(int i=0;i<nums.size();i++){
            int sum=nums[i];
            int dif=target-sum;
            if(mpp.find(dif)!=mpp.end()){
                return {i,mpp[dif]};
            }
            mpp[sum]=i;
        }
        return {};
    }
};