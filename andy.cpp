#include <iostream>
using namespace std;

int LinearSearch(int[], int, int);

int main() {
        int numbers[] = { 2, -5, 14, -29 };
        int value;
    int* p = new int[10];
        cout << "Enter a number to search for: ";
        cin >> value;
        cout << "Index found: " << LinearSearch(numbers, sizeof(numbers) / sizeof(numbers[0]), value) << endl;
         delete[] p;
        return 0;
}

int LinearSearch(int array[], int length, int desiredValue) {
        int i;

        for (i = 0; i < length; i++) {   //BUG: the test i<=length is wrong
                if (desiredValue == array[i]) {
                        break;
                }
        }
        return i;
}
