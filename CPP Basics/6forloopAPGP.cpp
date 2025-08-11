#include<iostream>
using namespace std;

int main(){
    //print an AP = 1,3,5,7,9,11...
    //method 1 :  here we have to find the last term of the AP to put in the loop which is a(n) = a + (n-1)d ==> a(n) = 1+(n-1)2 ==> 2n-1 . Here we use the concept of AP
    int n;
    cout<<"enter the number : ";
    cin>>n;
    for(int i=1; i<=(2*n-1);i+=2){
        cout<<i<<endl;
    }
    //method 2 : we uses simple logic not AP logic

    int a =1;
    for(int j =1;j<=n;j++){
        cout<<a<<endl;
        a+=2;

    }

//print a GP = 1,2,4,8,16,32...
//print a GP = 2,6,18,54
    int A = 1;
    for(int k=1;k<=n;k++){
        cout<<A<<endl;
        A = A*2;
}

    int B = 2;
    for(int k=1;k<=n;k++){
        cout<<B<<endl;
        B = B*3;
    }

// Display the AP ===> 100,97,94,91.... upto all terms which are positive


        //method 1: we have to calculate the last term and the number of
        // for positive AP.

    int c = 100;
    for(int z=1;z<=34;z++){
        cout<<c<<endl;
        c = c-3;
    }

    //method 2 : we just simply use the condition that p>0 in the for loop
    // using this mthod is easy and does not require the knowledge of AP 

    int p = 100;
    for(int z=1; p>0 ;z++){// we can also use for(;p>0;)
        cout<<p<<endl;
        p = p-3;
    }

    //method 3 : or we can simply use
    

    for(int q=100; q>0; q=q-3){
        cout<<q<<endl;
    }

}