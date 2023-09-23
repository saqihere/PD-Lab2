#include<iostream>
using namespace std;
main()
{

float vel;
cout << "Enter Initial Velocity (m/s): ";
cin >>vel;

float acc;
cout << "Enter Acceleration (m/s^2): ";
cin >>acc;

float time;
cout << "Enter Time (s): ";
cin >>time;

float fv;
fv = (acc*time) + vel;
cout << "Final Velocity (m/s): " <<fv;


}