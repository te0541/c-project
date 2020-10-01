#include<iostream>
#include<queue>

using namespace std;

int  main(void)
{
  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
  int N;
  int Hsen;
  int T;
  int times=0;
  int tmp;
  cin >> N >>Hsen>>T;
  priority_queue<int>q;
  while(N--)
  {
    cin >>tmp;
    q.push(tmp);
  }
  while (T--)
  {
    if(q.top()<Hsen)
    break;
    int temph;
    temph=q.top();
    q.pop();
    temph/=2;
    q.push(temph);
    times++;
  }
  if(q.top()>=Hsen)
  {
    cout<<"NO"<<'\n';
    cout<<q.top()<<'\n';
  }
  else
  {
    cout<<"YES"<<'\n';
    cout<<times<<'\n';

  }

  return 0;
}
