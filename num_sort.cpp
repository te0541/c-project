#include<iostream>
#include<stack>
#include<string>
using namespace std;






int main()
{
  ios_base::sync_with_stdio(0); cin.tie(0);cout.tie(0);
  string a;


  while(1)
  {
    stack<char> s;

    bool error=false;




    getline(cin,a);
    if(a==".")
    break;


    for(int i=0;i<a.length();i++)
    {
      if(a[i]=='('||a[i]=='[')
      {
        s.push(a[i]);
      }
      else if(a[i]==')')
      {
        if(!s.empty() && s.top() == '(')
        {
          s.pop();
        }
        else
        {
          error=true;
          break;

        }
      }
      else if(a[i]==']')
      {
        if (!s.empty() && s.top() == '[')
            s.pop();
        else
         {
            error = true;
            break;
         }




      }
  }
  if(!error&&s.empty())
  cout<<"yes"<<'\n';
  else
  cout<<"no"<<'\n';
}







  return 0;
}
