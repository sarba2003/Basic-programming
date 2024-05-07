#include <iostream>
using namespace std;



///find duplicate in an array
int main(){
    int arr[5]={4,2,1,3,1};
    int size=5;
    int ans =0;
   
    for(int i=0;i<size;i++){
        ans = ans^arr[i];
    }


    for(int i=1;i<size;i++){
        ans = ans^i;
    }
    cout<<ans<<endl;

}