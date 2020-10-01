#include<iostream>

using namespace std;

int n;
int count=0;
bool x[15+1];
bool eorkr1[40];
bool eorkr2[40];


void nq(int l)
{
  if(l==n)
  {
    count++;
  }
  else
  for(int i=0;i<n;i++)
  {

    if(x[i]==1||eorkr1[abs(i-l)]==1||eorkr2[i+l]==1) continue;
    x[i]=1;
  eorkr1[abs(i-l)]=1;
  eorkr2[i+l]=1;
    nq(l+1);
    x[i]=0;
  eorkr1[abs(i-l)]=0;
  eorkr2[i+l]=0;


}
}


int main(void)
{
  ios_base::sync_with_stdio(0);
  cin>>n;
  nq(0);
  cout<<count;

  return 0;
}
