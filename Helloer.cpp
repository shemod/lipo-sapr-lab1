#include "Helloer.h"

Helloer::Helloer(const string& aMessage)
{
	message = (std::string)aMessage;
}

Helloer::Helloer()
{
	message = (std::string)"";
}

string Helloer::printMessage()
{
	return (std::string) "" + message;
}