#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v; // you need not mention the size 
    // inserting / input do not use []
    v.push_back(6);
    v.push_back(2);
    // v[1] = 1;
    v.push_back(3);
    v.push_back(9);
    v.push_back(10);


    // if you want to update / access 
    cout<<v[0]<<" ";
    cout<<v[1]<<" ";
    cout<<v[2]<<" ";
    cout<<v[3]<<" ";
    
}