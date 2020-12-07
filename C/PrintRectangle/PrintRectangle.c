#include <stdio.h>

int main() {
	int r, c;
	
	printf("Enter number of rows: ");
	scanf("%d", &r);
	printf("Enter number of columns: ");
	scanf("%d", &c);
	
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) printf("*");
		
		printf("\n");
	}
}
