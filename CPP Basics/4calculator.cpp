#include<iostream>
using namespace std;

int main(){
    int x,y;
    char ch;
    cout<<"enter the problem : ";
    cin>>x>>ch>>y;
    
    if(ch == '+') cout<<(x+y);
    if(ch == '-') cout<<(x-y);
    if(ch == '*') cout<<(x*y);
    if(ch == '/') cout<<(x/y);


    int a,b;
    char op;
    cout<<"\nenter the problem : ";
    cin>>a>>op>>b;

    switch(op =='+'){
        case 1 :
            cout<<a+b;
    }
    switch(op =='-'){
        case 1 :
            cout<<a-b;
    }
    switch(op =='*'){
        case 1 :
            cout<<a*b;
    }
    switch(op =='/'){
        case 1 :
            cout<<a/b;
    }
}