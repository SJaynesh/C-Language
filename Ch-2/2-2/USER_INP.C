#include <stdio.h>
#include <conio.h>

main()
{
	int n;
	float pi;
	char ch;
	clrscr();



	printf("Enter any number : ");
	scanf("%d",&n);
	printf("Enter PI value : ");
	scanf("%f",&pi);
	fflush(stdin);
	printf("Enter character value : ");
	scanf("%c",&ch);

	printf("\n\n");

	printf("Number\t: %d\n",n);
	printf("PI\t: %.2f\n",pi);
	printf("CHAR\t: %c\n",ch);

	getch();
}