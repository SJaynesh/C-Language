#include <stdio.h>

main()
{
    int size;

    printf("Enter number of elements: ");
    scanf("%d", &size);

    int a[size], b[size];
    int sum[size];

    printf("\n\nArray 01\n\n");

    for (int i = 0; i < size; i++)
    {
        printf("Enter element %d : ", i + 1);
        scanf("%d", &a[i]);
    }

    printf("\n\nArray 02\n\n");

    for (int i = 0; i < size; i++)
    {
        printf("Enter element %d : ", i + 1);
        scanf("%d", &b[i]);
    }

    printf("\n\nArray Output\n\n");
    for (int i = 0; i < size; i++)
        printf("%d\t", a[i]);

    printf("\n");

    for (int i = 0; i < size; i++)
        printf("%d\t", b[i]);

    for (int i = 0; i < size; i++)
        sum[i] = a[i] + b[i];

    printf("\n\n");

    for (int i = 0; i < size; i++)
        printf("%d\t", sum[i]);
}