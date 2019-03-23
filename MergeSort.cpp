#include<bits/stdc++.h>
using namespace std;

#define REP(i,a,b) for(int i=a;i<b;i++)
void mergeSort(int arr[], int p, int r);
void merging(int arr1[], int arr2[]);

int main(){
    int arr[] = {13,12,11,10,9,8,7,6,5,4,3,2,1,0};
    int n = sizeof(arr)/sizeof(arr[0]);

    mergeSort(arr,0,n);

    return 0;
}

void mergeSort(int arr[], int p, int r){
    if(p==r)
        return;
    int q = (p+r)/2;
    mergeSort(arr,p,q);
    mergeSort(arr,q+1,r);
    //merging(arr,p,q,r);   :::::::::::: I WILL GET BACK TO YOU
}
