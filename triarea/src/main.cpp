/*
Kattis - Triangle Area Problem
Function and Unit Testing with Doctest
Updated By: Devin Shea
CSCI 111
Date: 9-Feb-2026

Read and solve Triangle Area problem: https://open.kattis.com/problems/triarea

Algorithm:
    1. Read height and base of a right triangle
    2. Define a function to find and return area given height and base of a right triangle
        a. Area is given by the equation: (Base * Height)/2
    3. Call the function to find and print the result
    4. Write a test function to test the area function implemented in step 2
*/

#include <iostream>
#include "triangle.hpp"
#include <cstdio>
#include <iomanip>

using namespace std;

int main() {
    int height, base;
    cin >> height >> base;
    float ans = float(base * height) / 2;
    //cout << ans << endl;
    printf("%.7f\n", ans)
    return 0;
}