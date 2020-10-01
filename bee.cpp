#include<iostream>



using namespace std;

int main(void)

{

    ios_base::sync_with_stdio(0); cin.tie(0);cout.tie(0);
    int pos=1;
    int n;cin>>n;
    int i=1;
    while(n>pos)
    {
      pos+=i*6;
      i++;
    }
    cout<<i;




  return 0;
}
