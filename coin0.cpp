#include<iostream>
#include<stack>
using namespace std;

int main(void)
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);cout.tie(0);

  int N,K;
  int count=0;

  cin >>N>>K;

  stack <int>coin;

  while(N--)
  {
    int temp;
    cin>>temp;
    coin.push(temp);
  }
  while(K!=0)
  {
    if(K>=coin.top())
    {
      K-=coin.top();
      count++;
    }
    else
    {
      coin.pop();
    }
  }
  cout<<count;

  return 0;




}
