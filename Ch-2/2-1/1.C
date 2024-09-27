#include <stdio.h>
#include <conio.h>
/*
	5
      D	E D
    3 4 5 4 3
  B C D E D C B
1 2 3 4 5 4 3 2 1
R & W T E C H W A R
1 2 3 4 5 4 3 2 1
  B C D E D C B
    3 4 5 4 3
      D E D
	5
*/
main()
{
	int i,j,s;
	clrscr();

	for(i=5; i>=1; i--)
	{

		for(s=1; s<i; s++)
			printf("  ");
		for(j=i; j<=5; j++)
		{
			if(i%2==0)
				printf("%c ",j+64);
			else
				printf("%d ",j);

		}
		for(j=4; j>=i; j--)
		{
			if(i%2==0)
				printf("%c ",j+64);
			else
				printf("%d ",j);

		}
		printf("\n");
	}
	printf("R W T E C H W A R\n");

	for(i=1; i<=5; i++)
	{

		for(s=1; s<i; s++)
			printf("  ");
		for(j=i; j<=5; j++)
		{
			if(i%2==0)
				printf("%c ",j+64);
			else
				printf("%d ",j);

		}
		for(j=4; j>=i; j--)
		{
			if(i%2==0)
				printf("%c ",j+64);
			else
				printf("%d ",j);

		}
		printf("\n");
	}


	getch();
}