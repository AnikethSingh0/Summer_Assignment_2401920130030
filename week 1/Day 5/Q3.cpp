class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(), strs.end());
        vector<string> storeOne={strs[0]};
        vector<string> storeTwo={strs[strs.size()-1]} ;
        if(storeOne[0][0]!=storeTwo[0][0])return "";
        int ans=0;
        for (int i = 0; i < strs[0].size(); i++) {
            if(storeOne[0][i]==storeTwo[0][i])ans++;
            else break;
        }
        return strs[0].substr(0,ans);
    }
};