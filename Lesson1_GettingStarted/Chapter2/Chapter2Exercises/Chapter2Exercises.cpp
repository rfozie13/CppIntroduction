#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
inline void keep_window_open() { char ch; cin >> ch; }
int exercise1();
int exercise2();
int exercise3();

int main() 
{
	exercise1();
	exercise2();
	exercise3();
	return 0;
}

int exercise1()
{
	// Change the program to output the two lines "Hello, programming!" and "Here we go!"
	cout << "Hello, programming! \n";
	cout << "Here we go!\n";
	return 1;
}

int exercise2()
{
	// write a program that lists the instructions for a computer to find the bathroom
	cout << "Open front door by inserting key into keyhole, turning clockwise, and pushing on the door\n";
	cout << "Remove key from keyhole and walk forward ten steps and turn to face the left\n";
	cout << "Take one step forward\n";
	cout << "Turn to face the right\n";
	cout << "Open door \n";
	cout << "Bathroom is right in front of you\n";
	return 2;
}

int exercise3()
{
	//write a decription to get from my front door to the car
	cout << "Walk forward five steps\n";
	cout << "Turn to face the left, walk forward five steps\n";
	cout << "Turn to face the right, push down on door handle, pull handle towards you\n";
	cout << "Walk through doorway. You are now outside.\n";
	cout << "Walk straight 25 feet. You are at the car.\n";
	return 3;
}