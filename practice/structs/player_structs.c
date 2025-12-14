#include <stdio.h>
#include <string.h>

typedef struct playerProperties
{
	int lvl;
	char name[100];
	float health;
	float power;
} player;

void printS(player p);
void writeS(player *p);

int main(int argc, char const *argv[])
{
	player p[2];
	int sizeP = sizeof(p)/sizeof(p[0]);

	for (int i = 0; i < sizeP; i++)
	{
		writeS(&p[i]);
		if (i<sizeP-1)
		{
			printf("==========Next Player=========\n");
		}
		
	}

	printf("===========Player Stats=========\n");

	for(int i = 0; i < sizeP; i++)
	{
		printS(p[i]);
		printf("=============================\n");
		
	}

	
	return 0;
}

void writeS(player *p)
{
	printf("Enter level: ");
	scanf("%d", &p->lvl);
	
	printf("Enter name: ");
	scanf("%99s", p->name);
	
	printf("Enter health: ");
	scanf("%f", &p->health);
	
	printf("Enter power: ");
	scanf("%f", &p->power);
}

void printS(player p)
{
	printf("Level: %d\n", p.lvl);
	printf("Name: %s\n", p.name);
	printf("Health: %.2f\n", p.health);
	printf("Power: %.2f\n", p.power);
}
