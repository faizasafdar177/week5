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
{cout<<"Yes!"<<needed<<" hours left.";
}
}
end
