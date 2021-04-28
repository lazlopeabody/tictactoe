#include <iostream>
#include "tictactoe_functions.hpp"

int main() { 

    char player = 'X'; 
    int choice = 0; 
    bool endgame = false;
    bool gc, wc = false;
    char grid[3][3] = { {'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'} };

    while (endgame != true) {

        board(grid);
        gc = gridCheck(player, userInput(choice), grid);
        wc = winCheck(player, grid);
        cout << gc << " - " << wc << endl;
        
        if (wc == 1)
            endgame = true;
        else if (wc == 0 && gc == 1)
            player = chngPlayer(player);

    } 
        
}