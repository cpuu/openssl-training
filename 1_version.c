/*

	Example 1 : Check the installed OpenSSL version

	$ gcc -o 1_version 1_version.c -lssl -lcrypto
	$ ./1_version
	OPENSSL_VERSION : OpenSSL 1.1.1d  10 Sep 2019
	1010104f

*/
#include <stdio.h>
#include <openssl/opensslv.h>
int main(int argc, char *argv[])
{
	printf("OPENSSL_VERSION : %s\n", OPENSSL_VERSION_TEXT);
	printf("%lx\n", OPENSSL_VERSION_NUMBER);

	return 0;
}
