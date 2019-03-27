#include<bits/stdc++.h>
using namespace std;

void subsetSearch(int);

// Sub Set Search Global Variables
int N = 3;
vector<int> subset;

int main(){
    subsetSearch(0);
    return 0;
}

void subsetSearch(int k){
    if(k == N){
        cout<<"{";
        for(auto it : subset){
            cout<<it<<" ";
        }
        cout<<"}"<<endl;
    }else{
        subsetSearch(k+1);
        subset.push_back(k);
        subsetSearch(k+1);
        subset.pop_back();
    }
    return;
}
