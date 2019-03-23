#include<bits/stdc++.h>
using namespace std;

void lowerBoundMethod();

/*Lower bound works on binary search*/
int main(){
    lowerBoundMethod();
    return 0;
}
void lowerBoundMethod(){
    int numbers[] = {14,13,12,11,9,8,7,6,5,4,2,1,0};
    int size = sizeof(numbers)/sizeof(numbers[0]);
    sort(numbers,numbers+(sizeof(numbers)/sizeof(numbers[0])));
    for(const auto& it : numbers){
        cout<<it<<" ";
    }
    int x;
    cout<<endl<<"Please enter an element: ";
    cin>>x;

    int k = lower_bound(numbers,numbers+size,x)-numbers;
    cout<<endl<<"Lower Bound Result: "<<k<<endl;
    // k would be size+1 if x is not exist an array
    if(k<size && numbers[k] == x){
        cout<<endl<<"Element found in an array.";
    }else{
        cout<<endl<<"Element does not exist in an array.";
    }
    return;
}
