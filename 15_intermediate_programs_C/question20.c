// Write a C program to sort an array in ascending order.
#include <stdio.h>

int main() {
    int n, i, j, temp;

    // ব্যৱহাৰকাৰীৰ পৰা এৰাকেৰ আকাৰ লোৱা হৈছে
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    // ব্যৱহাৰকাৰীৰ পৰা এৰাকেৰ উপাদানবোৰ লোৱা হৈছে
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // ব্ৰাবেল ছৰ্ট ব্যৱহাৰ কৰি এৰাটো ঊৰ্ধ্বক্রম (ascending order)ত ছৰ্ট কৰা হৈছে
    for(i = 0; i < n-1; i++) {
        for(j = 0; j < n-i-1; j++) {
            if(arr[j] > arr[j+1]) {
                // উপাদান দুটা আদান-প্ৰদান (swap) কৰা হৈছে
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    // ছৰ্ট কৰা এৰাটোৰ উপাদানবোৰ প্ৰিন্ট কৰা হৈছে
    printf("Array in ascending order:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // প্ৰোগ্ৰামটো সফলতাৰে সম্পন্ন হৈছে
    return 0;
}
