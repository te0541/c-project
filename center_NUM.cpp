#include<iostream>
#include<queue>

using namespace std;


priority_queue<int> pq[1001];

int main(void)
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);

  int T;
  cin>>T;

  for(int i=0;i<T;i++)
  {
    int count=0;
    int N;
    cin>> N;          // 몇개 입력 받을지
    queue<int> tmp;
    queue<int> out;

    for(int j=0;j<N;j++)// 입력받은 개수만큼
    {
      int NUM;
      cin>>NUM;
      pq[i].push(NUM);   //일단 넣어준다
      if(j%2==0)         //넣어주다가 홀수번째이면
      {
        count++;          //카운트 올려주고
        for(int k=0;k<count-1;k++)  //카운트만큼
        {
          tmp.push(pq[i].top());  // 일단 tmp라는 큐에 pq 값을 받아주고
          pq[i].pop();             // pq[i]에서 pop 시켜주고
        }
        out.push(pq[i].top());      //pq[i]top은 중간값이니깐 out 큐에 잡아두고
        while(!tmp.empty())         //tmp 큐가 빌때까지
        {
          pq[i].push(tmp.front());   //pq[i]에 넣어주고
          tmp.pop();              // tmp pop  시켜서 비워주고
        }
      }
    }
    cout<<count<<'\n';  // 카운트 값 반환해주고

     while(!out.empty())
     {
       cout<<out.front()<<" ";
       out.pop();
     }
     cout<<"\n";


  }


  return 0;
}
