#include<bits/stdc++.h>
#define N 4
using namespace std;
void printSolution(int board[N][N]) 
{ 
    for (int i = 0; i < N; i++) { 
        for (int j = 0; j < N; j++) 
            printf(" %d ", board[i][j]); 
        printf("\n"); 
    } 
}
bool isSafe(int board[N][N], int row , int col){
    int i,j;


}
bool solveNQUtil(int board[N][N],int col){
    if (col >= N) 
        return true; 
    for (int i = 0; i < N; i++) { 
        if(isSafe(board,i,col)){
            board[i][col]=1;
           if (solveNQUtil(board, col + 1))  // rest queens 
                return true;  
            board[N][N]=0;
        }
    }
  

}
int main(){
    int board[N][N] = { { 0, 0, 0, 0 }, 
                        { 0, 0, 0, 0 }, 
                        { 0, 0, 0, 0 }, 
                        { 0, 0, 0, 0 } }; 
  
    if (solveNQUtil(board, 0) == false) { 
        printf("Solution does not exist"); 
        return false; 
    } 
  
    printSolution(board); 
    return 0;
}