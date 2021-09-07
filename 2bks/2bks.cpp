/*
*	2bks.cpp
*	by Jan Baumann
*/ 

// for standalone exe linkage:
// right klick on target -> Properties -> C/C++ -> Code Generation
// select Configuration: Release
// for Runtime Library -> select 'Multi-threaded (/MT)'

#include <iostream>

int main(int argc, char** argv) {
	if (argc == 2) {
		char c = argv[1][0];
		for (int i = 0; c != 0; i++) {
			c = argv[1][i];
			if (c == '/') std::cout << '\\';
			else if (c != NULL) std::cout << c;
			else return EXIT_SUCCESS;
		}
	}
	else if (argc > 2) {
		std::cout << "2bks error: please specify exactly one argument instead of " << argc - 1 << ".\ngiven arguments:\n";
		for (int i = 1; i < argc; i++) {
			std::cout << '\'';
			for (int n = 0; argv[i][n] != NULL; n++) std::cout << argv[i][n];
			std::cout << "'\n";
		}
		return EXIT_FAILURE;
	}
	return EXIT_SUCCESS;
}