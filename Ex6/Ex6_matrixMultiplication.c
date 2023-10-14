# include<stdio.h>

int main() {
 
    int matrixA[3][3], matrixB[3][3], matrixC[3][3], result = 0;

    printf("Enter the value of first matrix A:\n");
    for(int i =  0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            scanf("%d", &matrixA[i][j]);
        }
        printf("\n");
    }

    printf("Enter the value of first matrix B:\n");
    for(int i =  0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            scanf("%d", &matrixB[i][j]);
        }
        printf("\n");
    }

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            for(int k = 0; k < 3; k++){
                result += matrixA[i][k] * matrixB[k][j];
            }
            matrixC[i][j] = result;
            result = 0;
        }
    }

    printf("Final result :\n");
    for(int i =  0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("%d ", matrixC[i][j]);
        }
        printf("\n");
    }

    return 0;
}