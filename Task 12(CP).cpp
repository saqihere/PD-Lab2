#include<iostream>
using namespace std;
main()
{
int met;
cout << "Number of square meters you can paint: ";
cin >> met;

int width;
cout << "Width of the single wall (in meters): ";
cin >> width;

int height;
cout << "Height of the single wall (in meters): ";
cin >> height;

int num;
num = met / (width*height);
cout << "Number of walls you can paint: " << num;

}