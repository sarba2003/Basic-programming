#include<iostream>
using namespace std;


int binarySearch(int arr[],int size,int key){
    
    int start=0;
    int end = size-1;
    int mid = (start+end)/2;         ///EDGE CASE    start +(start-end)/2;  when start+end = greater  then the int max value;
   

    while(start<=end){
        if(arr[mid]==key){
             return mid;
        }
        if(key>arr[mid]){
            start = mid+1;
        }
        else{
            end = mid-1;
        }
        mid=(start+end)/2;

    }
    return -1;

}


int main(){
     int arr[5]={2,4,5,6,7};
    int size = 5;
    int key = 6;
    int ans = binarySearch(arr,size,key);
    

    if(ans!=-1){
        cout<<ans<<endl;

    }
    else{
        cout<<"the key is not found"<<endl;
    }

    

    
}