all: time.o cmd.o dylib
time.o:
	g++ -c t/time.cpp -o time.o
cmd.o:
	g++ -c cmd/cmd.cpp -o cmd.o
dylib: time.o cmd.o
	g++ time.o cmd.o -dynamiclib -o libtest.dylib	
build:
	clang++ -std=c++11 main.cpp -L ./ -ltest	
clean:
	rm -rf *.o	
	rm -rf *.out
	rm -rf *.dylib
