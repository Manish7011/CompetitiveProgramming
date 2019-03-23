#include<bits/stdc++.h>
using namespace std;
/*
 Complexity of this algorithm : O(n)
*/
int main(){
    int arr[] = {11,2,3,4,-5,-12,-3,4,1,8,9};
    int sum=0,best=0;
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        sum = max(arr[i],sum+arr[i]);
        best = max(best,sum);
    }
    cout<<"maximum sum of sub array is "<<best<<"."<<endl;
    return 0;
}
