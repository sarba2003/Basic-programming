#include <bits/stdc++.h>
#include<iostream>
using namespace std;
void reverse(int arr[],int size){
    int start =0;
    int end =size-1;
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

void printArr(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<endl;
    }
}

int main(){
    int arr[5]={1 , 2 ,3 ,4 ,5 };
    int size=5 ;
    

   reverse(arr,size);
   printArr(arr,size);
 
   

}

	

