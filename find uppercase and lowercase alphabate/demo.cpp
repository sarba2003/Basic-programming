#include<iostream>
using namespace std;

int main(){
  char letter ;
  cout<<"Enter your character"<<endl;
  cin>>letter;
  if('a'<=letter&&letter<='z'){
   cout<<"This is lowercase"<<endl;
  }
  else if('A'<=letter&&letter<='Z'){
   cout<<"This is uppercase"<<endl;
  }
  else if('0'<=letter&&letter<='9'){
   cout<<"This is numaric"<<endl;

  }
  else{
   cout<<"This is different character"<<endl;
  }
   

}