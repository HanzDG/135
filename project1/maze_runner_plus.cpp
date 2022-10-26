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
    int row = 0;
    int col = 1;

    bool semicol = false;

    int maze[6][6] = {
   1,0,1,1,1,1,
   1,0,0,0,1,1,
   1,0,1,0,0,1,
   1,0,1,0,1,1,
   1,0,0,0,0,0,
   1,1,1,1,1,1
    };
    //maze[row][col+1] == 0 && col < 5
    while (cin >> x) {
        for (int i = 0; i < x.length(); i++) {
            char ch = x[i];
            if (ch == ';' && semicol == false){
                semicol = true;
                break;
            }
            if (ch == 'R' && maze[row][col+1] == 0 && col < 5) {
                col += 1;
            }
            else if (ch == 'L' && maze[row][col-1] == 0 && col > 0) {
                col -= 1;
            }
            else if (ch == 'U' && maze[row-1][col] == 0 && row > 0) {
                row -= 1;
            }
            else if (ch == 'D' && maze[row+1][col] == 0 && row < 5) {
                row += 1;
            }
        }
            
    if (semicol) {
        if (row == 4 && col == 5) {
            cout << "You got out of the maze." << endl;   
    }
        else {
            cout << "You are stuck in the maze." << endl;    
    }
    row = 0;
    col = 1;
    semicol = false;
    }
}
}