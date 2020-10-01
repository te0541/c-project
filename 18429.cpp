#include<iostream>

using namespace std;



int n,k;// n=몇개의 운동키트 , k=근손실
int w=500; //중량수
int kit[8+1];
bool visit[8+1];
int count=0;

void ans(int level)
{
  if(level==n)
  count++;
  else
  {
    for(int i=0;i<n;i++)
    {
      if(visit[i]==1)continue;
      if(w-k+kit[i]<500)continue;
      w-=k;
      w+=kit[i];
      visit[i]=1;
      ans(level+1);
      w+=k;
      w-=kit[i];
      visit[i]=0;

    }
  }
  return;


}

int main(void)
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);

  cin>>n>>k;
  for(int i=0;i<n;i++)
  {
    cin>>kit[i];
  }
  ans(0);

  cout<<count;

  return 0;



}
