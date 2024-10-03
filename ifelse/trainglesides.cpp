#include<iostream>
using namespace std;
int main () {

int a,b,c;
cout<<"Enter the first number :";
cin>>a;
cout<<"Enter the second number :";
cin>>b;
cout<<"Enter the third number :";
cin>>c;

if((a+b>c) && (b+c>c) && (c+a>b)){
  cout<<a<<","<<b<<","<<c<<" can be the sides of a triangle";
}

else{

cout<<"not a traingle ";
}
}