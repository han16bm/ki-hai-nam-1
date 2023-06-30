#include <stdio.h>

int main() { 
	int n; 
	scanf("%d", &n); 
	for (int i = 1; i <= 2 * n - 1; ++i) { 
		if (i % 2 == 1) { 
			int chu = 64; 
			for (int j = 1; j <= i; ++j) { 
			if (j == 1 || j == i) { 
				printf("@"); } 
			else if (j <= i - (i / 2)) { 
				printf("%c", chu += 2); } 
			else { printf("%c", chu -= 2);
			} 
		} 
		printf("\n");
		} 
	} 
	return 0; 
}