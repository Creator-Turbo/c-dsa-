#include<iostream>

using namespace std;
int main(){
  int a;
  cout<<"Enter a number :";
  cin>>a;

  int b;
  cout<<"Enter a number :";
  cin>>b;

  int c;
  cout<<"Enter a number :";
  cin>>c;
if(a>b){
   if(a>c){
      cout<<a<<" is greatest";
   }
   else{
       
   cout<<c<<" is greatest";
   }
}

else{
    // b>a 
    if(b>c){
    cout<<b<<" is greatest";
    }
    else{
     cout<<c<<" is greatest";
    }
}
}