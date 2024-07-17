#include <stdio.h>

main()
{
    int row, col;

    printf("Enter row & column : ");
    scanf("%d %d", &row, &col);

    int a[row][col], b[row][col];
    int sum[row][col];

    printf("\n\nARRAY 01\n\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("Enter a[%d][%d] : ", i, j);
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }

    printf("\n\nARRAY 02\n\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("Enter b[%d][%d] : ", i, j);
            scanf("%d", &b[i][j]);
        }
        printf("\n");
    }

    printf("\n\nARRAY 01 OUTPUT\n\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    printf("\n\nARRAY 02 OUTPUT\n\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }
    printf("\n\nARRAY 03 OUTPUT\n\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
}