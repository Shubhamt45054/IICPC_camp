//https://codeforces.com/contest/455/problem/A

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;

// 10e1 == 100 not 10.......
// 1e1 == 10 .... 
int N=1e5+1;
vector<int> prm(N,1);
void isPrime( )
{

    prm[0] = prm[1] = 0;
    for (int p = 2; p * p <= N; p++) {
        if (prm[p]==1) {
            for (int i = p * p; i <= N; i += p) {
                prm[i]=0;
            }
        }
    }
}


signed main() {
ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    // cin>>t;
    t=1;
 while(t--){
    int n;
    cin>>n;
    int maxi=0;
    map<int,int> mp;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        maxi=max(maxi,a);
        mp[a]+=a;
    }
    for(int i=maxi;i>=1;i--){
        mp[i]=max(mp[i]+mp[i+2],mp[i+1]);
    }
    cout<<mp[1]<<endl;

     
     
}
}

