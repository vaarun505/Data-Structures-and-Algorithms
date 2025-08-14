// && this is known as logical and 
// ||  this is known as logical or
// << left shift operator
// >> right shift operator

#include<iostream>
using namespace std;

int main(){
    int x;
    cout<<"enter the number : ";
    cin>>x;
    if(x>99 && x<1000){
        cout<<"the entered number is a three digit number";
    }else{
        cout<<"not a three digit number";
    }
}

//in case of && operator compiler first check condition 1 and then condition 2 
// if condition 1 us false then compiler wont check condition 2 

//in case of || operator compiler first check condition 1 and then condition 2 
// if condition 1 us true then compiler wont check condition 2 

// when we use 
// if(99<x<1000)  this is very incorrect bcoz computer read 
// this as (99 < x) < 1000 means if we enter the number x = 12. 
// so, 99<12 is a boolean false means 0 and 0<1000 boolean
// give true means 1 and 1 inside if() execute the if statement 
// if we enter the number 2342 then 99<2342 is a boolean true means 1
// and 1<1000 boolean give true means 1 and 1 inside if() execute
// the if statement
// so, in this case all thenumber will give a three digit number.