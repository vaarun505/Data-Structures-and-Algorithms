#include<iostream>
using namespace std;

int main(){
    char ch = '#'; //in ('') we store only one character, This is because a char variable occupies 8 bits or 1 byte in memory
    char cc = 'f';
    cout<<cc<<"\n";
    cout<<ch<<"\n";
//ASCII (American Standard Code for Information Interchange) values :
//each character has an ascii values associated with itself
//ASCII value of A is 65
//ASCII value of a is 97
//ASCII value of 0 is 48

    char cd = 'a';
    char ce = 'A';
    char cf = '0'; // numbers are also consider as character in char data type
    char cg = '3';
    cout<<(int)cd<<"\n"<<(int)ce<<"\n"<<(int)cf<<"\n"<<(int)cg<<"\n";

    char ci = 'A';
    int z = (int)ci;
    cout<<z-64;


    int i = 65;
    char j = 'A';
    if(i==j) cout<<"\n P stands for physics wallah";
    else cout<<"P stands for pwskills";

    cout<<"the ASCII value of a  is : "<<(int)('a')<<endl;
    cout<<"the ASCII value of \\t is : "<<(int)('\t')<<endl;  // \t is a special character for giving a tab space.
    cout<<"the ASCII value of \\n is : "<<(int)('\n')<<endl;  // \n is a special character for next line.
    cout<<"the ASCII value of \\0 is : "<<(int)('\0')<<endl;  // \0 is a special character called Null charater.


}