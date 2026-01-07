#include <stdio.h>

int main()
{
	FILE *file = fopen("data.txt", "w");
	char ch;

	while (1)
	{

		printf("Enter student name:\t");
		scanf("%c", &ch);
		printf("Enter student marks:\t");
		scanf("%d", &ch);
		printf("Enter student name:\t");
		scanf("%c", &ch);
		ch = fputc(ch, file);
	}

	fclose(file);
	return 0;
}
