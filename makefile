obj_files := cmd.o fs.o reg.o time.o str.o

all: $(obj_files) dylib

cmd.o:
	g++ -c cmd/cmd.cpp -o $@
fs.o:
	g++ -c fs/fs.cpp -o $@
reg.o:
	g++ -c reg/reg.cpp -o $@
str.o:
	clang++ -std=c++11 -c str/str.cpp -o $@
time.o:
	g++ -c t/time.cpp -o $@
dylib: 
	g++ *.o -dynamiclib -o libtest.dylib	
build:
	clang++ -std=c++11 main.cpp -L ./ -ltest	
clean:
	rm -rf *.o	
	rm -rf *.out
	rm -rf *.dylib
