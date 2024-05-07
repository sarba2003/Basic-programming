#include<iostream>
#include<math.h>
using namespace std;


int main(){

    int number;
    cout<<"Enter the number"<<endl;
    cin>>number;
    int i =0;
    double answer = 0;
    while(number!=0){
        int bit = number&1;
        answer = (bit * pow(10,i))+answer;   //This is the formula
        number= number>>1;
        i++;

    }
    cout<<answer<<endl;
}


   /* this is using for loop

    for(int i =0;num!=0;i++){
      int bit = num&1;
      ans = (bit*pow(10,i))+ans;
      num=num>>1;
    }
*/