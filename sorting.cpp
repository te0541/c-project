#include<iostream>
#include<algorithm>
#include<cstring>
#define MAX_NUM 100001
using namespace std;

class Point
{public:int x,y;

};

bool sorting(Point a,Point b)
{
  if(a.x==b.x)
  {
    return a.y<b.y;
  }
  else
  return a.x<b.y;

}

int main(void)
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
  int n;
  cin >> n;
  Point  ary[MAX_NUM];
  for(int i=0;i<n;i++)
  {
    cin >>ary[i].x>>ary[i].y;
  }
  sort(ary,ary+n,sorting);
  for(int i=0;i<n;i++)
  {
  cout<<ary[i].x<<" "<<ary[i].y<<'\n';
  }

  return 0;

}
