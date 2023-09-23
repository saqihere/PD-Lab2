#include<iostream>
using namespace std;
main()
{

float post;
cout << "Enter Imposter Count: ";
cin >> post;

float play;
cout << "Enter Player Count: ";
cin >> play;

float result;
result = 100 * (post / play); 
cout << "Chance of being an imposter: " <<result << "%";









}