#include<iostream>
using namespace std;

int main(){
    int arr[7]={1,2,4,5,8,9,8};
    int size =7;
    

    for(int i=0;i<size;i+=2){
        if(i+1<size){
            swap(arr[i],arr[i+1]);        

           

        }
        
    }

    for(int i=0;i<size;i++){
        cout<<arr[i]<<endl;
    }
}