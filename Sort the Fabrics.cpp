#include <bits/stdc++.h>

using namespace std;
bool sorti123(pair<string,pair<int,int>>&x,pair<string,pair<int,int>>&y) 
{

if(x.second.first!=y.second.first)
return (x.second.first <y.second.first);
else
return (x.second.second <y.second.second);

}

bool sortu123(pair<string,pair<int,int>>&x,pair<string,pair<int,int>>&y)
{
if(x.first!=y.first)
return (x.first <y.first);
else 
return (x.second.second <y.second.second);

}

int main() {

int t;

cin>>t;

int te=t;
while(t--)

{

int n;

cin>>n;

int ans=0;

vector<pair<string,pair<int,int>>>v;
vector<pair<string,pair<int,int>>>s;
for(int i=0;i<n;i++)
{
string s;

cin>>s;

int x,y;

cin>>x>>y;

v.push_back({s,{x,y}});

}

s=v; 
sort(v.begin(),v.end(),sortu123); 
sort(s.begin(),s.end(),sorti123);
for(int i=0;i<n;i++)
{
if(s[i]==v[i])
ans++;

}

cout<<"Case #"<<te-t<<": "<<ans<<endl;

}

return 0;

}

