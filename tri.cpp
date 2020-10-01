#include<iostream>
#include<cstring>


using namespace std;

int main(void)

{

    ios_base::sync_with_stdio(0); cin.tie(0);cout.tie(0);
    bool find=false;

    int n;
    cin>>n;

    for(int i=0;i<n;i++)
    {
      int sum=i;
      int temp=i;
      while(temp)
      {
        sum+=temp%10;
        temp/=10;
      }
      if(sum==n)
      {
        cout<<i;
        find=true;
        break;
      }
    }
    if(!find)
    cout<<"0";



  return 0;
}
