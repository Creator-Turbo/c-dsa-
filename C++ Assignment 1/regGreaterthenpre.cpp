#include<iostream>
using namespace std;
int main(){

int length , breadth;
cout<<"Enter a the lenght and breadth :";
cin>>length>>breadth;

int area = length * breadth;
int perimetr = 2 * (length * breadth);
if(area > perimetr){

cout<<"The area is greater than perimter";
}
else {
  cout<<" perimter is greater than area";
}
}