
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int row1 = 4, col1 = 5;
    int row2 = 5, col2 = 3;

    // First Matrix: 4 x 5
    int **matrix1;

    matrix1 = (int **)malloc(row1 * sizeof(int *));

    for (int i = 0; i < row1; i++)
    {
        *(matrix1 + i) = (int *)malloc(col1 * sizeof(int));
    }

    // Insert values in First Matrix
    int k = 1;

    for (int i = 0; i < row1; i++)
    {
        int *temp = *(matrix1 + i);

        for (int j = 0; j < col1; j++)
        {
            *(temp + j) = k++;
        }
    }

    // Second Matrix: 5 x 3
    int **matrix2;

    matrix2 = (int **)malloc(row2 * sizeof(int *));

    for (int i = 0; i < row2; i++)
    {
        *(matrix2 + i) = (int *)malloc(col2 * sizeof(int));
    }

    // Insert values in Second Matrix
    k = 1;

    for (int i = 0; i < row2; i++)
    {
        int *temp = *(matrix2 + i);

        for (int j = 0; j < col2; j++)
        {
            *(temp + j) = k++;
        }
    }

    // Result Matrix: 4 x 3
    int **result;

    result = (int **)malloc(row1 * sizeof(int *));

    for (int i = 0; i < row1; i++)
    {
        *(result + i) = (int *)malloc(col2 * sizeof(int));
    }

    // Matrix Multiplication
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            int sum = 0;

            for (int k = 0; k < col1; k++)
            {
                sum += (*(matrix1 + i))[k] * (*(matrix2 + k))[j];
            }

            (*(result + i))[j] = sum;
        }
    }

    // Print First Matrix
    printf("First Matrix (4 x 5):\n");

    for (int i = 0; i < row1; i++)
    {
        int *temp = *(matrix1 + i);

        for (int j = 0; j < col1; j++)
        {
            printf("%d ", *(temp + j));
        }

        printf("\n");
    }

    // Print Second Matrix
    printf("\nSecond Matrix (5 x 3):\n");

    for (int i = 0; i < row2; i++)
    {
        int *temp = *(matrix2 + i);

        for (int j = 0; j < col2; j++)
        {
            printf("%d ", *(temp + j));
        }

        printf("\n");
    }

    // Print Result
    printf("\nResult Matrix (4 x 3):\n");

    for (int i = 0; i < row1; i++)
    {
        int *temp = *(result + i);

        for (int j = 0; j < col2; j++)
        {
            printf("%d ", *(temp + j));
        }

        printf("\n");
    }

    // First Matrix
    for (int i = 0; i < row1; i++)
    {
        free(*(matrix1 + i));
    }

    free(matrix1);

    //Second Matrix
    for (int i = 0; i < row2; i++)
    {
        free(*(matrix2 + i));
    }

    free(matrix2);

    //Result 
    for (int i = 0; i < row1; i++)
    {
        free(*(result + i));
    }

    free(result);

    return 0;
}
