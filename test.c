#include"sha512.h"
#include"stdio.h"

int main()
{

	char *string = "blue ferry";
	char result[128];
	sha512(string, 10, result);

	printf("result: %s\n", result);

}
