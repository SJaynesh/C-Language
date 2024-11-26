#include <stdio.h>
#include <conio.h>
#define PI 3.14
#define P printf
#define clean clrscr
#define hold getch

main()
{
	const int a = 25, b = 35;
	clean();

	// a = 63;
	// b = 22;

	P("A\t: %d\n",a);
	printf("B\t: %d\n",b);
	P("%d + %d = %d\n\n",a,b,a+b);

	// PI = 3.15;

	P("PI value\t: %.2f",PI);

	hold();
}