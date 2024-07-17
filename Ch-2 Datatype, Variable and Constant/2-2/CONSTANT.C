#include <stdio.h>
#include <conio.h>
#define PI 3.14
#define P printf
#define clear clrscr
#define hold getch

main()
{
	const int a = 34;
	clear();

	//a = 45;
	//PI = 3.15;

	P("A\t: %d\n",a);
	P("PI\t: %.2f\n",PI);
	printf("\nHello");

	hold();

}