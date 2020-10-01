#include<iostream>

using namespace std;

int main(void)
{
  ios_base::sync_with_stdio(0); cin.tie(0);cout.tie(0);


  int a,b,v;
  cin>>a>>b>>v;


  int count;

  if(v<=a)
  count=1;
  else if(v%(a-b)==0)
  count=(v-a)/(a-b)+1;
  else
  count=(v-a)/(a-b)+2;

  cout<<count;




  return 0;
}
