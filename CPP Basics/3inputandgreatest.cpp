#include<iostream>
using namespace std;

int main(){
    int x,y,z;
    cout<<"enter first numbers : ";
    cin>>x;

    cout<<"enter second numbers : ";
    cin>>y;

    cout<<"enter third numbers : ";
    cin>>z;

    if(x>y && x>z){
        cout<<x;
    }
    if(x>y && x<z){
        cout<<z;
    }
    if(x<y && x>z){
        cout<<y;
    }

} 