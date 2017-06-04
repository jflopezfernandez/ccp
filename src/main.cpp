
#include "includes/Main.hpp"


int main()
{
	initializeProgram();
	
	auto a = std::make_unique<int[]>(10);
	
	for (int i = 0; i < 10; ++i) {
		a[i] = i + 1;
		printf("%i ", a[i]);
	}
	
	printf("\n");
	
	terminateProgram();
	return EXIT_SUCCESS;
}
