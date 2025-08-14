#include<iostream>
using namespace std;
int main(){
    int i = 65;
    char j = 'A';
    if(i==j) cout<<"P stands for physics wallah";
    else cout<<"P stabds for pwskills";
 
// generally we put a condition inside an if statement but we can also put
// an expression inside an if bracket.

    int a;
    if(3+2%5) cout<<"\nthis works";
    if(a=10) cout<<"\neven this works";
    if(-9) cout<<"\neven this also works\n";

    int x =3,y,z;
    y = x = 10;  // here in assignment operator the precedance is from right to left
    z = x <10;  // here (<) relational operator has more precedance then assignment operator
    cout<<x<<endl<<y<<endl<<z<<endl;


    int k = 35;
    cout<<(k == 35)<<endl;
    cout<<(k == 50)<<endl<<(k = 60)<<endl;
    cout<<(k > 40)<<endl;



    if(!(cout<<"good boy")){
        cout<<"\nworld";
    }else{
        cout<<"\nred cow";
    }


// here the statement inside the if statement also gets printed


}