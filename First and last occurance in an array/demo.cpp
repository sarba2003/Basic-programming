#include<iostream>
using namespace std;
/////First and Last Position of an Element In Sorted Array


// You have been given a sorted array/list 'arr' consisting of ‘n’ elements. You are also given an integer ‘k’.



// Now, your task is to find the first and last occurrence of ‘k’ in 'arr'.

int firstOcc(int arr[],int size,int key){
    int start = 0;
    int end =size-1;
    int mid = (start+end )/2;
    int ans =-1;

    while(start<=end){
        if(arr[mid]==key){
            ans = mid;
            end = mid-1;
        }
        else if(key>arr[mid]){
            start= mid+1;
        }
        else if(key<arr[mid]){
            end = mid-1;
        }
        mid = (start+end)/2;


    }
    return ans;
}


int lastOcc(int arr[],int size,int key){
     int start = 0;
    int end =size-1;
    int mid = (start+end )/2;
    int ans =-1;

    while(start<=end){
        if(arr[mid]==key){
            ans = mid;
            start = mid+1;
        }
        else if(key>arr[mid]){
            start= mid+1;
        }
        else if(key<arr[mid]){
            end = mid-1;
        }
        mid = (start+end)/2;


    }
    return ans;

}

int main(){
    int arr[6]={1,2,3,3,3,3};
    int size =6;
    int key = 3;
    int first= firstOcc( arr,size,key);
    int last = lastOcc( arr,size,key);
    cout<<first<<' '<<last<<endl;

}