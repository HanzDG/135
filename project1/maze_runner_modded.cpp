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
    int start_row, start_col, end_row, end_col;
    int row;
    int col;
    bool semicol = false;

    int maze[10][10]; 
    for (int r = 0; r < 10; r++){
        for (int c = 0; c < 10; c++){
            cin >> maze[r][c];
        }
    }
    // reads the maze
    cin >> start_row;
    cin >> start_col;

    // reads starting positions
    cin >> end_row;
    cin >> end_col;

    // skips the semicolon thats in the open
    cin >> x;

    row = start_row;
    col = start_col;

    //maze[row][col+1] == 0 && col < 5
    while (cin >> x) {
        for (int i = 0; i < x.length(); i++) {
            char ch = x[i];
            if (ch == ';' && semicol == false){
                semicol = true;
                break;
            }
            if (ch == 'R' && maze[row][col+1] == 0 && col < 10) {
                col += 1;
            }
            else if (ch == 'L' && maze[row][col-1] == 0 && col > 0) {
                col -= 1;
            }
            else if (ch == 'U' && maze[row-1][col] == 0 && row > 0) {
                row -= 1;
            }
            else if (ch == 'D' && maze[row+1][col] == 0 && row < 10) {
                row += 1;
            }
        }
            
    if (semicol) {
        if (row == end_row && col == end_col) {
            cout << "You got out of the maze." << endl;   
    }
        else {
            cout << "You are stuck in the maze." << endl;    
    }
    row = start_row;
    col = start_col;
    semicol = false;
    }
}
}