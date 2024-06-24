#include<bits/stdc++.h>
using namespace std;

int n,W,K;
int w[1001];
int p[1001];
int dp[101][101][101];

int rec(int i,int wtaken,int ktaken){
    // pruning 

    // base case
    if(i==n) return 0; 
    // cache check
    if(dp[i][wtaken][ktaken]!=-1) return dp[i][wtaken][ktaken];

    // recrusion
    int notake=rec(i+1,wtaken,ktaken);
    int take=0;
    if(wtaken+w[i]<=W && ktaken+1<=K){
        // change i+1 to i , now u can take items infinitely ...
        take=p[i]+rec(i+1,wtaken+w[i],ktaken+1);
    }

    return dp[i][wtaken][ktaken]=max(notake,take);
    // return 
}

int main(){
    cin>>n>>W>>K;
    for(int i=0;i<n;i++){
        cin>>p[i]>>w[i];
    }
    memset(dp,-1,sizeof(dp));
    int ans=rec(0,0,0);
    cout<<ans<<endl;

    return 0;
}
