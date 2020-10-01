#include<iostream>
#include<string>
using namespace std;

int main(void)
{
  int a,b;
  cin>>a>>b;
int ans=-1;
  string A=to_string(a);
  string B=to_string(b);

  char Aprime[3];
  char Bprime[3];
  for(int i=0;i<3;i++)
  {
    Aprime[2-i]=A[i];
    Bprime[2-i]=B[i];
  }
  if(Aprime[0]>Bprime[0])
  ans=1;
  else if(Bprime[0]>Aprime[0])
  ans=2;
  else
  {
    if(Aprime[1]>Bprime[1])
    ans=1;
    else if(Bprime[1]>Aprime[1])
    ans=2;
    else
    {
      if(Aprime[1]>Bprime[1])
      ans=1;
      else
      ans=2;
    }
  }
  if(ans==1)
  for(int i=0;i<3;i++)
  cout<<Aprime[i];
  else
  for(int i=0;i<3;i++)
  cout<<Bprime[i];

  return 0;
}
