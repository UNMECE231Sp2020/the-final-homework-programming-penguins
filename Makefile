# I removed the whole line with FNS = ...
# Also removed '$(FNS)'
MAIN = main.cpp

all:
	g++ $(MAIN) -o run_tests
clean:
	rm run_tests
