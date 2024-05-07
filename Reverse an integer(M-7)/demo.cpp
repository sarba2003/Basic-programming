#include<iostream>
#include<math.h>
#include<climits>
using namespace std;



int main(){
    int num;
    cin>>num;
    int ans=0;
    int maxNum=INT_MAX;
    int minNum=INT_MIN;

    while(num!=0){
        int digit =num%10;
        ans =(ans*10)+digit;  //FORMULA
        num=num/10;

    }
    cout<<ans<<endl;

    if(ans>maxNum||ans<minNum){
        cout<<'0'<<endl;
    }
}