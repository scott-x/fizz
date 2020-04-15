all: time.o cmd.o dylib
time.o:
	g++ -c t/time.cpp -o time.o
cmd.o:
	g++ -c cmd/cmd.cpp -o cmd.o
reg.o:
	g++ -c reg/reg.cpp -o reg.o	
dylib: time.o cmd.o reg.o
	g++ time.o cmd.o reg.o -dynamiclib -o libtest.dylib	
build:
	clang++ -std=c++11 main.cpp -L ./ -ltest	
clean:
	rm -rf *.o	
	rm -rf *.out
	rm -rf *.dylib
