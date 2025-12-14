#include <stdio.h>
#include <string.h>

int main(void)
{
	FILE *writeF = fopen("content.txt", "w");
	if (writeF == NULL)
	{
		perror("fopen");
		return 1;
	}
	
	char ch;
	while (1)	
	{
		scanf("%c", &ch);
		if (ch == '\n')
		{
			break;
		}
		fputc(ch, writeF);
	}
	fclose(writeF);

	FILE *readF = fopen("content.txt", "r");
	if (readF == NULL)
	{
		perror("fopen");
		return 1;
	}
	printf("Final output: ");
	int c;
	while ((c = fgetc(readF)) != EOF)
	{
		putchar(c);
	}
	putchar('\n');
	
	fclose(readF);
	return 0;
}