#include<bits/stdc++.h>
using namespace std;

// Constant names
#define PB push_back


void vectorFunction();
void stringFuction();
void setStructures();
void multisetFunction();
void mapStructure();
void bitSetStructure();
void dqueueStructure();
void stackStructure();
void queueStructure();

int main(){
    queueStructure();
    return 0;
}
void queueStructure(){
    // FIFO Structure
    queue<int> Q;

    Q.push(45);
    Q.push(46);
    Q.push(47);
    cout<<Q.front()<<endl;
    Q.pop();
    cout<<Q.front()<<endl;
    cout<<Q.back()<<endl;

    return;
}
void stackStructure(){
    // LIFO Structure
    stack<int> s;
    s.push(9);
    s.push(8);
    s.push(7);
    s.push(6);
    cout<<"TOP :: "<<s.top()<<endl;
    s.pop();
    cout<<"TOP :: "<<s.top()<<endl;
    return;
}
void dqueueStructure(){
    deque<int> n;

    n.push_back(5); // 5
    n.push_back(2); // 5 2
    n.push_back(1); // 5 2 1
    n.push_front(3); // 3 5 2 1
    n.pop_back(); // 3 5 2
    n.pop_front(); // 5 2

    for(int i=0;i<n.size();i++){
        cout<<i<<" :: "<<n.at(i)<<endl;
    }
    return;
}
void bitSetStructure(){
    bitset<10> s;
    s[0]=1;
    s[1]=1;
    s[2]=1;
    cout<<s[1]<<" :: "<<s[3]<<" :: "<<s.count()<<endl;

    bitset<4> s1(string("1100"));   // set right to left
    cout<<s1[0]<<" :: "<<s1[3]<<endl;

    bitset<10> a(string("0110010011"));
    bitset<10> b(string("0110011111"));
    cout<<"a&b :: "<<(a&b)<<endl;
    cout<<"a|b :: "<<(a|b)<<endl;
    cout<<"a^b :: "<<(a^b)<<endl;
    return;
}
void mapStructure(){
    map<string, int> mp;
    mp["jack1"] = 8701;
    mp["jack2"] = 8702;
    mp["jack3"] = 8703;

    cout<<mp["jack4"]<<endl;
    if(mp.count("jack4")){
        cout<<"Jack 4 is found."<<endl;
    }
    for(auto i : mp){
        cout<<i.first<<" :: "<<i.second<<endl;
    }
    return;
}
void multisetFunction(){
    multiset<int> ms;
    ms.insert(5);
    ms.insert(5);
    ms.insert(5);
    cout<<"Initially Count of 5 is "<<ms.count(5)<<endl;
    ms.erase(ms.find(5));
    cout<<"After single erase Count of 5 is "<<ms.count(5)<<endl;
    ms.erase(5);
    cout<<"After erase Count of 5 is "<<ms.count(5)<<endl;
    return;
}
void setStructures(){
    // declare + initialize set
    set<int> s1 = {2,5,6,7};
    // Structure with Iterator
    for(auto it=s1.begin();it!=s1.end();it++){
        cout<<*it<<endl;
    }
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
    vector<int> v1 = {14,4,13,41,5,67,88,9,78};
    sort(v1.begin(),v1.end());
    cout<<"Simple Sorting v1"<<endl;
    for(auto x : v1){
        cout<<x<<endl;
    }
    reverse(v1.begin(),v1.end());
    cout<<"Reverse Sorting v1"<<endl;
    for(auto x : v1){
        cout<<x<<endl;
    }
    random_shuffle(v1.begin(),v1.end());
    cout<<"Random Shuffle Sorting v1"<<endl;
    for(auto x : v1){
        cout<<x<<endl;
    }
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
