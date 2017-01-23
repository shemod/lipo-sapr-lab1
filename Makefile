# compiler
CC=g++
CFLAGS=-c
# CppUnit
CPPUNIT=-I$CPPUNIT_HOME/include -L$CPPUNIT_HOME/lib -lcppunit
# binaries
OFILE=helloer
TEST_OFILE=tests
# sources
TEST_SRC=test

all: $(OFILE)

test: $(TEST_OFILE)

$(OFILE): Helloer.o main.o
	$(CC) Helloer.o main.o -o $(OFILE)

$(TEST_OFILE): Helloer.o tests.o
	$(CC) Helloer.o tests.o $(CPPUNIT) -o $(TEST_OFILE)

Helloer.o: Helloer.cpp
	$(CC) $(CFLAGS) Helloer.cpp
	
main.o: main.cpp
	$(CC) $(CFLAGS) main.cpp

tests.o: $(TEST_SRC)/main.cpp
	$(CC) $(CFLAGS) $(TEST_SRC)/main.cpp -o tests.o

clean:
	rm -rf *.o $(OFILE) $(TEST_OFILE) Helloer.o main.o test.o