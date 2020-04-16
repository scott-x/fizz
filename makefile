all: time.o cmd.o str.o reg.o dylib build
time.o:
	g++ -c t/time.cpp -o time.o
cmd.o:
	g++ -c cmd/cmd.cpp -o cmd.o
reg.o:
	g++ -c reg/reg.cpp -o reg.o	
str.o:
	clang++ -std=c++11 -c str/str.cpp -o str.o	
dylib: time.o cmd.o reg.o str.o
	g++ time.o cmd.o reg.o str.o -dynamiclib -o libtest.dylib	
build:
	clang++ -std=c++11 main.cpp -L ./ -ltest	
clean:
	rm -rf *.o	
	rm -rf *.out
	rm -rf *.dylib
