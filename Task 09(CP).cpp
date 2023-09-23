#include<iostream>
using namespace std;
main()
{

int a;
cout << "Enter a 4-digit number: ";
cin >> a;
int b,c,d,e;

b = a % 10;
a = a / 10;
c = a % 10;
a = a / 10;
d = a % 10;
a = a / 10;
e = a % 10;

int sum; 
sum = b + c + d + e;
cout  << "Sum of the individual digits: " << sum;
 


}