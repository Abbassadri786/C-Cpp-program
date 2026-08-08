#include <iostream>
#include <algorithm>
using namespace std;

void incrementSort(int arr[], int n) {
    int index = 0;

    while(index < n) {

        // Move forward if current element is in correct order
        if(index == 0 || arr[index] >= arr[index - 1]) {
            index++;
        }
        else {
            // Swap adjacent elements if they are out of order
            swap(arr[index], arr[index - 1]);

            // Move back to check previous elements
            index--;
        }
    }
}

int main() {

    int arr[5] = {2, 3, 5, 1, 4};

    incrementSort(arr, 5);

    for(int x : arr) {
        cout << x << " ";
    }

    return 0;
}
