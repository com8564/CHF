
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <time.h>
#include <Windows.h>

bool do_hash(char* input, uint8_t* out, bool salt = true);
bool find_first_20bit(char* input, uint8_t* out);
int sha3_hash(uint8_t* output, int outLen, uint8_t* input, int inLen, int bitSize, bool useSHAKE);
