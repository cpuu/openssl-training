'''

	Example 1 : Check the installed OpenSSL version

	$ python3 ./1_version.py
	0x1010104f
	OpenSSL 1.1.1d  10 Sep 2019
	
'''

import ssl

print(hex(ssl.OPENSSL_VERSION_NUMBER))
print(ssl.OPENSSL_VERSION)
