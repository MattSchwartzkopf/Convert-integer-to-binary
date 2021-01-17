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

// Split into nums
vector<int> splitNum(int n) {
    // Separate each digit and place into array
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
        int binaryCarry[32];
        int i = 0;
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
    int testZero = 1;
    integerToBinary(testZero);
    
    int testOne = 5;
    integerToBinary(testOne);
    
    int testTwo = 12;
    integerToBinary(testTwo);
    
    int testThree = 35;
    integerToBinary(testThree);
    
    int testFour = 117;
    integerToBinary(testFour);
    
    int testFive = 2;
    integerToBinary(testFive);
    
    int testSix = 21967;
    integerToBinary(testSix);
    
    int testSeven = 123456;
    integerToBinary(testSeven);
    
    int testEight = 9185482;
    integerToBinary(testEight);
    
    system("pause");
    return 0;
}
