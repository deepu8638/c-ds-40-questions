// Write a C program to find the transpose of a matrix.
#include <stdio.h>

int main() {
    int rows, cols, i, j;

    // ব্যৱহাৰকাৰীৰ পৰা ম্যাট্ৰিক্সৰ শাৰী আৰু স্তম্ভৰ সংখ্যা লোৱা হৈছে
    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols], transpose[cols][rows];

    // মূল ম্যাট্ৰিক্সৰ উপাদানবোৰ লোৱা হৈছে
    printf("Enter elements of the matrix:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // ম্যাট্ৰিক্সটোৰ ট্রান্সপ'জ গণনা কৰা হৈছে
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            transpose[j][i] = matrix[i][j];  // শাৰীক স্তম্ভ আৰু স্তম্ভক শাৰী কৰা হৈছে
        }
    }

    // ট্রান্সপ'জ ম্যাট্ৰিক্সটো প্ৰিন্ট কৰা হৈছে
    printf("Transpose of the matrix:\n");
    for(i = 0; i < cols; i++) {
        for(j = 0; j < rows; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    // প্ৰোগ্ৰামটো সফলতাৰে সম্পন্ন হৈছে
    return 0;
}
