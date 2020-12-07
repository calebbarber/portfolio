#include <stdio.h>

int check(char* str1, char* str2) {
	char temp[100];
	int n1, n2;
	int start, end;
	
	while (str1[n1] != '\0') n1++;
	while (str2[n2] != '\0') n2++;
	
	if (n1 != n2) return 0;
	
	end = n1 - 1;
	
	for (start = 0; start < n1; start++) {
		temp[start] = str1[end];
		end--;
	}
	
	for (int i = 0; i < n1; i++)
		if (temp[i] != str2[i]) return 0;
	
	return 1;
}

int main() {
	char str1[100];
	char str2[100];
	int res;
	
	printf("Enter 2 words: ");
	scanf("%s %s", str1, str2);
	
	res = check(str1, str2);
	
	if (res) printf("%s is an annagram of %s\n", str1, str2);
	else printf("%s is not an annagram of %s\n", str1, str2);
	
	return 0;
}
