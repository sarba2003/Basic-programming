#include <iostream>
using namespace std;

int main(){
   //check palledrome 
   int num;
   cin>>num;
   int temp = num;
   int ans =0;
   while(num!=0){
    int digit = num%10;
    ans =(ans*10)+digit;
    num=num/10;

   }
   if(temp==ans){
    cout<<"THis is a paledrome number"<<endl;
   }
   else{
    cout<<"this is not "<<endl;
   }
}
    