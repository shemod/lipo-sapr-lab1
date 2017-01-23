#ifndef tester_h
#define tester_h

#include <cppunit/extensions/TestFactoryRegistry.h>
#include <cppunit/ui/text/TextTestRunner.h>
#include <cppunit/extensions/HelperMacros.h>
#include "../Helloer.h"

class HelloerTester : public CppUnit::TestCase
{
	public:
		void CheckHelloerNormalMessage() 
		{
			Helloer helloer("message");
			CPPUNIT_ASSERT_EQUAL_MESSAGE("print message", helloer.printMessage(), (string)"message");
		};
		void CheckHelloerEmptyMessage() 
		{
			Helloer emptyHelloer;
		    CPPUNIT_ASSERT_EQUAL_MESSAGE("print empty message", emptyHelloer.printMessage(), (string)"");
		};
		
		CPPUNIT_TEST_SUITE( HelloerTester );
		CPPUNIT_TEST( CheckHelloerNormalMessage );
		CPPUNIT_TEST( CheckHelloerEmptyMessage );
		CPPUNIT_TEST_SUITE_END();
};

CPPUNIT_TEST_SUITE_REGISTRATION( HelloerTester );

#endif