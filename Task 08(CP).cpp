#include<iostream>
using namespace std;
main()
{
float veg;
cout << "Enter vegetable price per kilogram (in coins): ";
cin >> veg;

float fruit;
cout << "Enter fruit price per kilogram (in coins): ";
cin >> fruit;

float num1;
cout << "Enter total kilograms of vegetables: ";
cin >> num1;

float num2;
cout << "Enter total kilograms of fruits: ";
cin >> num2;

float result;
result = ((veg*num1) + (fruit*num2)) / 1.94;
cout << "Total earnings in Rupees (Rps): " <<result;




}