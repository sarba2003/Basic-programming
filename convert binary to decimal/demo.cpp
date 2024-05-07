#include <iostream>
#include<math.h>
using namespace std;



int main(){
    int num;
    cout<<"Entar your number"<<endl;
    cin>>num;
    int ans = 0;
    int i =0;
    while(num!=0){
        int digit = num%10;
        if(digit==1){
            ans = ans+pow(2,i);
        }
        num=num/10;
        i++;

    }
    cout<<ans<<endl;
}



/*   this is using for loop


   for(int i=0;num!=0;i++){
      int digit = num%10;
      if(digit==1){
      ans= ans+pow(2,i);
    }
    num = num/10;
  }
  */