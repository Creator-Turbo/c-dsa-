#include<iostream>
using namespace std;
int main (){
  int x,y ;
  cout<<"Enter a x-y coordinates :";
  cin>>x>>y;
  if((x ==0) && (y ==0)){
  cout<<"The points on the origin.";

  }
  else if ((x==0) && (y!=0)){
   cout<<"The points lie on the y-axis";
  }

  else if((x!=0) && (y==0)){
    cout<<"The points lie on the x-axis";
  }

  else{

  cout<<"The poins lie on the plane";
  }
}
