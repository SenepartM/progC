#include <stdio.h>
int main() {
	int i, j,x;
	printf("donner x compris entre 2 et 10");
	scanf("%d", &x);
	while (x < 2 || x>10) {
		printf("donner x compris entre 2 et 10");
		scanf("%d", &x);
	}
	printf("\n \n \n \n \n \n ");

	printf("  |");

	for (i = 1; i <= x; i++) {
		printf("%4d", i);
	}
	printf("\n");
	printf("---|----------------------------------------");

	for (i = 1; i <= x; i++) {
		printf("\n");
		printf("%2d |", i);

		for (j = 1; j < x+1; j++) {
			printf("%4d", i*j);
		}





	}
}