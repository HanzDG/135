/*
Author: Hanz De Guzman
Course: CSCI-136
Instructor: Gennadiy Maryash
Assignment: Lab2A, e.g., Lab1A

*/

#include <iostream>
using namespace std;

int main() 
{
    string x;

    int maze[6][6] = {
   1,0,1,1,1,1,
   1,0,0,0,1,1,
   1,0,1,0,0,1,
   1,0,1,0,1,1,
   1,0,0,0,0,0,
   1,1,1,1,1,1
    };

    while (cin >> x) {
        for (int i = 0; i < x.length(); i++) {
            char ch = x[i];
            if (ch == 'R') {
                cout << "Right" << endl;
            }
            else if (ch == 'L') {
                cout << "Left" << endl;
            }
            else if (ch == 'U') {
                cout << "Up" << endl;
            }
            else if (ch == 'D') {
                cout << "Down" << endl;
            }
        } 
    }


}