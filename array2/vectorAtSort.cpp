#include<iostream>
#include<vector>
#include <algorithm> 
using namespace std;
int main(){
    vector<int> v;
    v.push_back(9);
    v.push_back(10);
    v.push_back(90);
    v.push_back(9);
    v.push_back(1);
    v.push_back(4);
    v.push_back(2);
    v.push_back(0);

    // v.at(0) = 90;  // Using at at()  acesses the value
    // cout<<v.at(2);
    // cout<<endl;

    for(int i=0; i<v.size(); i++){
        cout<<v.at(i)<<" ";
    }
    cout<<endl;
    sort(v.begin(), v.end());
    for(int i=0; i<v.size(); i++){
        cout<<v.at(i)<<" ";
    }

   cout<<endl;
}