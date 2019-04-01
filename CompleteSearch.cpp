#include<bits/stdc++.h>
#include <chrono>
using namespace std;
using namespace std::chrono;

void subsetSearch(int);
void bitShiftOperation();
void timeCalculation();
void subsetUsingBit();
void permutationFunction1();
void permutationFunction2();
// Sub Set Search Global Variables
int N = 3;
vector<int> subset;
vector<int> permutation;
bool choice[3];

int main(){
    permutationFunction2();
    return 0;
}
void permutationFunction2(){
    // Standard Lib Function
    for(int i=0;i<N;i++){
        permutation.push_back(i);
    }
    do{
        for(int it:permutation){
            cout<<it<<", ";
        }
        cout<<endl;
    }while(next_permutation(permutation.begin(),permutation.end()));
    return;
}
void permutationFunction1(){
    // It is a recursive function
    if(permutation.size() == N){
        for(int i:permutation){
            cout<<i<<", ";
        }
        cout<<endl;
    }else{
        for(int i=0;i<N;i++){
            if(choice[i])
                continue;
            choice[i] = true;
            permutation.push_back(i);
            permutationFunction1();
            choice[i] = false;
            permutation.pop_back();
        }
    }
}
void subsetUsingBit(){
    //4656317 : microseconds : FOR N=20
    for(int i=0;i<(1<<N);i++){
        vector<int> subset;
        for(int j=0;j<N;j++){
            if(i & (1<<j)){
                subset.push_back(j);
            }
        }

        for(auto it : subset){
            cout<<it<<" :: ";
        }
        cout<<endl;
    }
    return;
}
void bitShiftOperation(){

    /*
        0000 0010 2<<2  0000 1000           : Left Shift
        0000 1111 15<<2 0011 1100           : Left Shift
        0000 1111 2>>15 0000 0011           : Right Shift
    */
    cout<<"(2<<1) : "<<(2<<1)<<endl;
    cout<<"(15<<1) : "<<(15<<1)<<endl;
    cout<<"(15>>1) : "<<(15>>1)<<endl;
    cout<<"(2<<2) : "<<(2<<2)<<endl;
    cout<<"(15<<2) : "<<(15<<2)<<endl;
    cout<<"(15>>2) : "<<(15>>2)<<endl;
}
void timeCalculation(){
    auto start = high_resolution_clock::now();
    subsetUsingBit();
    auto stop = high_resolution_clock::now();

    auto duration = duration_cast<microseconds>(stop - start);
    cout<<"Time Taken:: "<<duration.count()<<endl;
}
void subsetSearch(int k){
    if(k == N){
    //324025 : microseconds FOR N=20

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
