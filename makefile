.DEFAULT_GOAL := calc
calc: src/main.c src/deposit.c
	mkdir -p build/src && mkdir build && gcc -Wall -Werror -c src/main.c -o build/src/main.o && gcc -Wall -Werror -c src/deposit.c -o build/src/deposit.o && gcc build/src/main.o build/src/deposit.o -o bin/deposit-calc
clean: build/deposit.o build/main.o
	rm build/src/deposit.o build/src/main.o
testing:
	gcc -I ctest -I src src/deposit.c test/main.c test/deposit_test.c test/check_test.c -o  bin/test