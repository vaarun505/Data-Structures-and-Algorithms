//in maths (2*3)/4 and 2*(3/4) both are same and equal to 1.5
//but in computer both are different 
// (2*3)/4 = (int)6/4 = 1
//2*(3/4) = (int)2*0 = 0

// so in c++ : *,/ are prefered first over +,- and *,/ are of
// same hierarichal level so we take preference from left to right

#include<iostream>
using namespace std;

int main(){
    int i = 2*3/4+4/4+8-2+5/8;
    cout<<i;
}
//2*3=6 so, = 6/4+1+8-2+0 = 8


//always remember -= is prefered over +=