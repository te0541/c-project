#include<iostream>
#include<queue>

using namespace std;

int main(void)
{
  ios_base::sync_with_stdio(NULL);
  cin.tie(NULL); cout.tie(NULL);
  int T;
  cin >>T;
  int sum=0;
  int ans=0;
  priority_queue<int,vector<int>,greater<int>> q;
  for(int i=0;i<T;i++)
  {
    int tmp;
    cin>>tmp;
    q.push(tmp);
  }
  int time;
  while(!q.empty())
{
  time=q.top();
  q.pop();
  sum+=time;
  ans+=sum;
}
cout<<ans;
return 0;

}
