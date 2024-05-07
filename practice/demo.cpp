#include <iostream>
#include<math.h>
#include<algorithm>

using namespace std;


int main(){
   //find unique
   int arr[4]= {1,2,3,4};
   int size =4;
   int ans =0;
   for(int i =0;i<size;i++){
      ans =ans ^arr[i];
   }
   cout<<ans;



















    //swap alternate the arrey

   //  int arr[6]={2,3,4,56,7,8};
   //  int size=6;
    
   //  for(int i =0;i<size-1;i+=2){
   //    if(i+1<size){
   //       swap(arr[i],arr[i+1]);
   //    }
      
   //  }
    

   //  for(int i =0;i<size;i++){
   //    cout<<arr[i]<<" "<<endl;
   //  }
    
   

}



// #include <iostream>
// #include <algorithm>

// using namespace std;

// void swapNum(int& a, int& b) {
//     int temp = a;
//     a = b;
//     b = temp;
// }

// int main() {
//     // Reverse the array

//     int arr[5] = {2, 3, 4, 56, 7};
//     int size = 5;
//     int start = 0;
//     int end = size - 1;

//     while (start < end) {
//         swapNum(arr[start], arr[end]);
//         start++;
//         end--;
//     }

//     for (int i = 0; i < size; i++) {
//         cout << arr[i] << endl;
//     }

//     return 0;
// }
