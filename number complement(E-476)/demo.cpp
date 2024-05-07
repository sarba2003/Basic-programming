#include<iostream>
using namespace std;


int main(){
    int num;
    cout<<"Entar the number"<<endl;
    cin>>num;
    int save= num;

    int mask =0;
    while(save!=0){
        mask = (mask<<1)|1;
        save= save>>1;
    }
    int ans =(~num)&mask;
    cout<<ans<<endl;
}
