#include<stdio.h>

int main() {
	unsigned int temp = 1;
	char *ptr = (char *)&temp;
	
	if (*ptr) {
		printf("System Architecture is Little endian\n");
	} else {
		printf("System Architecture is Big endian\n");
	}

	return 0;
}
