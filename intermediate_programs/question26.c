// Write a C program to search an element in an array (linear search)

#include <stdio.h>

int main() {
    int arr[100], n, i, key, found = 0;

    // ব্যৱহাৰকাৰীৰ পৰা এৰেকেৰ উপাদানৰ সংখ্যা লোৱা হৈছে
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // এৰেকেৰ উপাদানবোৰ ব্যৱহাৰকাৰীৰ পৰা লোৱা হৈছে
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // বিচাৰিবলগীয়া উপাদানটো লোৱা হৈছে
    printf("Enter the element to search: ");
    scanf("%d", &key);

    // Linear Search ব্যৱহাৰ কৰি উপাদানটো বিচৰা হৈছে
    for(i = 0; i < n; i++) {
        if(arr[i] == key) {
            // যদি উপাদানটো পোৱা যায়, তেন্তে তাৰ অৱস্থান প্ৰদর্শন কৰা হৈছে
            printf("Element found at position %d (index %d)\n", i + 1, i);
            found = 1;
            break;
        }
    }

    // যদি উপাদানটো পোৱা নাযায়, তেন্তে বার্তা দেখুওৱা হৈছে
    if(!found) {
        printf("Element not found in the array.\n");
    }

    // প্ৰোগ্ৰামটো সফলতাৰে সম্পন্ন হৈছে
    return 0;
}
