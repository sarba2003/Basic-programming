#include <iostream>
using namespace std;


int main(){
  int firstArr[5]={2,3,4,5,6};
  int secondArr[3]={2,5,6};
  int firstSize =5;
  int secondSize=3;
  int ans[100];
  int count =0;
  

  for(int i=0;i<firstSize;i++){
    for(int j=0;j<secondSize;j++){
      if(firstArr[i]==secondArr[j]){
        ans[count++]=firstArr[i];
       
      }
    }
  }


  for(int i=0;i<count;i++){
    cout<<ans[i]<<endl;
  }

  
  
}