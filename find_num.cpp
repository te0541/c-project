#include<iostream>
#include<algorithm>

using namespace std;

int main(void)
{
  ios_base::sync_with_stdio(NULL);
  cin.tie(NULL); cout.tie(NULL);

int ary[100001];


int N,M;
cin>>N;
for(int i=0;i<N;i++)
{
  cin>>ary[i];
}
sort(ary,ary+N);// N개 배열 정렬

cin>>M;
while(M--)
{
  int target;
  cin>>target;
  int find =0;

  int left=0;
  int right=N-1;
int middle;
  while(left<=right)
  {

    middle=(left+right)/2;
    if(ary[middle]>target)
    right=middle-1;
    else if(ary[middle]<target)
    left=middle+1;
    else
    {
      cout<<"1"<<'\n';
      find=1;
      break;
    }

  }
  if (find==0)
  {
    cout<<"0"<<'\n';
  }




}

return 0;

}
