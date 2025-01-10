#include<iostream>
using namespace std;
void func(int x,int y){
    cout<<"Address of x "<<&x<<endl;
    cout<<"Address of y "<<&y<<endl;
}
int main (){
    int x = 3;
    int y = 7;
    cout<<"Address of x "<<&x<<endl;
    cout<<"Address of y "<<&y<<endl;
    func(x,y);
}