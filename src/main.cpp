
#include "includes/Main.hpp"

#define MAX(a,b) ((a > b) ? a : b)
#define MIN(a,b) ((a < b) ? a : b)

/** Testing */
#define TEST_ISEQUAL(a,b) ((a == b) ? "TRUE" : "FALSE")
#define TEST_ISNULLPTR(a) ((a == nullptr) ? printf("[Error] Null pointer passed in! (%s - func:%s line:%i)\n", __FILE__, __func__, __LINE__) : printf("[TEST OKAY] (%s - func:%s line:%i) \n", __FILE__, __func__, __LINE__))


int main()
{
	initializeProgram();
	

	
	terminateProgram();
	return EXIT_SUCCESS;
}
