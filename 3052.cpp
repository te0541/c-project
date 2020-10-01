#include<iostream>

using namespace std;

int main(void)
{
  int ary[42]={0};
  int tmp;
  int n=10;
  int count=0;
  while(n--)
  {

    cin>>tmp;
    int t;
    t=tmp%42;
    ary[t]++;

  }
  for(int i=0;i<42;i++)
  {
    if(ary[i]!=0)
    count++;

  }
  cout<<count;
  return 0;

}
