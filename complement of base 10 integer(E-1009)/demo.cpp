#include<iostream>
using namespace std;


int main(){
    int num;
    cout<<"Enter the number"<<endl;
    cin>>num;
    int save=num;
    if(num==0){
        cout<<'1'<<endl;
        
    }
    
    int  mask = 0;
    while(save!=0){
        mask= (mask<<1)| 1;
        save =save>>1;

    }
    int ans =(~num)&mask;
    cout<<ans<<endl;

   


}


