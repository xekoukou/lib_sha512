#include"sha512.h"
#include"stdio.h"

int main()
{

	char *string = "";
	char result[SHA512_LENGTH];
	sha512(string, 0, result);

	printf("result: %s\n", result);

}
