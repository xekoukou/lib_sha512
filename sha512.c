#include"sha512.h"
#include<stdio.h>

void sha512(char *string, int length, char *result)
{

	int msg_length = length;
	int hash_length = gcry_md_get_algo_dlen(GCRY_MD_SHA512);
	unsigned char hash[hash_length];
	printf("hash_length: %d\n", hash_length * 2);
	gcry_md_hash_buffer(GCRY_MD_SHA512, hash, string, msg_length);
	int i;
	for (i = 0; i < hash_length; i++, result += 2) {
		snprintf(result, 3, "%02x", hash[i]);
	}
	return;

}
