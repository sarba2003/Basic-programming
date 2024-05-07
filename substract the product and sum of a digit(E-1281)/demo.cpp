#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number"<<endl;
     cin>>n;
     int product = 1;
     int sum = 0;
     
     while(n!=0){
        int digit = n%10;
        product = digit*product;
        sum = digit +sum;
        n= n/10;
         
     }
     int answer= product -sum;

     
     cout<<answer<<endl;
}