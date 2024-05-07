#include<iostream>
#include<math.h>
#include<climits>
using namespace std;


int main(){
  int size;
  cout<<"Enter the size of the array"<<endl;
  cin>>size;

  int arr[100];
  int sum=0;

  for(int i=0;i<size;i++){
    cin>>arr[i];
    sum = sum+arr[i];

  }
   cout<<"The sum of all the given number is : "<<sum<<endl;
}