// max.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
//Write a function that receives two integers and returns the maximum of the two call that function and then print the result
#include <iostream>
using namespace std;
int maximum(int x, int y) {
    int big;
    if (x > y) {
        big = x;
    }
    else {
        big = y; 
    }
    return big;
}
int main()
{
    int x = 2;
    int y = 3;
    cout << "The maximum num is ";
   //int result = max(x, y);
   cout << maximum(x, y);
}

