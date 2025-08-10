#include<iostream>
using namespace std;

int main(){
    char ch;
    cout<<"enter the character : ";
    cin>>ch;

    if(((int)ch>=97 && (int)ch<=122) || ((int)ch>=65 && (int)ch<=90)){
        cout<<"the character entered is an alphabet";
    }else{
        cout<<"not an alphabet";
    }
}