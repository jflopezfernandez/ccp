
#include "includes/Main.hpp"


int main()
{
	initializeProgram();
	
	std::fstream fs;
	fs.open("test.dat");
	
	if (fs.is_open()) {
		fs << "testing...\n";
	} else {
		std::cerr << "[Error] Could not open file...\n";
	}
	
	fs.close();
	
	return EXIT_SUCCESS;
}
