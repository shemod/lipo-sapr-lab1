#include <cstdlib>
#include <iostream>
#include "Helloer.h"

int main(int argc, char* argv[]) {
	// If argument count is 2 -- print message
	if (argc == 2) {
		Helloer hello(argv[1]);
		std::cout << hello.printMessage() << std::endl;
	}
	// If argument count is 1 -- print empty message
	else if (argc == 1) {
		Helloer emptyHello;
		std::cout << emptyHello.printMessage() << std::endl;
	}
}