#include<iostream>
#include<math.h>
using namespace  std;



int main(){
    int a ;
    cout<<"Enter the first number"<<endl;
    cin>>a;


    int b;
    cout<<"Enter the second number"<<endl;
    cin>>b;


   char operation;
    cout<<"Enter the operation which you perform"<<endl;
    cin>>operation;


    switch(operation){
        case '+': cout<<(a+b)<<endl;
                  break;
        case '-':cout<<(a-b)<<endl;
                  break;
        case '*':cout<<(a*b)<<endl;
                  break;
        case '/':cout<<(a/b)<<endl;
                  break;
        case '%':cout<<(a%b)<<endl;
                  break;
        default:cout<<"Please give the correct operation"<<endl;                    
    }

}