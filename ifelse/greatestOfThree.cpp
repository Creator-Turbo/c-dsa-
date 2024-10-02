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

if(a>b  && a>c){
   cout<<a<<" is grestest number"<<endl;
}

if(b>a && b>c){
  cout<<b<<" is grestest number"<<endl;
}

if(c>a && c>b){
 cout<<c<<" is grestest number"<<endl;
}
}