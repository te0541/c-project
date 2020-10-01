#include<iostream>

using namespace std;


class simple
{
private:
  static int simobjcnt;
public:
  simple()
  {
    simobjcnt++;
    cout<<simobjcnt<<"번째 객체 생성"<<endl;
  }
};
int simple::simobjcnt=0;
class complex
{
private:
  static int comobjcnt;
public:
  complex()
  {
    comobjcnt++;
    cout<<comobjcnt<<"번째 객체 생성"<<endl;
  }
  complex(complex &ref)
  {
    comobjcnt++;
    cout<<comobjcnt<<"번째 객체 생성(복제)"<<endl;
  }
};
int complex::comobjcnt=0;

int main(void)
{
  simple sim1;
  simple sim2;

  complex com1;
  complex com2=com1;
  complex();



  return 0;
}
