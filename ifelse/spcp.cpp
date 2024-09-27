#include<iostream>
using namespace std;
int main (){
  cout<<"Enter a cost price: ";
  int cp;
  cin>>cp;


  cout<<"Enter a selling price: ";
  int sp;
  cin>>sp;

if(sp>cp){
  cout<<"profit = "<<sp-cp;
}

if(cp>sp){
cout<<"loss = "<<cp-sp;
}

if(cp==sp){
  cout<<"No profit, NO loss";
}

}