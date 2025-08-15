#include<iostream>
using namespace std;

int main(){
    int x = 3;
    cout<<(x==3)<<endl; //here it is a boolean expression and as above x=3 is given and we compare x==3 so it is true thus it prints 1 
    cout<<(x==7)<<endl; //here it is a boolean expression and as above x=3 is given and we compare x==7 so it is false thus it prints 0
    cout<<(x=34)<<endl;

    bool p = false;
    bool q = false;
    bool r = true;

//trying fdifferent things :)

    // int p =1;
    // int q = 2;
    // int r = 2;


    cout<<(p==q)<<endl;
    cout<<(p==r)<<endl;
    cout<<(q==r)<<endl;
    cout<<(p==q==r)<<endl;  //we always consider from left to right
    cout<<(p==(q==r))<<endl;

//int takes 4 bytes (32 bits)
//float takes 4 bytes (32 bits) 
//bool type generally takes 1 byte (8 bits) 
//char usually takes 1 byte (8 bits) 
}