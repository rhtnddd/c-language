#include <stdio.h>
#include <stdlib.h>
#define SIZE 15
char board[SIZE][SIZE];
void initBoard()
{
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            board[i][j] = '.';
        }
    }
}

void printBoard()
{
    printf("   ");
    for (int i = 0; i < SIZE; i++)
    {
        printf("%2d ", i);
    }
    printf("\n");
    for (int i = 0; i < SIZE; i++)
    {
        printf("%2d ", i);
        for (int j = 0; j < SIZE; j++)
        {
            printf(" %c ", board[i][j]);
        }
        printf("\n");
    }
}

int isValidMove(int row, int col)
{
    return row >= 0 && row < SIZE && col >= 0 && col < SIZE && board[row][col] == '.';
}

int checkDirection(int row, int col, int dRow, int dCol, char stone)
{
    int count = 1;
    for (int i = 1; i < 5; i++) {
        int r = row + i * dRow;
        int c = col + i * dCol;
        if (r < 0 || r >= SIZE || c < 0 || c >= SIZE || board[r][c] != stone) break;
        count++;
    }
    for (int i = 1; i < 5; i++) {
        int r = row - i * dRow;
        int c = col - i * dCol;
        if (r < 0 || r >= SIZE || c < 0 || c >= SIZE || board[r][c] != stone)
        {
            break;
        }
        count++;
    }
    return count >= 5;
}

int checkWin(int row, int col, char stone)
{
    return checkDirection(row, col, 0, 1, stone) || checkDirection(row, col, 1, 0, stone) || checkDirection(row, col, 1, 1, stone) || checkDirection(row, col, 1, -1, stone);
}

int isBoardFull()
{
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            if (board[i][j] == '.')
            {
                return 0;
            }
        }
    }
    return 1;
}

void playGame()
{
    int row, col;
    char currentPlayer = 'O';
    while (1)
    {
        printBoard();
        printf("현재 플레이어: %c\n", currentPlayer);
        printf("좌표 입력 (행 열): ");
        scanf("%d %d", &row, &col);

        if (!isValidMove(row, col))
        {
            printf("[오류] 잘못된 입력입니다. 다시 입력하세요.\n");
            continue;
        }
        board[row][col] = currentPlayer;
        if (checkWin(row, col, currentPlayer))
        {
            printBoard();
            if (currentPlayer == 'O')
            {
                printf("흑 승리!\n");
            }
            else{
                printf("백 승리!\n");
            }
            break;
        }
        if (isBoardFull())
        {
            printBoard();
            printf("무승부!\n");
            break;
        }
        currentPlayer = (currentPlayer == 'O') ? 'X' : 'O';
    }
}

int main(void)
{
    int choice;
    while (1)
    {
        printf("\n===== 오목 게임 =====\n");
        printf("1. 새 게임 시작\n");
        printf("2. 종료\n");
        printf("선택 >> ");
        scanf("%d", &choice);
        if (choice == 1)
        {
            initBoard();
            playGame();
        }
        else if (choice == 2)
        {
            printf("프로그램을 종료합니다.\n");
            break;
        }
        else
        {
            printf("잘못된 메뉴 선택입니다.\n");
        }
    }
    return 0;
}