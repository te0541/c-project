#include<iostream>
#include<cstring>
#include<string>
#include<deque>


using namespace std;

int main(void)
{
  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
  int T;
  cin>> T;
  string p,ary;
  int N;
  bool reverse=false;
  bool error=false;
  while(T--)
  {

    deque<int> dq;



    cin >>p;  //함수 배열 ex)RDD
    cin >>N;  // 숫자 배열 개수
    cin >>ary;// 숫자 배열

    char* ptr = strtok(ary,"[,]");
    while(ptr!=NULL)
    {
      dq.push_back(stoi(ptr));
    }


   cout<<dq.front();


  }




  return 0;

}
