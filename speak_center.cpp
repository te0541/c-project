#include<iostream>
#include<queue>

using namespace std;

int main(void)
{

  ios_base::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);


  priority_queue<int,vector<int>,greater<int>>min;
  priority_queue<int>max;
  int N;
  cin>>N;

  for (int i = 0; i < N; i++)
  {
    int n;
    cin>>n;

    if (max.size() == 0)
    {
        max.push(n);
     }
     else
      {
         if (max.size() > min.size())
         {
           min.push(n);
           }
           else
           {
               max.push(n);
           }



    if(max.top()>min.top())
    {
      int mintmp=min.top();
      int maxtmp=max.top();
      min.pop();
      max.pop();
      min.push(maxtmp);
      max.push(mintmp);

    }
  }

  
    cout<<max.top()<<'\n';



  }



  return 0;

}
