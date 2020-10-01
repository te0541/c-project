#include<iostream>
#include<vector>

using namespace std;
int n,m;
bool visit [9+1];

vector<int> v;

void ans(int level)
{
  if(level==m)
  {
    for(auto &k:v)
    cout<<k<<' ';

  cout<<'\n';
  return ;
}
  else
  {


  for(int i=1;i<=n;i++)
  {
    if(visit[i]==1)continue;
  visit[i]=1;
  v.push_back(i);
  ans(level+1);
  v.pop_back();
  visit[i]=0;
   }
  }
}

int main(void)
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
  cin >>n>>m;
  ans(0);


  return 0;
}
