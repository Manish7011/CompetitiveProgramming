#include<bits/stdc++.h>
using namespace std;
bool comp(string a, string b);

int main(){
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
    return 0;
}
bool comp(string a, string b){
    if(a.size() != b.size())
        return a.size()<b.size();
    return a<b;
}
