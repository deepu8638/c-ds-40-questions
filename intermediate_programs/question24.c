// Write a C program to insert an element in an array.
#include <stdio.h>

int main() {
    int arr[100], n, i, pos, value;

    // ব্যৱহাৰকাৰীৰ পৰা এৰেকেৰ আকাৰ লোৱা হৈছে
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // এৰেকেৰ উপাদানবোৰ লোৱা হৈছে
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // সন্নিবেশ কৰিবলৈ ইচ্ছা কৰা মান আৰু অবস্থান লোৱা হৈছে
    printf("Enter the position to insert the element (1 to %d): ", n+1);
    scanf("%d", &pos);

    printf("Enter the value to insert: ");
    scanf("%d", &value);

    // এৰেকেৰ উপাদানবোৰ এক স্থান পিছলৈ সরোৱা হৈছে
    for(i = n; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }

    // নতুন উপাদানটো নিৰ্দিষ্ট স্থানত সন্নিবেশ কৰা হৈছে
    arr[pos - 1] = value;
    n++;  // উপাদান সংখ্যা ১ বৃদ্ধি কৰা হৈছে

    // সন্নিবেশ কৰাৰ পিছত নতুন এৰেকেৰ উপাদানবোৰ প্ৰিন্ট কৰা হৈছে
    printf("Array after insertion:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // প্ৰোগ্ৰামটো সফলতাৰে সম্পন্ন হৈছে
    return 0;
}
