/*

	Example 1 : Check the installed OpenSSL version

	$ gcc -o 1_version 1_version.c -lssl -lcrypto
	$ ./1_version

	0x1010104f
	OpenSSL 1.1.1d  10 Sep 2019

*/

#include <stdio.h>
#include <openssl/opensslv.h>
#include <openssl/crypto.h>

int main(int argc, char *argv[])
{
	printf("Numeric release version identifier : %#lx\n", OpenSSL_version_num());
	for (int i = 0; i < 6; i++)
	{
		printf("%s\n", OpenSSL_version(i));
	}
	return 0;
}
