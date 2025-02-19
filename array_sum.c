#include <stdio.h>

// Function to calculate the sum of an array
int sum_array(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];  // Add each element to sum
    }
    return sum;
}

int main() {
    int size;

    // Ask user for the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &size);

    int arr[size];  // Declare an array of given size

    // Get array elements from the user
    printf("Enter %d numbers: ", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Call the function and print the result
    int total = sum_array(arr, size);
    printf("The sum of the array is: %d\n", total);

    return 0;
}
