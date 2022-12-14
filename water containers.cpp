#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
bool isPrime(int n)
{
    // Corner case
    if (n <= 1)
        return false;
 
    // Check from 2 to n-1
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;
 
    return true;
}
vector<vector<int>> adj;
vector<int> vis,dis;
void dfs(int node,int par,int d)
{
      vis[node]=1;
      dis[node]=d;
      for(auto it:adj[node]){
        if(it!=par){
            dfs(it,node,d+1);
        }
      }
      return;

}

void solve5667()
{
   int n,q;
   cin>>n>>q;
   adj.assign(n+1,{});
   vis.assign(n+1,0);
   dis.assign(n+1,0);
   map<ll,ll> mp;
   for(int i=0;i<n-1;i++){
        int x,y;
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
   }
   dfs(1,0,0);
   for(int i=1;i<=n;i++){
      mp[dis[i]]++;
   }
   int u=q;
   while(q--){
     int x;
     cin>>x;
   }
   ll total=0;
   for(int i=0;i<=n;i++){
       total+=mp[i];
       if(total>u){
        total-=mp[i];
          break;
       }
   }
   cout<<total;
}

int main()
{
   
    ll t;
    cin>>t;
    for(ll iop=1;iop<=t;iop++)
    {
        cout<<"Case #"<<iop<<": ";
        solve5667();
        cout<<endl;
    }
}
