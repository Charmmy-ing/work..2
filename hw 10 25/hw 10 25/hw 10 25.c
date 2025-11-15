#include<stdio.h>
int main()
{
	for (int i = 1; i < 8; i++)
	{
		switch (i)
		{
		case 1:printf("   *   \n");
			break;
		case 2:printf("  ***  \n");
			break;
		case 3:printf(" ***** \n");
			break;
		case 4:printf("*******\n");
			break;
		case 5:printf(" ***** \n");
			break;
		case 6:printf("  ***  \n");
			break;
		case 7:printf("   *   \n");
		}
	}
	return 0;
}