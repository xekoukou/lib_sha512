#ifndef SHA512_H
#define SHA512_H


#include <gcrypt.h>

#define SHA512_LENGTH 128

void sha512(char *string, int length, char *result);

#endif
