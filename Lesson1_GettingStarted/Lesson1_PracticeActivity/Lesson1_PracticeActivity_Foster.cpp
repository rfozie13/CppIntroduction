/***************************************
* Lesson 1: Chapter 2 Exercise 1
* Student: Rebecca Foster
* Date: May 2, 2023
******************************************/

/***************************************
Chapter 2 Exercise 1 in Book:
"1. Change the program to output the two lines
Hello, programming!
Here we go!"
***************************************/

//Could not download std_lib_facilities.h, so included these instead outlined in the drill
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
inline void keep_window_open() { char ch; cin >> ch; }

int main() // C++ programs start by executing the function main
{
	cout << "Hello, Programming\n"; // output “Hello, Programming!”
	cout << "Here we go!\n"; //output "Here we go!"
	keep_window_open(); // wait for a character to be entered, used in the drill
	return 0; //program will return a zero if terminated successfully
}