#include<iostream>
using namespace std;
main()
{
int min;
cout <<"Number of Minutes: ";
cin >> min;

int frame;
cout <<"Frames per Second: ";
cin >> frame;

int result;
result = (min*60)*frame;
cout << "Total Number of Frames: "<< result <<endl;

}