#include <iostream>
#include <vector>
using namespace std;

// Prints binary(integer remainder)
void PrintNums(int binaryCarry[], int i) {
    // Adds zeros to complete 4-byte integer conversion
    for(int k = 0; k < 4-i; k++)
        cout << "0";
    // Prints binary array in reverse order
    for (int j = i - 1; j >= 0; j--)
        cout << binaryCarry[j];
    cout << " ";
}

// Separate each digit and place into array
vector<int> SplitNum(int n) {
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
void IntegerToBinary(int n) {
    vector<int> arr = SplitNum(n);
    for(auto& j: arr) {
        int binaryCarry[32], i = 0;
        while (j > 0) {
            binaryCarry[i] = j % 2;
            j = j / 2;
            i++;
        }
        PrintNums(binaryCarry, i);
    }
    cout << endl;
}

// Tests integerToBinary function
int main() {
    IntegerToBinary(1);
    IntegerToBinary(5);
    IntegerToBinary(12);
    IntegerToBinary(35);
    IntegerToBinary(117);
    IntegerToBinary(2);
    IntegerToBinary(21967);
    IntegerToBinary(123456);
    IntegerToBinary(9185482);
    
    system("pause");
    return 0;
}
