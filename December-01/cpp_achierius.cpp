#include <iostream>
#include <string>
#include <math.h>
#include <assert.h>

int main (int args, char* argv[]) {
	assert(args == 2);
	int n = std::stoi(argv[1]);
	assert(n > 0);

	int ret = 0;

	for (int m = n, i = 0; m > 0; m /= 2, i++) {
		if (m != 2*(m/2)) {
			ret += std::pow(7, i);
		}
	}

	std::cout<<"The #"<<n<<" Sevenish Number is "<<ret<<".\n";
	return 0;
}
