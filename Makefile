all: main.o
	g++ main.o -o run_tests

main.o: main.cpp GeneralList.hpp GeneralStack.hpp GeneralQueue.hpp
	g++ -c main.cpp

clean:
	rm *.o
	rm run_tests
