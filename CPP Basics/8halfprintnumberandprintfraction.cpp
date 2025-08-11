//Q. print the half value of a number.

#include<iostream>
using namespace std;

int main(){
    float x;
    cout<<"Enter the number : ";
    cin>>x;
    cout<<(x/2);
}


//Q. print the fraction part of the number.

#include<iostream>
using namespace std;

int main(){

    float x;
    cout<<"enter the number : ";
    cin>>x;
    
    if(x>0){
    float y = x - (int)x; 
    cout<<y;
    }else{
    float y = 1- ((int)x - x); 
    cout<<y;
    }
}

 