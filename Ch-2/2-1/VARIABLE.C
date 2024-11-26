#include <stdio.h>
#include <conio.h>

main()
{
	// Datatype variableName;
	int a = 10;
	int b = 20;
	char ch;
	float PI = 3.14;

	clrscr();

	ch = 'J';


	printf("A\t: %d\n",a);    // 10
	printf("B\t: %i\n",b);    // 20

	printf("Char\t: %c\n",ch); // J

	printf("PI\t: %.2f",PI);


	getch();
}