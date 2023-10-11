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
 
