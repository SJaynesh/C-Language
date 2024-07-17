#include <stdio.h>

main()
{
    // Datatype arrayName[size];

    int size;
    int sum = 0;

    printf("Enter number of elements : ");
    scanf("%d", &size);

    int a[size];

    printf("\n\nArray Input\n\n");
    for (int i = 0; i < size; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    printf("\n\nArray Output\n\n");
    for (int i = 0; i < size; i++)
        printf("%d\t", a[i]);

    for (int i = 0; i < size; i++)
        sum += a[i];

    printf("\n\n");
    printf("Array SUM\t: %d\n\n", sum);
    printf("Array AVG\t: %.2f", (float)sum / size);
}
