#include<iostream>
using namespace std;


int main(){
    int num;
    cout<<"Enter your number"<<endl;
    cin>>num;
    int sum=0;
    for(int i =1;i<=num;i+=2){
        sum=sum+i;
        cout<<i<<endl;

    }
    cout<<"sum of the odd numbers is "<<sum<<endl;
}