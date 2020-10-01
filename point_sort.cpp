#include<iostream>
#include<algorithm>

using namespace std;

struct p{
  int x,y;
  bool operator<(const p &b)
  {if(x!=b.x)
    return x<b.x;
    else
    return y<b.y;
  }
};

p ary[100001];

int main(void)
{
  ios_base::sync_with_stdio(0); cin.tie(0);cout.tie(0);

  int N;
  cin >>N;
  for(int i=0;i<N;i++)
  {
    int a,b;
    cin >>a >>b;
    ary[i].x=a;
    ary[i].y=b;
  }
  sort(ary,ary+N);

  for(int i=0;i<N;i++)
  {
    cout<<ary[i].x<<" "<<ary[i].y<<'\n';
  }

  return 0;
}
