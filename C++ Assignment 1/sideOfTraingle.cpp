#include<iostream>
using namespace std;
int main (){

int side1,side2,side3;
cout<<"Enter the side of the triangle :";
cin>>side1>>side2>>side3;
if(side1 == side2   && side2== side3){
   cout<<"This is equilateral Triangle";
}
else if (side1==side2 || side2==side3 || side1== side3){
  cout<<"This is an Isosceles Triangle";
}

else {
  cout<<"This is scalene Triangle";
}


}