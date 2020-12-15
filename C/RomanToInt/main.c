#include <stdio.h>
#include <string.h>

#define MAX 100

int value(char);
int convert(char*, int);

int main() {
	char str[MAX];
	int n;
	int res;
	
	printf("Enter roman numeral: ");
	scanf("%s", str);
	n = strlen(str);
	
	for (int i = 0; i < n; i++) 
		if (str[i] >= 'a' || str[i] <= 'z') str[i] -= 32;
	
	
	res = convert(str, n);
	
	if (!res) printf("Invalid roman numeral\n");
	else printf("%s = %d\n", str, res);
	
	return 0;
}
