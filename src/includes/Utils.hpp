#ifndef _UTILS_HPP
#define _UTILS_HPP


/** Variadic template print function */
/*
void print() {
	
}

template <typename T, typename... Types>
void print(T firstArg, Types... args) {
	std::cout << firstArg << ' ';
	print(args...);
}
*/


void clearScreen();
void printCompilationDate();
void printCPPVersion();
void printLines(int n);

void initializeProgram();
void terminateProgram();

#endif /* _UTILS_HPP */