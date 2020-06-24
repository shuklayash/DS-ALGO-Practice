#include<bits/stdc++.h>
using namespace std;
#define N 4

void printSolution(int sol[N][N]) 
{ 
	for (int i = 0; i < N; i++) { 
		for (int j = 0; j < N; j++) 
			cout<<sol[i][j]<<" "; 
		cout<<"\n"; 
	} 
} 
bool isSafe(int arr[N][N], int x,int y){
    if(arr[x][y]==1 && x>=0 && y>=0 && x<=N-1 && y<=N-1){ // boundary condition 
        return true;
    }
    return false;

}
bool solveMaze(int arr[N][N], int x, int y, int sol[N][N]){
    if(arr[x][y]==1 && x== N-1 && y==N-1){ // condition for final break ;
        sol[x][y]=1;
        return true;
    }
    if(isSafe(arr,x,y)){
        sol[x][y]=1;
        if(solveMaze(arr,x+1,y,sol)==true){
            return true;
        }
        if(solveMaze(arr,x,y+1,sol)==true){
            return true;
        }
        sol[x][y]=0;
        return false;
    }
    return false;

}
int main(){
    int arr[4][4]={ { 1, 0, 0, 0 }, 
					{ 1, 1, 0, 1 }, 
					{ 0, 1, 0, 0 }, 
					{ 1, 1, 1, 1 } };
    int sol[4][4]={ { 0, 0, 0, 0 }, 
					{ 0, 0, 0, 0 }, 
					{ 0, 0, 0, 0 }, 
					{ 0, 0, 0, 0 } };
    
    if(solveMaze(arr,0,0,sol)==true){
        printSolution(sol);
    }
    else{
        cout<<"No Solution";
    }
    return 0 ;
}