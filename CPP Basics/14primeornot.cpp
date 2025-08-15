#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the  number : ";
    cin>>n;

    bool momos = true; //let momos = true means number is prime.

    for(int i=2; i<n; i++){
        if(n%i == 0){ // is a factor of n.
            momos = false; //let momos = flase means number is not prime.
            break;
        }
    }

    if(n==1) cout<<"1 is neither prime nor composite number."<<endl;
    else if(momos == true) cout<<n<<" is a prime number."<<endl;
    else cout<<n<<" is not a prime number.";
}

//instead of using i<n we can also use i<=sqrt(n) because Using sqrt(n) instead of n-1 in the loop significantly reduces the number of iterations
//required to determine if a number n is prime, thereby improving the efficiency of the algorithm.
//A prime number is defined as a number greater than 1 that has no positive divisors other than 1 and itself. If a number n is not prime, it can be factored into two
//factors: a and b such that n = a * b. Both a and b cannot be greater than sqrt(n) because if both were greater, their product a * b would be greater than n.
//This means that at least one of these factors must be less than or equal to sqrt(n).
//Example

// n = 29:
// sqrt(29) is approximately 5.39.
// We only need to check for divisors 2, 3, 4, and 5.
// Since none of these numbers divide 29 evenly, 29 is prime.

// n = 30:
// sqrt(30) is approximately 5.47.
// We only need to check for divisors 2, 3, 4, and 5.
// 2 divides 30 evenly (30 = 2 * 15), so 30 is not prime.

//Changes Made:
// Include the <cmath> header to use the sqrt function.
// Optimize the loop to run up to sqrt(n) instead of n-1.

//Efficiency ==> Time Complexity:

// Using n checks results in O(n) time complexity.
// Using sqrt(n) checks results in O(sqrt(n)) time complexity.
// Since sqrt(n) grows much slower than n, the optimization is significant, especially for large values of n.