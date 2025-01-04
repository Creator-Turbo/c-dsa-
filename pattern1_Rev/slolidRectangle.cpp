#include<iostream>
using namespace std;
int main (){
    int n;
    cout<<"NO of rows :";
    cin>>n;
    int m;
    cout<<"NO of columns :";
    cin>>m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cout<<"*";
        }
        cout<<endl;
    }

}