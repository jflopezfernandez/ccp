
#include "includes/Main.hpp"

void clearScreen() {
	system("cls");
}


void printCompilationDate() {
	printf("Compiled on %s, at %s\n", __DATE__, __TIME__);
}


void printCPPVersion() {
	printf("C++ Standard: %li\n", __cplusplus);
}


void printLines(int n) {
	printf("\n");
	
	for (int i = 0; i < n; ++i) {
		printf("\n");
	}
}

void initializeProgram() {
	clearScreen();
	printCompilationDate();
	printCPPVersion();
	printLines(2);
}


void terminateProgram() {
	printLines(2);
}