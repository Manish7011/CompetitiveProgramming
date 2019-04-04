#include<bits/stdc++.h>
using namespace std;

/*
    We are taking back tracking approach.
*/
void search(int);

// GLOBALS
int N=16, solutions=0;
int col[16];
int diag1[(16-1)*2];
int diag2[(16-1)*2];
int main(){
    search(0);
    cout<<solutions;
    return 0;
}

void search(int y){
    if(y==N){
        solutions++;
        return;
    }else{
        for(int x=0;x<N;x++){
            if(col[x] || diag1[x+y] || diag2[x-y+N-1])continue;
            col[x] = diag1[x+y] = diag2[x-y+N-1] = 1;
            search(y+1);
            col[x] = diag1[x+y] = diag2[x-y+N-1] = 0;
        }
    }
    return;
}
