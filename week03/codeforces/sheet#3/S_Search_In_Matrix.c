#include <stdio.h>

int main() {
    int rows, cols;
    scanf("%d %d", &rows, &cols);
    
    
    int matrix[rows][cols];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    
    int target;
    scanf("%d", &target);


    int found = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] == target) {
                found = 1;
                break;
            }
        }
        if (found) {
            break;
        }
    }
    if (found) {
        printf("will not take number\n");
    } else {
        printf("will take number\n");
    }
    return 0;
}