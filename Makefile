main: main.o funcs.o
	g++ -o main main.o funcs.o

tests: tests.o caesar.o vigenere.o decrypt.o
	g++ -o tests tests.o caesar.o vigenere.o decrypt.o

test-ascii: test-ascii.o
	g++ -o test-ascii test-ascii.o

test-ascii.o: test-ascii.cpp
	g++ -c test-ascii.cpp 

caesar.o: caesar.cpp caesar.h
	g++ -c caesar.cpp

vigenere.o: vigenere.cpp vigenere.h
	g++ -c vigenere.cpp

decrypt.o: decrypt.cpp decrypt.h 
	g++ -c decrypt.cpp

funcs.o: funcs.cpp funcs.h
	g++ -c funcs.cpp

main.o: main.cpp funcs.h
	g++ -c main.cpp

tests.o: tests.cpp doctest.h caesar.h vigenere.h decrypt.h 
	g++ -std=c++11 -c tests.cpp

clean:
	rm -f main.o funcs.o tests.o test-ascii.o test-ascii main tests caesar.o vigenere.o decrypt.o funcs.o

