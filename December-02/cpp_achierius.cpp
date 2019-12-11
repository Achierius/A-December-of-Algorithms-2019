#include <iostream>
#include <string>
#include <math.h>
#include <assert.h>

int main (int args, char* argv[]) {
	assert(args == 2);
	std::string str = argv[1];
	int len = str.length();
	assert(len > 0);

	int s1 = 0;
	int s2 = 0;
	for (int i = 1; i <= len; i++) {
		int chr = str[len - i] - '0';
		i % 2 ? s1 += chr : s2 += 2*(chr % 5) + (chr/5);
	}

	if ((s1 + s2) % 10) {
		std::cout<<str<<" does not pass the Luhn test.\n";
	} else {
		std::cout<<str<<" passes the Luhn test.\n";
	}
	return 0;
}
