#include<iostream>
using namespace std;

int swap(int a, int b){
    int temp=b;
     
     
     b= a;
     a=temp; 
     
     cout<<a<<" "<<b <<endl;

     
}


int main(){
    swap(10,20);



}