#include <stdio.h>

int check(char* str) {
	char temp[100];
	int start, end, count;
	
	while (str[count] != '\0') count++;
	
	end = count - 1;
	
	for (start = 0; start < count; start++) {
		temp[start] = str[end];
		end--;
	}
	
	for (int i = 0; i < count; i++) 
		if (temp[i] != str[i]) return 0;
	
	return 1;
}

int main() {
	char str[100];
	
	printf("Enter a word: ");
	scanf("%s", str);
	
	if (check(str)) printf("%s is a palindrome\n", str);
	else printf("%s is not a palindrome\n", str);
	
	return 0;
}
