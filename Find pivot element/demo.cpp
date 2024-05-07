#include <iostream>
using namespace std;


int pivotElement(int arr[],int size){
    int start =0;
    int end = size-1;
    int mid = (start+end)/2;
    while(start<end){
        if(arr[mid]>arr[0]){
            start = mid +1;

        }
        else{
            end = mid;
        }
        mid = (start+end)/2;
    }
    return start;
}

int main(){
    int arr[5]={7,9,1,2,4};
    int size = 5;
    
    int a = pivotElement(arr,size);
    cout<<a<<endl;


    
}