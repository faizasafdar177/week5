#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int x,int y);
void printMaze();
void printEnemy();
void printPlayer();
void eraseEnemy();
void moveEnemy();
void movePlayerLeft();
void movePlayerRight();
void erasePlayer();
void printEnemy2();
void moveEnemy2();
void eraseEnemy2();
void printEnemy3();
void eraseEnemy3();
void moveEnemy3();
char getCharAtxy(short int x, short int y);

int pX = 15, pY = 15;
int eX = 2, eY = 2;
int tX = 5, tY = 5;
int cX=8,cY=8;

main()
{
  system("cls");
  printMaze();
  printPlayer();
  printEnemy2();
  printEnemy();
  printEnemy3();
  while (true)
  {
    if (GetAsyncKeyState(VK_LEFT))
    {
      movePlayerLeft();
    }
    if (GetAsyncKeyState(VK_RIGHT))
    {
      movePlayerRight();
    }
    
    moveEnemy2();
    moveEnemy();
    moveEnemy3();
    Sleep(200);
  }
}

void gotoxy(int x, int y)
{
  COORD coordinates;
  coordinates.X = x;
  coordinates.Y = y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}

void printMaze()
{
  cout << "#############################################################" << endl;
  cout << "#                                                           #" << endl;
  cout << "#                                                           #" << endl;
  cout << "#                                                           #" << endl;
  cout << "#                                                           #" << endl;
  cout << "#                                                           #" << endl;
  cout << "#                                                           #" << endl;
  cout << "#                                                           #" << endl;
  cout << "#                                                           #" << endl;
  cout << "#                                                           #" << endl;
  cout << "#                                                           #" << endl;
  cout << "#                                                           #" << endl;
  cout << "#                                                           #" << endl;
  cout << "#                                                           #" << endl;
  cout << "#                                                           #" << endl;
  cout << "#                                                           #" << endl;
  cout << "#                                                           #" << endl;
  cout << "#                                                           #" << endl;
  cout << "#                                                           #" << endl;
  cout << "#                                                           #" << endl;
  cout << "#                                                           #" << endl;
  cout << "#                                                           #" << endl;
  cout << "#                                                           #" << endl;
  cout << "#                                                           #" << endl;
  cout << "#                                                           #" << endl;
  cout << "#                                                           #" << endl;
  cout << "#                                                           #" << endl;
  cout << "#                                                           #" << endl;
  cout << "#                                                           #" << endl;
  cout << "#                                                           #" << endl;
  cout << "#                                                           #" << endl;
  cout << "#                                                           #" << endl;
  cout << "#                                                           #" << endl;
  cout << "#############################################################" << endl;
}

void printEnemy()
{
 gotoxy(eX, eY);
  cout << "   O   " << endl;
  gotoxy(eX, eY + 1);
  cout << "  /|\\  " << endl;
  gotoxy(eX, eY + 2);
  cout << "  / \\  " << endl; 
}

void printEnemy2()
{
  gotoxy(eX,eY);
  cout << "   O   " << endl;
  gotoxy(eX, eY + 1);
  cout << "  /|\\  " << endl;
  gotoxy(eX, eY + 2);
  cout << "  / \\  " << endl;
  
  
}

void printPlayer()
{gotoxy(pX, pY+8);
 cout << "  ______ " << endl;
 gotoxy(pX, pY + 9);
 cout << " /      \\" << endl;
 gotoxy(pX, pY + 10);
 cout << "|  O O   |" << endl;
 gotoxy(pX, pY + 11);
 cout << "|   ^    |" << endl;
 gotoxy(pX, pY + 12);
 cout << "|  \\_/   |" << endl;
 gotoxy(pX, pY + 13);
 cout << " \\______/ " << endl;

  
}

void eraseEnemy()
{
  gotoxy(eX, eY);
  cout << "                  ";
  gotoxy(eX, eY + 1);
  cout << "                  ";
  gotoxy(eX, eY + 2);
  cout << "                  ";
  
}

void moveEnemy()
{
  eraseEnemy();
  eX = eX + 1;
  if (eX == 28)
  {
    eX = 2;
  }
  printEnemy();
}

void erasePlayer()
{
  gotoxy(pX, pY);
  cout << "                       " << endl;
  gotoxy(pX, pY + 8);
  cout << "                       " << endl;
  gotoxy(pX, pY + 9);
  cout << "                       " << endl;
  gotoxy(pX, pY + 10);
  cout << "                       " << endl;
  gotoxy(pX, pY + 11);
  cout << "                       " << endl;
  gotoxy(pX, pY+12);
  cout << "                       " << endl;
}

void movePlayerLeft()


{
  erasePlayer();
  pX = pX - 1;
  printPlayer();
}


void movePlayerRight()


{
  erasePlayer();
  pX = pX + 1;
  printPlayer();
}



void printEnemy3()
{
  gotoxy(tX, tY);
  cout << "   O   " << endl;
  gotoxy(tX, tY + 1);
  cout << "  /|\\  " << endl;
  gotoxy(tX, tY + 2);
  cout << "  / \\  " << endl;
}


void moveEnemy3()
{
  eraseEnemy3();
  tX = tX + 1;
  if (tX ==29)
  {
    tX = 5;
  }
  printEnemy3();
}
void eraseEnemy3()
{
  gotoxy(tX, tY);
  cout << "                  ";
  gotoxy(tX, tY+1);
  cout << "                  ";
  gotoxy(tX, tY+2);
  cout << "                  ";
  
}
char getCharAtxy(short int x, short int y)
{
CHAR_INFO ci;
COORD xy = {0, 0};
SMALL_RECT rect = {x, y, x, y};
COORD coordBufSize;
coordBufSize.X = 1;
coordBufSize.Y = 1;
return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE), &ci, coordBufSize, xy, &rect) ? ci.Char.AsciiChar
: ' ';
}

void eraseEnemy2()
{
  gotoxy(cX, cY);
  cout << "                  ";
  gotoxy(cX, cY+1);
  cout << "                  ";
  gotoxy(cX, cY+2);
  cout << "                  ";
  
}
void moveEnemy2()
{
  eraseEnemy2();
  cX = cX + 1;
  cY= cY+1;
  if (cX == 28)
  {
    cX = 8;
    cY=8;
  }
  
  printEnemy2();
}

