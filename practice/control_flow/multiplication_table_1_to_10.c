#include <stdio.h>

void makeTable(int n);

int main(){
	int num = 1;
	do{
		makeTable(num);
		printf("\n");
		num++;
	}while(num <= 10);

	return 0;
}

void makeTable(int n){
	for(int i = 1; i <= 10; i++){
		printf("%d x %d = %d\n", n, i, n * i);
	}
}