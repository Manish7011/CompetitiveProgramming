#include<bits/stdc++.h>
using namespace std;

// Constant names
#define PB push_back


void vectorFunction();
void stringFuction();
void setStructures();

int main(){
    setStructures();
    return 0;
}
void setStructures(){
    // declare + initialize set
    set<int> s1 = {2,5,6,7};
    set<int> s;
    // Insert
    s.insert(67);
    s.insert(77);
    s.insert(87);
    // Size
    int size = s.size();
    // Exist or not
    if(s.count(87) == 1){
        cout<<"87 is exist in set."<<endl;
    }
    // Looping through each element
    for(auto x : s){
        cout<<x<<endl;
    }
    // remove element from set
    s.erase(77);
    cout<<"After removing 77 "<<endl;
    for(auto x : s){
        cout<<x<<endl;
    }


    return;
}
void stringFuction(){
    string a = "hatti";
    string b = a+a;

    cout<<b<<endl;
    b[5] = 'v';
    cout<<b<<endl;
    string c = b.substr(3,4);
    cout<<c<<endl;

}
void vectorFunction(){
    /*
        Use vector as dynamic array.
    */
    // different initialization
    vector<int> v1 = {1,2,3,4,5,67,8,9,78};
    vector<int> v2(10);         // 10 vector with default value 0
    vector<int> v3(10,5);       // 10 vector with default value 5

    vector<int> v;              // declaration of vector
    v.push_back(10);
    v.push_back(9);
    v.push_back(8);
    v.push_back(7);
    v.push_back(6);
    int size = v.size();

    cout<<"Size of vector: "<<size<<endl;
    cout<<"before pop_back"<<endl;

    for(int i=0;i<v.size();i++){
        cout<<endl<<i<<" :: "<<v[i];
    }
    v.pop_back();
    cout<<endl<<"after pop_back";
    for(auto i : v){
        cout<<endl<<i;
    }
    cout<<endl<<"Top Element: "<<v.back()<<endl;
    return;
}
