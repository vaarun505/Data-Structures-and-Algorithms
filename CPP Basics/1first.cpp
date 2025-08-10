#include<iostream>
using namespace std;

int main(){

    int x = cout<<"hello";
    cout<<"x";
    string a = "hello";
    cout<<sizeof(a);
    
}

// \n is simply a newline character. It moves the cursor to the next line but does not flush the output buffer automatically.
// endl is a manipulator in C++ that inserts a newline character (\n) into the output stream and then flushes the output buffer.

// What is a Buffer?
// A buffer is a temporary storage area used to hold data while it is being transferred from one place to another.
// In the context of I/O operations, it stores data temporarily before it is processed (for input) or outputted.

// Input Buffers:
// When you type something in the console and press Enter, that data is first stored in an input buffer.
// Functions like cin and getline then read from this buffer.
// Output Buffers:

// Similarly, when you use cout, the data is first written to an output buffer, and then it is flushed to the console (usually when you print a newline character or when the buffer is full).

#include <iostream>
#include <vector>

using namespace std;

long long array_evolution(int N, int P, vector<int>& arr) {
    // Calculate initial sum on Day 0
    long long initial_sum = 0;
    for (int i = 0; i < N; i++) {
        initial_sum += arr[i];
    }

    // Evolving the array day by day
    vector<int> current_arr = arr;  // Copy of the original array
    for (int day = 0; day < P; day++) {
        vector<int> new_arr = current_arr;  // New array to store the updated values
        for (int i = 0; i < N; i++) {
            if (current_arr[i] != 0) {
                // Increment neighbors
                if (i > 0) new_arr[i - 1] += 2;
                if (i < N - 1) new_arr[i + 1] += 2;
            }
        }
        current_arr = new_arr;  // Update the current array for the next day
    }

    // Calculate the final sum after P days
    long long final_sum = 0;
    for (int i = 0; i < N; i++) {
        final_sum += current_arr[i];
    }

    // Return the difference between final sum and initial sum
    return final_sum - initial_sum;
}

int main() {
    int N, P;
    cin >> N >> P;
    vector<int> arr(N);
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    cout << array_evolution(N, P, arr) << endl;
    return 0;
}