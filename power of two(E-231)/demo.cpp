#include <iostream>
#include<math.h>
using namespace std;



int main(){
    int num ;
    cout <<"Enter your number"<<endl;
    cin>>num;
    int ans =0;
    int check;
    for(int i =0;i<=30;i++){
         ans =pow(2,i);
        if(ans ==num ){
            check =1;
           
        }  
       
        }

        if(check ==1){
            cout<<"true"<<endl;
        }
        else{
            cout<<"false"<<endl;
        }
        
        
        
}


////Another Apporach is count the set bits if the set bit is one then the ans is true either false.