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
void printLines(int n);

void initializeProgram();

#endif /* _UTILS_HPP */