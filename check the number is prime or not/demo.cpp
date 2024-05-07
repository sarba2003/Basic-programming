#include<iostream>
using namespace std;


int main(){
    int number;
    cout<<"Enter the number"<<endl;
    cin>>number;
    int result = 1;
    for(int i =2;i<number;i++){
        if(number%i==0){
            result = 0;

        }

    }
    if(result ==0){
        cout<<"This is not a prime number"<<endl;
    }
    else{
        cout<<"This is a prime number"<<endl;
    }
}


/*         OR
#include <iostream>
#include <cmath>
using namespace std;

// 0 = not a prime
// 1 = prime
bool isPrime(int num) {
    for (int i = 2; i < num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int value;
    cin >> value;
    if (isPrime(value)) {
        cout << "This is a prime number" << endl;
    } else {
        cout << "This is not a prime number" << endl;
    }

    return 0;
}

*/