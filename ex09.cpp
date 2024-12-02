#include <stdio.h>
int main() {
    int row, col;

    printf("Nhap dong: ");
    scanf("%d", &row);
    printf("Nhap cot: ");
    scanf("%d", &col);

    int arr[row][col];

    printf("Nhap phan tu: ");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("arr[%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    int diagonal[row];
    for (int i = 0; i < row; i++) {
        diagonal[i] = arr[i][i];
    }


    for (int i = 0; i < row; i++) {
        arr[i][i] = diagonal[i];
    }
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
