all: time dylib
time:
	g++ -c t/time.cpp
dylib: time.o
	g++ time.o -dynamiclib -o libtest.dylib	
build:
	clang++ -std=c++11 main.cpp -L ./ -ltest	
clean:
	rm -rf *.o	
	rm -rf *.out
	rm -rf *.dylib
