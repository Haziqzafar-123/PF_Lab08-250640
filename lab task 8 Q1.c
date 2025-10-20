#include <stdio.h>

int main() {
	int i;
	int j;
    int matrix1[3][3];
    int matrix2[3][3];
    int result[3][3];
    
    printf("Enter sales data for Quarter 1 (3x3 matrix):\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Enter sales for branch %d, product %d: ", i + 1, j + 1);
            scanf("%d", &matrix1[i][j]);
        }
    }
    
    printf("Enter sales data for Quarter 2 (3x3 matrix):\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Enter sales for branch %d, product %d: ", i + 1, j + 1);
            scanf("%d", &matrix2[i][j]);
        }
    }
    
    
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
    
    
    printf("Total sales for the first half of the year:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
