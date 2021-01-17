#include <iostream>
#include <vector>
using namespace std;

// Prints binary(integer remainder)
void printNums(int binaryCarry[], int i) {
    // Adds zeros to complete 4-byte integer conversion
    for(int k = 0; k < 4-i; k++)
        cout << "0";
    // Prints binary array in reverse order
    for (int j = i - 1; j >= 0; j--) {
        cout << binaryCarry[j];
    }
    cout << " ";
}

// Separate each digit and place into array
vector<int> splitNum(int n) {
    vector<int> arr;
    while (n > 0) {
        int digit = n%10;
        n /= 10;
        arr.push_back(digit);
    }
    reverse(arr.begin(), arr.end());
    return arr;
}

// function to convert integer to binary
void integerToBinary(int n) {
    vector<int> arr = splitNum(n);
    for(auto& j: arr) {
        int binaryCarry[32], i = 0;
        while (j > 0) {
            binaryCarry[i] = j % 2;
            j = j / 2;
            i++;
        }
        printNums(binaryCarry, i);
    }
    cout << endl;
}

// Tests integerToBinary function
int main() {
    integerToBinary(1);
    integerToBinary(5);
    integerToBinary(12);
    integerToBinary(35);
    integerToBinary(117);
    integerToBinary(2);
    integerToBinary(21967);
    integerToBinary(123456);
    integerToBinary(9185482);
    
    system("pause");
    return 0;
}
