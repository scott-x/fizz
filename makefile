all: test_cmd test_reg test_time

test_cmd:
	g++ example/cmd.cpp -lfizz -o $@
test_reg:
	g++ example/reg.cpp -lfizz -o $@
test_time:
	g++ example/time.cpp -lfizz -o $@	
clean:
	rm -rf test_*