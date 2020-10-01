#include<iostream>
#include<windows.h>
#include<conio.h>
#include<time.h>


#define dino_first 35
#define tree_first 80

using namespace std;

int count=0;

bool right_leg=true;
bool left_leg=false;

int dino_h=dino_first;
int tree_x=tree_first;



int keyboard_input()// 키보드의 입력을 반환하는 함수이다.
{
  if(_kbhit())  // _kbhit ==  키보드가 입력받으면 1 리턴 아니면 0 리턴
  {
    return _getch();       // 키보드의 입력값을 반환하는 함수
  }
  else
   return 0;
}

void GotoXY(int x, int y) // 커서를 이동하여 공룡을 출력
{
    COORD Pos;
    Pos.X = x;
    Pos.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}



void dino(int y)
{
      GotoXY(0,y);
      cout<<"          ■■■■■■■ "<<endl;
      cout<<"         ■■ ■■■■■■"<<endl;
      cout<<"         ■■■■■■■■■"<<endl;
      cout<<"  ■      ■■■      "<<endl;
      cout<<"  ■■     ■■■■■■■  "<<endl;
      cout<<"  ■■■   ■■■■■     "<<endl;
      cout<<"  ■■■  ■■■■■■■■■ "<<endl;
      cout<<"   ■■■■■■■■■■■    "<<endl;
      cout<<"    ■■■■■■■■■■    "<<endl;
      cout<<"       ■■■■■■■    "<<endl;
      cout<<"       ■■■■■■     "<<endl;

if(right_leg)
{
    cout<<"       ■    ■■■    "<<endl;
    cout<<"       ■■          "<<endl;
    right_leg=false;
    left_leg=true;
}
else if(left_leg)
{


      cout<<"       ■■■  ■     "<<endl;
      cout<<"            ■■    "<<endl;
      right_leg=true;
      left_leg=false;

}
}

void tree(int x)
{
  GotoXY(x,42);
  cout<<"□□□□□"<<endl;
  GotoXY(x,43);
  cout<<" □□□ "<<endl;
  GotoXY(x,44);
  cout<<" □□□ "<<endl;
  GotoXY(x,45);
  cout<<" □□□ "<<endl;
  GotoXY(x,46);
  cout<<" □□□ "<<endl;
  GotoXY(x,47);
  cout<<" □□□ "<<endl;
}


bool gameover()
{
  if(tree_x<10&&dino_h>30)
  return true;
  else return false;
}


int main(void)
{
  system("mode con: cols=100 lines=50");
  system("title dino_kim");

  bool isjumping;

  int score=0;
  clock_t start,curr;
  start=clock();


  while(1)
  {
    curr = clock();          //현재시간
    if (((curr - start) / CLOCKS_PER_SEC) >= 1)  // 1초가 넘었을떄
        {
            score++;
            start = clock();
        }
    cout<<"score:"<<score;


    if(keyboard_input()=='z')
    {
      isjumping=true;
    }
    if(isjumping==true)
    {
      dino_h--;
    }
    else if(dino_h<dino_first)
    {
      dino_h++;
    }
    if(tree_x!=0)
    tree_x-=2;
    else
    tree_x=tree_first;



    dino(dino_h);
    tree(tree_x);
    Sleep(20);
    system("cls");
    if(dino_h<25)
    {
      isjumping=false;
    }
    if(gameover())
    {
    printf("===========================\n");
    printf("======G A M E O V E R======\n");
    printf("===========================\n");
    return 0;
    }
  }

  return 0;
}
