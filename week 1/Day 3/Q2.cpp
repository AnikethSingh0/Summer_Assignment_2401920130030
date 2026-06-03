#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define f(i,a,b) for(int i = (a); i < (b); i++)
#define rf(i,a,b) for(int i = (a); i >= (b); i--)
#define vin(v,n) for(int i=0;i<n;i++) cin>>v[i];
#define yes cout<<"YES\n";
#define no cout<<"NO\n";
#define print(v) for(auto x : v) cout << x << " "; cout << "\n";
ll mod = 999999997;
class Solution {
public:
    vector<int> sortedSquares(vector<int>& arr) {
        int n = arr.size();
        f(i,0,n){
            arr[i] = arr[i] * arr[i];
        }
        int i = 0, j = n - 1;
        int idx = n - 1;
        vector<int>ans(n);
        while(i <= j){
            if(arr[i] >= arr[j]){
                ans[idx] = arr[i];
                i++;idx--;
            }else{
                ans[idx] = arr[j];
                j--;idx--;
            }
        }
        return ans;
        
    }
};