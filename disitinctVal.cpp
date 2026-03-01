#include<bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
    int n,m;
    cin>>n>>m;
 
    vector<vector<int>>column(m,vector<int>(n));
 
    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            cin>>column[j][i];
        }
    }
 
    ll total_ans = 0;
    for(int i = 0;i<m;i++){
        sort(column[i].begin(),column[i].end());
 
        // //contribution technique
        // for(int j = 0; j<n;j++){
        //     total_ans += (ll)column[i][j]*(2LL*j-n+1);
        // }
 
        ll prefix_sum = 0;
 
        for(int j = 0;j<n;j++){
            total_ans += (ll)column[i][j]*j - prefix_sum;
 
            prefix_sum += column[i][j];
        }
    }
 
    cout<<total_ans<<"\n";
 
}
 
int main(){
    ios::sync_with_stdio(false);cin.tie(NULL);
 
    int t;
    cin>>t;
    while(t--){
	solve();
 
    }
 
}