class Solution {
public:
    int maxArea(vector<int>& arr) {
        int l = 0, r = arr.size() - 1;
        int ans = 0;
        while (l < r) {
            int x = r - l;
            int temp = min(arr[l], arr[r]);
            ans = max(ans, temp * x);
            if (arr[l] < arr[r]) {
                l++;
            } else {
                r--;
            }
        }

        return ans;
    }
};
