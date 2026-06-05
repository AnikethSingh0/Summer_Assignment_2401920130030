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
ll mod = 998244353;
class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int n = mat.size(),m = mat[0].size();
        if(r * c != n * m){
            return mat;
        }
        vector<vector<int>>ans(r,vector<int>(c));
        vector<int>store;
        f(i,0,n){
            f(j,0,m){
                store.pb(mat[i][j]);
            }
        }
        int idx = 0;
        f(i,0,r){
            f(j,0,c){
                ans[i][j] = store[idx];
                idx++;
            }
        }
        return ans;
    }
};g