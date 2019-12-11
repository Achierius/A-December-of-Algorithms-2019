#include <iostream>
#include <string>
#include <math.h>
#include <assert.h>

int main (int args, char* argv[]) {
	assert(args >= 2);
	assert(std::stoi(argv[1]) > 0);
	assert(std::stoi(argv[1]) == args - 2);

	int n_papers = std::stoi(argv[1]);
	char** papers = &argv[2];
	int* indices = new int[n_papers + 1];

	for (int i = 0; i < n_papers; i++) {
		indices[std::stoi(papers[i])]++;
	}

	for (int i = n_papers, j = 0; i >= 0; i--) {
		if (indices[i] + j >= i) {
			std::cout<<"Dr. Banner's H-Index is "<<i<<"\n";
			delete[] indices;
			return 0;
		} else {
			j += indices[i];
		}
	}

	delete[] indices;
	return 1;
}
