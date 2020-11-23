#include <stdio.h>

void printIP(int n) {
    int bits[4];
    
    bits[0] = n & 0xFF;
    bits[1] = (n >> 8) & 0xFF;
    bits[2] = (n >> 16) & 0xFF;
    bits[3] = (n >> 24) & 0xFF;

    printf("%d.%d.%d.%d\n", bits[3], bits[2], bits[1], bits[0]);
}

int reverseEndian(int n) {
    unsigned int reverse = 0;

    int byte1 = n >> 24;
    int byte2 = (n >> 16) & 0xFF;
    int byte3 = (n >> 8) & 0xFF;
    int byte4 = n & 0xFF;

    reverse = ((byte4 << 24) | (byte3 << 16) | (byte2 << 8) | byte1);    
    return reverse;
}

int countGroups(int n) {
    int binary[32];
    int count = 0;

    for (int i = 31; i >= 0; i--) {
		int j = n >> i;
		
		if (j & 1) {
			printf("1");
			binary[i] = 1;
		}
		else {
			printf("0");
			binary[i] = 0;
		}
	}
	printf("\n");

    for (int i = 0; i < 32; i++) {
		printf("%d", binary[i]);
		if (binary[i] == 1) {
			count++;
			
			while (binary[i] != 0)
				i++;
		}
	}
	
	printf("\nGroups of 1: %d\n", count);
    return count;
}

