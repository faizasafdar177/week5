task1:
#include<iostream>
using namespace std;

int value1=10;
int value2=20;

int sum(){
value1=40;
return value1+value2;
}

main()
{
int x=value1;
x=20;
value2=sum();
cout<<value1<< "  "<<value2;
}
task2:
#include<iostream>
using namespace std;
void volume(float length,float width,float height);
int main()
{float length,width,height;
string meters; 
cout<<"Enter the length of the pyramid(in meters): ";
cin>>length;
cout<<"Enter the width of the pyramids(in meters): ";
cin>>width;
cout<<"Enter the height of the pyramids(in meters): ";
cin>>height;
cout<<"Enter the desired output unit(millimeters,centimeters,meters,kilometers): ";
cin>>meters;
volume(length,width,height);
} 

void volume(float length,float width,float height)
{
float volume=(length*width*height)/3;
cout<<"The volume of the pyramids is: "<<volume<<"cubic meters";
}
task3:#include<iostream>
using namespace std;
void finalPrice(char code,float price);
main()
{char code;
float price;
cout<<"Enter the vehicle type code(M, E,S,V,T): ";
cin>>code;
cout<<"Enter the price of the vehicle: $";
cin>>price;
finalPrice(code,price);
}

void finalPrice(char code,float price)
{

float tax=0.08*300+300;
cout<<"The final price of a vehicle of type "<<code<<"after adding the tax is $"<<tax;
}
task4:
#include<iostream>
using namespace std;
void projectTimeCalculation(int hours,float days,int workers);
main()
{ int hours;
float days;
int workers;
cout<<"Enter the needed hours: ";
cin>>hours;
cout<<"Enter the days that the firm has: ";
cin>>days;
cout<<"Enter the number of all workers: ";
cin>>workers;
projectTimeCalculation(hours,days,workers);
}
void projectTimeCalculation(int hours,float days,int workers)
{
     float remainingDays = days - (days*10/100);
     int work=(remainingDays*10)*workers;
     int needed=work-hours;

if(needed<hours)
{cout<<"Not enough time! "<<needed<<" hours needed.";
}
if(needed>hours)
{cout<<"Yes!"<<needed<<" hours left.";task:5
#include<iostream>
#include<conio.h>
using namespace std;
float calculateCostPerProduct(float price, float quantity);
void printProductData(string name, float price, float quantity,  float total);
void display();
int menue();
void display()
{
 cout<<" ============================================================" <<endl;
 cout<<"                  pizza shop menue                           "<< endl;
 cout<<" ============================================================"<< endl;
 cout<< endl;
 cout<< "Name of Product    \t||Price         "<< endl;
 cout<< "1.Veggie pizza     \t||RP.4000       "<< endl;
 cout<< "2.meat pizza       \t||RP.5000       "<< endl;
 cout<< "3.salad pizza      \t||RP.7000       "<< endl;
  }
int menue()

{
int option;
cout << "Select one of the following options number..." << endl;
cout << "1. Add 1st Product Data" << endl;
cout << "2. Add 2nd Product Data" << endl;
cout << "3. Add 3rd Product Data" << endl;
cout << "4. Calculate Total" << endl;
cout << "5. View All Products Data" << endl;
cout << "6. Exit" << endl;
cout << "Your Option.. ";
cin >> option;
return option;}

main()
{string name1 = "", name2 = "", name3 = "";
float price1 = 0.0, price2 = 0.0, price3 = 0.0;
int quantity1 = 0, quantity2 = 0, quantity3 = 0;
float total1 = 0.0, total2 = 0.0, total3 = 0.0;
int option;
while (true)
{
display();
option = menue();
if (option == 1)
{
cout << "Enter the name of 1st Product: ";
cin >> name1;
cout << "Enter the price of 1st Product: ";
cin >> price1;
cout << "Enter the quantity of 1st Product: ";
cin >> quantity1;
}
if (option == 2)
{
cout << "Enter the name of 2nd Product: ";
cin >> name2;
cout << "Enter the price of 2nd Product: ";
cin >> price2;
cout << "Enter the quantity of 2nd Product: ";
cin >> quantity2;

}
if (option == 3)
{
cout << "Enter the name of 3rd Product: ";
cin >> name3;
cout << "Enter the price of 3rd Product: ";
cin >> price3;
cout << "Enter the quantity of 3rd Product: ";
cin >> quantity3;
}

if (option == 4)
{
total1 = price1 * quantity1;

total2 = price2 * quantity2;

total3 = price3 * quantity3;

float totalPayable = total1 + total2 + total3;
cout << "Total Payable Amount : " << totalPayable << endl;
}
if (option == 5)
{
cout << "All Products Data" << endl;
cout << "Name" << "\t" << "Price " << "\t" << "Quantity" << "\t" << "Total" << endl;
cout << name1 << "\t" << price1 << "\t" << quantity1 << "\t" << total1 << endl;
cout << name2 << "\t" << price2 << "\t" << quantity2 << "\t" << total2 << endl;
cout << name3 << "\t" << price3 << "\t" << quantity3 << "\t" << total3 << endl;
}
if (option == 6)
{
return 0;
}
cout << "Press any Key to Continue: ";
getch();
system("cls");
}}
 task6:
#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int x,int y);
void movePlayer(int x,int y);
void printMaze();
main()
{
int x=4, y=4;
system("cls");
printMaze();
while(true)
{movePlayer(x,y);
x=x+1;
if(x==31)
{ x=4;
}
}
}
void movePlayer(int x,int y)
{
gotoxy(x,y);
cout<< "P";
Sleep(100);
gotoxy(x,y);
cout<<" ";
}
void printMaze()
{
cout<<"###########################################################################################################"<<endl;
cout<<"#                                                                                                         #"<<endl;
cout<<"#                                                                                                         #"<<endl;
cout<<"#                                                                                                         #"<<endl;
cout<<"#                                                                                                         #"<<endl;
cout<<"#                                                                                                         #"<<endl;
cout<<"#                                                                                                         #"<<endl;
cout<<"#                                                                                                         #"<<endl;
cout<<"#                                                                                                         #"<<endl;
cout<<"#                                                                                                         #"<<endl;
cout<<"#                                                                                                         #"<<endl;
cout<<"#                                                                                                         #"<<endl;
cout<<"#                                                                                                         #"<<endl;
cout<<"#                                                                                                         #"<<endl;
cout<<"#                                                                                                         #"<<endl;
cout<<"#                                                                                                         #"<<endl;
cout<<"#                                                                                                         #"<<endl;
cout<<"#                                                                                                         #"<<endl;
cout<<"#                                                                                                         #"<<endl;
cout<<"#                                                                                                         #"<<endl;
cout<<"#                                                                                                         #"<<endl;
cout<<"#                                                                                                         #"<<endl;
cout<<"#                                                                                                         #"<<endl;
cout<<"#                                                                                                         #"<<endl;
cout<<"#                                                                                                         #"<<endl;
cout<<"#                                                                                                         #"<<endl;
cout<<"###########################################################################################################"<<endl; 
}                                                                                                        
void gotoxy(int x,int y)
{
COORD coordinates;
coordinates.X= x;
coordinates.X= x;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
end

}
}

