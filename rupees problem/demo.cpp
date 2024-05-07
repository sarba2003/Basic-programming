#include<iostream>
#include<math.h>
using namespace std;


int main(){

    int rupees;
    cout<<"Enter the rupees"<<endl;
    cin>>rupees;
    int Rs500;
    int Rs200;
    int Rs100;
    int Rs50;
    int Rs20;
    int Rs10;
    int Rs5;
    int Rs1;


    switch(1){
        case 1:Rs500=rupees/500;
               rupees = rupees%500;
               cout<<"The number of 500 note needed ="<< " " << Rs500<<endl;


        case 2:Rs200=rupees/200;
               rupees = rupees%200;
               cout<<"The number of 200 note needed ="<< " " << Rs200<<endl;


        case 3:Rs100=rupees/100;
               rupees = rupees%100;
               cout<<"The number of 100 note needed ="<< " " << Rs100<<endl;


        case 4:Rs50=rupees/50;
               rupees = rupees%50;
               cout<<"The number of 50 note needed ="<< " " << Rs50<<endl;


        case 5:Rs20=rupees/20;
               rupees = rupees%20;
               cout<<"The number of 20 note needed ="<< " " << Rs20<<endl;


        case 6:Rs10=rupees/10;
               rupees = rupees%10;
               cout<<"The number of 10 note needed ="<< " " << Rs10<<endl;    


        case 7:Rs5=rupees/5;
               rupees = rupees%5;
               cout<<"The number of 5 note needed ="<< " " << Rs5<<endl;


        case 8:Rs1=rupees/1;
               rupees = rupees%1;
               cout<<"The number of 1 note needed ="<< " " << Rs1<<endl;                                      
    }
}