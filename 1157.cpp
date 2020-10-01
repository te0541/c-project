#include<iostream>
#include<string>

using namespace std;

int main(void)
{
  string str;
  int arr[26]={0};
  int mcount=0;
  int idx=0;
  int count =0;

  cin>>str;

  for(int i=0;i<str.length();i++)
{
   int n=str[i];
  if(n<97)
  arr[n-65]++;
  else
  arr[n-97]++;
}


for(int i=0;i<26;i++)
{
  if(arr[i]>mcount)
{
  mcount=arr[i];

   idx=i;
 }
}
for(int i=0;i<26;i++)
{
  if(arr[i]==mcount)
  {
    count++;
  }
  if(count>1)
  {
    cout<<"?";
    return 0;
  }
}
cout<<(char)(idx+65)<<endl;

return 0;
}
