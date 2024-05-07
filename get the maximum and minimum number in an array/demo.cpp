#include<iostream>
#include<climits>
#include<math.h>
using namespace std;



int getMax(int num[],int n){
    int maxi = INT_MIN;
    for(int i =0; i<n; i++){
        maxi = max(maxi,num[i]);        ////the max() is a pre defined function it get the maximun output of maxi and num[i]
    }
    return maxi;


}



int getMin(int num[],int n){
    int minimum = INT_MAX;
    for(int i =0; i<n ;i++){
        minimum = min(minimum,num[i]);
       
    }

    return minimum;
}






int main(){
    int size;
    cout<<"Enter the number of size of the array you want"<<endl;
    cin>>size;


    int myArr[100];
    for(int i =0;i<size;i++){
        cin>>myArr[i];
    }



    cout<<"The maximum number in this array is "<<getMax(myArr,size)<<endl;
    cout<<"The minimum number in this array is "<<getMin(myArr,size)<<endl;
}















// #include<iostream>
// #include<math.h>
// #include<climits>
// using namespace std;


// int getMax(int arr[],int size){
//   int max=INT_MIN;
//   for(int i=0;i<size;i++){
//     if(arr[i]>max){
//       max=arr[i];
//     }
//   }
//   return max;
// }


// int getMin(int arr[],int size){
//    int min=INT_MAX;

//    for(int i=0;i<size;i++){
//     if(arr[i]<min){
//       min=arr[i];
//     }
//    }
//    return min;
// }

// int main(){
//   int size;
//   cin>>size;
//   int arr[100];
//   for(int i=0;i<size;i++){
//     cin>>arr[i];
//   }
//   cout<<"the maximum number is"<<getMax(arr,size)<<endl;
//   cout<<"The minimum number is "<<getMin(arr,size)<<endl;
// }