#include <stdio.h>

int value(char ch) {
	switch (ch) {
		case 'I' : return 1;
		case 'V' : return 5;
		case 'X' : return 10;
		case 'L' : return 50;
		case 'C' : return 100;
		case 'D' : return 500;
		case 'M' : return 1000;
		default : return 0;
	}
}

int convert(char *ch, int n) {
	int res = 0;
	
	for (int i = 0; i < n; i++) {
		if (!value(ch[i])) return 0;
		res += value(ch[i]);
		
		if (value(ch[i-1]) == 1 && value(ch[i]) > 1) res -= 2;
		if (value(ch[i-1]) == 10 && value(ch[i]) > 10) res -= 20;
		if (value(ch[i-1]) == 100 && value(ch[i]) > 100) res -= 200;
	}
	
	return res;
}
