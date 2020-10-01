#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int n,m;
int numary[10001];
bool visit[10001];
int tmp=0;
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


  for(int i=0;i<n;i++)
  {
  if(visit[i]==1) continue;
  if(numary[i]==numary[i-1])continue;
  visit[i]=1;
  v.push_back(numary[i]);
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
  for(int i=0;i<n;i++)
  cin>>numary[i];
  sort(numary,numary+n);
  ans(0);


  return 0;
}
