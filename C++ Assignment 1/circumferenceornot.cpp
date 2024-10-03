#include<iostream>
using namespace std;
int main (){
int radiu ;
cout<<"Enter a radius :";
cin>>radiu;
float area = 3.14 * radiu * radiu;
float circumference = 2 * 3.14 * radiu;
if (area>circumference){
   cout<<"Area is grester than circumference";
}
else {
  cout<<"circumference is grester than area";
}
}

