#include<bits/stdc++.h>
using namespace std;
bool comp(string a, string b);
void binarySearchMethod1();
void binarySearchMethod2();
int main(){
    // Binary Search Mathod 1
    binarySearchMethod1();
    // Binary Search Mathod 2
    binarySearchMethod2();
    return 0;
}
void binarySearchMethod1(){
    int numbers[] = {14,13,12,11,9,8,7,6,5,4,2,1,0};
    sort(numbers,numbers+(sizeof(numbers)/sizeof(numbers[0])));
    for(const auto& it : numbers){
        cout<<it<<" ";
    }
    int x;
    cout<<endl<<"Enter Search Element:";
    cin>>x;
    // Binary Search
    int a=0,b=sizeof(numbers)/sizeof(numbers[0]),k=(b+a)/2;
    while(a<=b){
        if(numbers[k]==x){
            cout<<endl<<"Found At: "<<k;
            break;
        }
        if(numbers[k] < x)
            a = k+1;
        else
            b = k-1;
        k=(b+a)/2;

    }
    return;
}
void binarySearchMethod2(){
    // Another Binary Search Method
    cout<<endl<<"Another Binary Search"<<endl;

    int numbers[] = {0,1,2,4,5,8,9,11,14};
    int size = sizeof(numbers)/sizeof(numbers[0]);
    sort(numbers,numbers+size);

    for(const auto& it : numbers){
        cout<<it<<" ";
    }
    int x;
    cout<<endl<<"Enter Search Element : ";
    cin>>x;

    int k=0;

    for(int b=size/2;b>=1;b/=2){
        while((k+b) < size && numbers[k+b]<=x)
            k+=b;
    }
    if(numbers[k] == x){
        cout<<endl<<"Element Exist At:"<<k;
    }else{
        cout<<endl<<"Element does not exist.";
    }
    return;
}
bool comp(string a, string b){
    if(a.size() != b.size())
        return a.size()<b.size();
    return a<b;
}
