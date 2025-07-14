// Write a C program to implement bubble sort using functions
#include <stdio.h>

// এই ফাংশনটো এৰেকেৰ উপাদানবোৰ ব্ৰাবেল ছৰ্ট ব্যৱহাৰ কৰি ছৰ্ট কৰে
void bubbleSort(int arr[], int n) {
    int i, j, temp;

    // বাহ্যিক লুপ — সম্পূৰ্ণ এৰেকেৰ বাবে
    for(i = 0; i < n - 1; i++) {
        // অভ্যন্তৰীণ লুপ — উপাদানবোৰ পৰস্পৰৰ সৈতে তুলনা কৰা হৈছে
        for(j = 0; j < n - i - 1; j++) {
            if(arr[j] > arr[j + 1]) {
                // যদি পৰৱৰ্তী উপাদান সৰু হয়, তেন্তে আদান-প্ৰদান (swap) কৰা হৈছে
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// এই ফাংশনটো এৰেকেৰ উপাদানবোৰ স্ক্ৰীণত প্ৰিন্ট কৰে
void printArray(int arr[], int n) {
    int i;
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[100], n, i;

    // ব্যৱহাৰকাৰীৰ পৰা এৰেকেৰ আকাৰ লোৱা হৈছে
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // ব্যৱহাৰকাৰীৰ পৰা উপাদানবোৰ লোৱা হৈছে
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // ব্ৰাবেল ছৰ্ট ফাংশন কল কৰা হৈছে
    bubbleSort(arr, n);

    // ছৰ্ট কৰাৰ পিছত এৰেকেৰ উপাদানবোৰ প্ৰিন্ট কৰা হৈছে
    printf("Sorted array in ascending order:\n");
    printArray(arr, n);

    // প্ৰোগ্ৰামটো সফলতাৰে সম্পন্ন হৈছে
    return 0;
}

