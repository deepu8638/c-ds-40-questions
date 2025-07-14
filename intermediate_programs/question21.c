// Write a C program to perform matrix addition.
#include <stdio.h>

int main() {
    int rows, cols, i, j;

    // ব্যৱহাৰকাৰীৰ পৰা ম্যাট্ৰিক্সৰ শাৰী আৰু স্তম্ভৰ সংখ্যা লোৱা হৈছে
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int matrix1[rows][cols], matrix2[rows][cols], sum[rows][cols];

    // প্ৰথম ম্যাট্ৰিক্সৰ উপাদানবোৰ লোৱা হৈছে
    printf("Enter elements of first matrix:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    // দ্বিতীয় ম্যাট্ৰিক্সৰ উপাদানবোৰ লোৱা হৈছে
    printf("Enter elements of second matrix:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    // দুইটা ম্যাট্ৰিক্সৰ যোগফল গণনা কৰা হৈছে
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    // ফলাফলত পোৱা যোগফল ম্যাট্ৰিক্সটো প্ৰিন্ট কৰা হৈছে
    printf("Resultant matrix after addition:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    // প্ৰোগ্ৰামটো সফলতাৰে সম্পন্ন হৈছে
    return 0;
}
