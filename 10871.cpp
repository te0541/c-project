#include<iostream>
#include<queue>
using namespace std;

int main(void)
{
  int N,X;
  cin>>N>>X;

  queue<int> q;
  while(N--)
  {
    int tmp;
    cin>>tmp;
    if(tmp<X)
    q.push(tmp);
  }
  while(!q.empty())
  {
    cout<<q.front()<<" ";
    q.pop();
  }
  return 0;
}
