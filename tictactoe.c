#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <curses.h>

char board[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
int choice, player;

int checkForWin();
void drawBoard();
void markBoard(char mark);

int main() {

    int status;
    char mark;

    player = 1;

    do {
        drawBoard();
        player = (player % 2) ? 1 : 2;

        printf("Player %d, enter an available move (1-9): ", player);
        scanf("%d", &choice);

        mark = (player == 1) ? 'X' : 'O';

        markBoard(mark);

        status = checkForWin();

        player++;

    } while (status == -1);

    if (status == 1) 
        printf("==>\aPlayer %d win\n", --player);
    else
        printf("==>\aGame draw\n");

}

/***********************
FUNCTION DRAWS THE BOARD
************************/

void drawBoard(void) {

    system("cls");
    printf("   |   |\n %c | %c | %c\n___|___|___\n   |   |\n %c | %c | %c\n___|___|___\n   |   |\n %c | %c | %c\n   |   |\n", board[1], board[2],board[3],board[4],board[5],board[6],board[7],board[8],board[9]);

}

/*************************
 FUNCTION TO RETURN GAME STATUS
 1 GAME IS OVER WITH RESULT
 -1 GAME IS IN PROGRESS
 0 GAME OVER AND NO RESULT
 ****************************/

int checkForWin(char a[9]) {

    int result = 0;

    if (board[1] == board[2] && board[2] == board[3]) {
        result = 1;
    }
    else if (board[4] == board[5] && board[5] == board[6]) {
        result = 1;
    }
    else if (board[7] == board[8] && board[8] == board[9]) {
        result = 1;
    }
    else if (board[1] == board[4] && board[4] == board[7]) {
        result = 1;
    }
    else if (board[2] == board[5] && board[5] == board[8]) {
        result = 1;
    }
    else if (board[3] == board[6] && board[6] == board[9]) {
        result = 1;
    }
    else if (board[1] == board[5] && board[5] == board[9]) {
        result = 1;
    }
    else if (board[3] == board[5] && board[5] == board[7]) {
        result = 1;
    }
    else if (board[1] != '1' && board[2] != '2' && board[3] != '3' && board[4] != '4' && board[5] != '5' &&
            board[6] != '6' && board[7] != '7' && board[8] != '8' && board[9] != '9') {
        result = 0;
    }
    else {
        result = -1;
    }

    return result; 

}

/**************************
FUNCTION SETS THE BOARD
WITH CORRECT X OR O IN CHOSEN SPACE
***************************/

void markBoard(char mark) {

    if(choice == 1 && board[1] == '1')
        board[1] = mark;
    else if (choice == 2 && board[2] == '2')
        board[2] = mark;
    else if (choice == 3 && board[3] == '3')
        board[3] = mark;
    else if (choice == 4 && board[4] == '4')
        board[4] = mark;
    else if (choice == 5 && board[5] == '5')
        board[5] = mark;
    else if (choice == 6 && board[6] == '6')
        board[6] = mark;
    else if (choice == 7 && board[7] == '7')
        board[7] = mark;
    else if (choice == 8 && board[8] == '8')
        board[8] = mark;
    else if (choice == 9 && board[9] == '9')
        board[9] = mark;
    else {
        printf("Invalid move\n");

        player--;
        getchar();
    }
}


    
    

