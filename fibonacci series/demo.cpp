#include<iostream>
using namespace std;


int main(){
    int num;
    cout<<"Enter your number"<<endl;
    cin>>num;
    int a =0;
    int b= 1;
    for(int i = 1;i<=num;i++){
        int fabNum=a+b;
        cout<<fabNum<<endl;
        a=b;
        b=fabNum;
    }
}