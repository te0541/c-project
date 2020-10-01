#include<iostream>

using namespace std;
#define MAX_ML 3000000
#define MAX_L 3000000

int zombie[MAX_L+1];
bool timer[MAX_L+MAX_ML+1];

int main (void)
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);

   int l, ml , mk, cm;
   cin>>l>>ml>>mk>>cm;

   for(int i=0;i<l;i++)
   {
     cin>>zombie[i];
   }
     int damage=0;

   for (int i=0;i<l;i++)
   {
     if(timer[i])
     damage-=mk;
     if(zombie[i]<=damage+mk)
     {
       damage+=mk;
       timer[i+ml]=true;
     }
     else {
       if(cm>0)
       cm--;
       else
      { cout<<"NO";
       return 0;
     }
     }
   }
   cout<<"YES";
   return 0;

}
