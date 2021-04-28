#include <iostream>
using namespace std;

// Declare functions
char board(char grid[][3]); //print the board
int userInput(int choice);
bool gridCheck(char player, int choice, char grid[][3]);
char chngPlayer(char player);
bool winCheck(char player, char grid[][3]);