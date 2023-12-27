#include <stdio.h>
#include<conio.h>

void print(char board[][10], int n) {
    int i,j;
    for ( i = 0; i < n; i++) {
	for ( j = 0; j < n; j++) {
	    printf("%c  ", board[i][j]);
	}
	printf("\n");
    }
    printf("\n\n");
}

int isSafe(char board[][10], int n, int row, int col) {
    int i, j;

 /*   for (i = 0; i < col; i++) {
	if (board[row][i] == 'Q') {
	    return 0;
	}
    }

    for (i = row, j = col; i >= 0 && j >= 0; i--, j--) {
	if (board[i][j] == 'Q') {
	    return 0;
	}
    }

    for (i = row, j = col; j >= 0 && i < n; i++, j--) {
	if (board[i][j] == 'Q') {
	    return 0;
	}
    }
  */
    //towards Row varification
    i=row;
    j=col;
    while(j>=0){
      if(board[i][j]=='Q')
       return 0;
     j--;
  //For left Diagonal
    }

    i=row;
    j=col;
    while(j>=0 && i>=0){
      if(board[i][j]=='Q')
       return 0;
     j--;i--;
    }

    i=row;
    j=col;
    while(j>=0 && i<n){
      if(board[i][j]=='Q')
       return 0;
     j--; i++;
    }
    return 1;
}

void solve(char board[][10], int n, int col) {
    int row;
    if (col >= n) {
	print(board, n);
	return;
    }

    for ( row = 0; row < n; row++) {
	if (isSafe(board, n, row, col)) {
	    board[row][col] = 'Q';
	    solve(board, n, col + 1);
	    board[row][col] = '_';
	}
    }
}

int main() {
    int n = 4,i,j;
    char board[10][10];
    int col = 0;
    clrscr();
    for ( i = 0; i < n; i++) {
	for ( j = 0; j < n; j++) {
	    board[i][j] = '_';
	}
    }

    printf("\n\n");
    solve(board, n, col);
    getch();

    return 0;
}
