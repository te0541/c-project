#include<iostream>

using namespace std;

int main(void)
{
  int M,m;

  cin>>M>>m;

  m=m-45;
  if(m<0)
  {
    m+=60;
    M-=1;
    if(M<0)
    M+=24;
  }
  cout<<M<<" "<<m<<endl;

  return 0;
}
