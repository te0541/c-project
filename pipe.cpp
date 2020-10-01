#include<iostream>
#include<stack>
#include<string>
using namespace std;

int main(void)
{
stack <char>  s;

string ex;
cin>>ex;

int ans=0;
for(int i=0;i<ex.length();i++)
{
  if(ex[i]=='(')
  {
    s.push(ex[i]);
  }
  else if(ex[i]==')')
  {
    s.pop();
    if(ex[i-1]=='(')
    {
      ans+=s.size();
    }
    else
    ans++;
  }

  }




cout<<ans;






return 0;

}
