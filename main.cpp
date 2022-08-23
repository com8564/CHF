#define _CRT_SECURE_NO_WARNINGS
#include "sha3.h"

int main()
{
	srand(time(0));
	uint8_t out[512] = { 0, };
	uint8_t in[200] = { 0, };
	char input[200] = { 0, };
	bool result;
	int count = 0;

	printf("* SHA-3(256) test *\n\n");
	do {
		count++;
		int i = 0;

		//find number -> first 20bit is zero 
		memset(input, 0, 200);
		printf("\nfind : %d", count);
		sprintf(input, "%d", count); //change int2string
		
		result = find_first_20bit(input, out);

		if (result) { 
			printf("result %d", count); 

			printf("hash : ");

			int out_length = 256 / 8;
			for (int i = 0; i < out_length; i++) {
				printf("%02X ", out[i]); //prsing hashing
			}

			break; 
		}

	} while (1);

	return 0;
}