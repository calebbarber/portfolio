#include <stdio.h>

int main() {
	int r;
	
	printf("Enter number of rows: ");
	scanf("%d", &r);
	
	for (int i = 1; i <= r; i++) {
		for (int j = 1; j <= r; j++) {
			if (i == 1 || i == r) printf("*");
			else {
				if (j == 1 || j == r) printf("*");
				else printf(" ");
			}
		}
		
		printf("\n");
	}
	
	return 0;
}