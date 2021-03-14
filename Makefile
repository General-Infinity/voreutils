CC = gcc

all:
	mkdir -p build
	gcc src/yes.c -Ofast -o build/yes
clean:
	rm -rf build
