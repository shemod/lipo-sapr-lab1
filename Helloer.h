#ifndef helloer_h
#define helloer_h

#include <iostream>

using namespace std;

class Helloer {
	public:
	    Helloer();
	    Helloer(const string& aMessage);
		std::string printMessage();
	private:
		std::string message;
};

#endif