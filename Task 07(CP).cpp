#include<iostream>
using namespace std;
main()
{

string name;
cout << "Enter the movie name: ";
cin >> name;

int adult;
cout << "Enter the adult ticket price: $";
cin >> adult;

int child;
cout << "Enter the child ticket price: $";
cin >> child;

int num1;
cout << "Enter the number of adult tickets sold: ";
cin >> num1;

int num2;
cout << "Enter the number of child tickets sold: ";
cin >> num2;

int charity;
cout << "Enter the percentage of the amount to be donated to charity: ";
cin >> charity;
cout<<endl; 
cout <<"Movie: "<< name <<endl;

int total;
total = (adult*num1) + (child*num2) ;
cout << "Total amount generated from ticket sales: $" <<total <<endl;

int donate;
donate = total / 10 ;
cout <<"Donation to charity (10%): $"<< donate <<endl;

int remain;
remain = total - donate;
cout << "Remaining amount after donation: $"<< remain;






}