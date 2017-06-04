
#include "includes/Main.hpp"

template <typename T>
T minimum(const T& lhs, const T& rhs) {
	return (lhs < rhs ? lhs : rhs);
}


int main()
{
	initializeProgram();
	
	double a, b;
	scanf("%lf %lf", &a, &b);
	
	printf("min(%lf,%lf) = %lf\n", a, b, minimum(a,b));
	
	
	terminateProgram();
	return EXIT_SUCCESS;
}
