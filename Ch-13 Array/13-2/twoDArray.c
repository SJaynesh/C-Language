#include <stdio.h>

main()
{
    // Datatype arrayName[row][col];

    // int a[4][3] = {
    //     {10, 20, 30},
    //     {50, 80, 90},
    //     {45, 65, 78},
    //     {},
    // };
    int row, col;

    printf("Enter row: ");
    scanf("%d", &row);
    printf("Enter col: ");
    scanf("%d", &col);

    int a[row][col];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("Enter a[%d][%d] : ", i, j);
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }

    // {10,20,30}

    // a[0][0] = 10;
    // a[0][1] = 20;
    // a[0][2] = 30;

    // a[1][0] = 40;
    // a[1][1] = 50;
    // a[1][2] = 60;

    // a[2][0] = 70;
    // a[2][1] = 80;
    // a[2][2] = 90;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}