#include <stdio.h>

main()
{
    int row, col;

    printf("Enter row & column : ");
    scanf("%d %d", &row, &col);

    int a[row][col];

    int sum = 0;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("Enter a[%d][%d] : ", i, j);
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ", a[i][j]);
            sum += a[i][j];
        }
        printf("\n");
    }

    printf("ARRAY SUM\t: %d\n\n", sum);
    printf("ARRAY AVG\t: %.2f\n\n", (float)sum / (row * col));
}