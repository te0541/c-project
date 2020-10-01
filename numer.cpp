#include<iostream>
#include<string>

using namespace std;

int main(void)
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);

  int A,B,C;
  cin>>A>>B>>C;
  int mul=A*B*C;
  string str=to_string(mul);
  int a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,k=0,j=0;
  for (int i = 0; i < str.length(); i++)
  {
    switch (str[i])
    {
      case '0':
      a++;
      break;
      case '1':
      b++;
      break;
      case '2':
      c++;
      break;
      case '3':
      d++;
      break;
      case '4':
      e++;
      break;
      case '5':
      f++;
      break;
      case '6':
      g++;
      break;
      case '7':
      h++;
      break;
      case '8':
      k++;
      break;
      case '9':
      j++;
      break;
      default:
      cout<<"오류";
    }



  }
  cout<<a<<'\n'<<b<<'\n'<<c<<'\n'<<d<<'\n'<<e<<'\n'<<f<<'\n'<<g<<'\n'<<h<<'\n'<<k<<'\n'<<j<<'\n';

  return 0;
}
