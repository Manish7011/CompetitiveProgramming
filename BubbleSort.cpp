
#include<bits/stdc++.h>
using namespace std;
#define len(val) sizeof(val)/sizeof(val[0])
#define REP(i,a,b) for(int i=a;i<b;i++)
/*
 Complexity of this algorithm : O(n^2)
*/
int main(){
    int arr[] = {12,11,10,9,8,7,6,5,4,3,2,1,0};
    int n = len(arr);

    REP(i,0,n){
        REP(j,0,n-1){
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    REP(i,0,n){
        cout<<arr[i]<<" ";
    }

    return 0;
}
