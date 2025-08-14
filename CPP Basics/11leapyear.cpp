#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"enter the year : ";
    cin>>x;
    if(x%4==0 && x%100!=0 || x%400==0){
        cout<<"leap year";
    }
    else{
        cout<<"not a leap year";
    }



}// for leap year it should be divisible by 4 and the year must not be a century year i.e. it should not be divisible by 100
// if the year is century year then for becoming a leap year it should also be divisible by 400