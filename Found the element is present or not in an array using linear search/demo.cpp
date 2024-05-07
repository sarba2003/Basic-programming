#include<iostream>
using namespace std;



bool search(int arr[],int size,int key){
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            return 1;
        }
    }
    return 0;
}


int main(){

    int myArr[5]={-9,5,41,251,-56};
    int size=5;
    
    int key;
    cout<<"Enter the key u want"<<endl;
    cin>>key;

    int found = search(myArr,size,key);
    if(found ==1){
        cout<<"the key is found"<<endl;

    }
    else{
        cout<<"The key is not found"<<endl;
    }

}