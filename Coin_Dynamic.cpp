#include<bits/stdc++.h>
using namespace std;
int recursive_coin(int);
int memoize_coin(int);
void iterative_coin(int);
void print_iterative_coin(int);
void possible_solutions(int);

int main(){
    possible_solutions(5);
    return 0;
}
int coins[] = {1,3,4};
int check[10000];
bool flag[10000];
void possible_solutions(int N){
    int C[N+1];
    C[0] = 1; // One possible solution for 0
    for(int x=1;x<=N;x++){
        C[x] = 0;
        for(auto coin : coins){
            if(x-coin >= 0){
                C[x] += C[x-coin];
            }
        }
    }
    cout<<"Total Possible Solution for "<<N<<" is "<<C[N]<<endl;
    return;
}
void print_iterative_coin(int N){
    int V[N+1];
    int first[N+1];
    V[0] = 0;
    for(int x=1;x<=N;x++){
        V[x] = INT_MAX-1;
        for(auto coin : coins){
            if(x-coin >= 0 && V[x-coin]+1 < V[x]){
                V[x] = V[x-coin]+1;
                first[x] = coin;
            }
        }
    }
    cout<<"Total Coin: "<<V[N]<<endl;
    cout<<"Used Coins: "<<endl;
    while(N>0){
        cout<<first[N]<<" ";
        N-=first[N];
    }
    return;
}
void iterative_coin(int N){
    int V[N+1];
    V[0] = 0;
    for(int x=1;x<=N;x++){
        V[x] = INT_MAX-1;
        for(auto coin : coins){
            if(x-coin >= 0){
                V[x] = min(V[x],V[x-coin]+1);
            }
        }
    }
    cout<<"Total Coin : "<<V[N]<<endl;
    return;
}
int memoize_coin(int remaining){
    if(remaining<0){
        return INT_MAX-1;
    }
    if(remaining==0){
        return 0;
    }
    if(flag[remaining]){
        return check[remaining];
    }
    int best = INT_MAX-1;
    for(auto coin:coins){
        best = min(best, recursive_coin(remaining-coin)+1);
    }
    check[remaining] = best;
    flag[remaining] = true;

    return best;
}

int recursive_coin(int remaining){
    if(remaining<0){
        return INT_MAX-1;
    }
    if(remaining==0){
        return 0;
    }
    int best = INT_MAX-1;
    for(auto coin:coins){
        best = min(best, recursive_coin(remaining-coin)+1);
    }
    return best;
}
