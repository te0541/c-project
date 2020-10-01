#include<iostream>

using namespace std;

int main(void)
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);

  double N;
  cin>>N;
  double lec[1001];
  double MAX = -1.0;
  for(int i=0;i<N;i++)
  {
    double num;
    cin >>num;
    if(MAX<num)
    {
      MAX=num;
    }
    lec[i]=num;
  }

  double sum=0;
  for(int i=0;i<N;i++)
  {
    lec[i]=lec[i]*100.0/MAX;
    sum+=lec[i];
  }
  cout<<sum/N;
  return 0;




}
