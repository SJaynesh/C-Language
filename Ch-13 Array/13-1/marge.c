#include <stdio.h>

main()
{
    int size1, size2;

    printf("Enter first array size : ");
    scanf("%d", &size1);
    printf("Enter second array size : ");
    scanf("%d", &size2);

    int a[size1], b[size2];
    int marge[size1 + size2];

    printf("\n\nFirst Array Input\n\n");
    for (int i = 0; i < size1; i++)
    {
        printf("Enter element %d : ", i + 1);
        scanf("%d", &a[i]);
    }

    printf("\n\nSecond Array Input\n\n");
    for (int i = 0; i < size2; i++)
    {
        printf("Enter element %d : ", i + 1);
        scanf("%d", &b[i]);
    }

    for (int i = 0; i < size1; i++)
    {
        marge[i] = a[i];
    }

    for (int i = 0; i < size2; i++)
    {
        marge[size1 + i] = b[i];
    }

    printf("\n\nMarge Array\n\n");
    for (int i = 0; i < size1 + size2; i++)
    {
        printf("%d\t", marge[i]);
    }
}