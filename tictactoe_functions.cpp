#include <iostream>
using namespace std;

// print board, changes to array are made directly to array. This just prints what is in array. 
char board(char grid[][3]) {

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            std::cout << " " << grid[i][j];
            if (j != 2) {
                std::cout << " | "; 
            }
            else { 
                std::cout << endl; 
            }
        }

        if (i != 2) {
            std::cout << "___|____|___" << "\n";
        }
        else {
            std::cout << endl; 
        }
    }
    return 0;
}

// function checks if qaudrant is taken, if not will set the qaudtrant
// parameters are the player symbol, player choice,  
// and the tictactoe array 
bool gridCheck(char player, int choice, char grid[][3]) 
{

    switch (choice)
    {
    case 1:
        if (grid[0][0] == 'X' || grid[0][0] == 'O') {
            cout << "Sorry Player " << player << " The QUAD is taken. Input your choice again." << endl;
            return false;
            break;
        }
        else {
            grid[0][0] = player;
            return true;
            break;
            }
    case 2:
        if (grid[0][1] == 'X' || grid[0][1] == 'O') {
            cout << "Sorry Player " << player << " The QUAD is taken. Input your choice again." << endl;
            return false;
            break;
        }
        else {
            grid[0][1] = player; 
            return true;
            } 
    case 3:
        if (grid[0][2] == 'X' || grid[0][2] == 'O') {
            cout << "Sorry Player " << player << " The QUAD is taken. Input your choice again." << endl;
            return false;
            break;
        }
        else {
            grid[0][2] = player; 
            return true;
            }
    case 4:
        if (grid[1][0] == 'X' || grid[1][0] == 'O') {
            cout << "Sorry Player " << player << " The QUAD is taken. Input your choice again." << endl;
            return false; 
            break;
        }
        else {
            grid[1][0] = player; 
            return true;
            break;
        }
    case 5:
        if (grid[1][1] == 'X' || grid[1][1] == 'O') {
            cout << "Sorry Player " << player << " The QUAD is taken. Input your choice again." << endl;
            return false;
            break;
        }
        else {
            grid[1][1] = player; 
            return true;
            break;
        }
    case 6:
        if (grid[1][2] == 'X' || grid[1][2] == 'O') {
            cout << "Sorry Player " << player << " The QUAD is taken. Input your choice again." << endl;
            return false;
            break;
        }
        else {
            grid[1][2] = player; 
            return true;
            break;
        }
    case 7:
        if (grid[2][0] == 'X' || grid[2][0] == 'O') {
            cout << "Sorry Player " << player << " The QUAD is taken. Input your choice again." << endl;
            return false;
            break;
        }
        else {
            grid[2][0] = player; 
            return true;
            break;
        }
    case 8:
        if (grid[2][1] == 'X' || grid[2][1] == 'O') {
            cout << "Sorry Player " << player << " The QUAD is taken. Input your choice again." << endl;
            return false;
            break;
        }
        else {
            grid[2][1] = player; 
            return true;
            break;
        }
    case 9:
        if (grid[2][2] == 'X' || grid[2][2] == 'O') {
            cout << "Sorry Player " << player << " The QUAD is taken. Input your choice again." << endl;
            return false;
            break;
        }
        else {
            grid[2][2] = player; 
            return true;
            break; 
        }

    default:
        if (choice > 9 || choice == 0) {
            cout << "Your number is not good. Try again with Input [1-9] Player ..." << endl;
            return false;
            break;
        }
    
    }
    return false;
}

// function is designed to ask user for choice and return this choice
int userInput(int choice) {
    bool valid = false;

    do {
        cout << "Please enter your Grid Number: " << endl;
        cin >> choice;

        if (!cin) {
            cout << "Choice was not an int..." << endl;
            break;
        }
        else
            valid = true; 
    } while (!valid);

    return choice;

}

// function is designed to change the player, default is X first. 
char chngPlayer(char player) {

    if (player == 'X') {
        player = 'O';
        }
    else if (player == 'O') 
        player = 'X';
    
    return player;
}

// function to check if the player has won.  
bool winCheck(char player, char grid[][3]) {

    // win row 1
    if (grid[0][0] == player && grid[0][1] == player && grid[0][2] == player) {
        cout << "Congrats! Player " << player << ", YOU WIN!!" << endl;
        return true;
        }
    // win row 2
    else if (grid[1][0] == player && grid[1][1] == player && grid[1][2] == player) {
        cout << "Congrats! Player " << player << ", YOU WIN!!" << endl;
        return true;
        }
    // win row 3
    else if (grid[2][0] == player && grid[2][1] == player && grid[2][2] == player) {
        cout << "Congrats! Player " << player << ", YOU WIN!!" << endl;
        return true;
    }
    // win diag - l to r
    else if (grid[0][0] == player && grid[1][1] == player && grid[2][2] == player) {
        cout << "Congrats! Player " << player << ", YOU WIN!!" << endl;
        return true;
        }
    // win diag - r to l 
    else if (grid[0][2] == player && grid[1][1] == player && grid[2][0] == player) {
        cout << "Congrats! Player " << player << ", YOU WIN!!" << endl;
        return true;
        }
    // win col 1
    else if (grid[0][0] == player && grid[1][0] == player && grid[2][0] == player) {
        cout << "Congrats! Player " << player << ", YOU WIN!!" << endl;
        return true;
        }
    // win col 2
    else if (grid[0][1] == player && grid[1][1] == player && grid[2][1] == player) {
        cout << "Congrats! Player " << player << ", YOU WIN!!" << endl;
        return true;
    }
    // win col 3
    else if (grid[0][2] == player && grid[1][2] == player && grid[2][2] == player) {
        cout << "Congrats! Player " << player << ", YOU WIN!!" << endl;
        return true;
    }

    else
        return false;

}