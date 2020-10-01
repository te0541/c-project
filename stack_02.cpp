#include<iostream>
#include<stack>
#include<queue>
using namespace std;

int main(void)
{
  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

  int T;
  cin >>T;
  stack<int> st;
  int max=0;//.최대ㅑ값 설정
  bool error=false;
  queue<char> ans;

  for(int i=0;i<T;i++)
  {

    int tmp;//들어오는 값
    cin >>tmp;
    if(tmp>max)//들어온 값이 최대값보다 크다면
    {
      for(;max<tmp;max++)//tmp값까지 push를 해주고 tmp값을 출력
      {
        st.push(max+1);
        ans.push('+') ;       // max+1부터 tmp까지 넣어준다
      }
        st.pop();
        ans.push('-');

    }
     else if(tmp==st.top())
     {
       ans.push('-');
       st.pop();

     }
     else
     error=true;

  }
  if(!error)
  {
    while(!ans.empty())
    {
    cout<<ans.front()<<'\n';
    ans.pop();
}
  }
  else
  cout<<"NO";
  return 0;




}
