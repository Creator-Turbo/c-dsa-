#include<iostream>
using namespace std;
int main ()
{
  char ch;
  cout<<"Enter a character :";
  cin>>ch;
  // a to z --> 97 to 122
  // A to z ---> 65 to 90
   int ascii = (int)ch;
    if((ascii>=97 && ascii<=122) || (ascii>=64 && ascii<=90)){
      cout<<"The character is  alphabet";
    }
    else{
     cout<<"The character is not aplhabet";
    }
   
    }