CC = gcc

all:
	mkdir -p build
	gcc src/yes.c -Ofast -o build/yes
	gcc src/true.c -O2 -o build/true
	gcc src/false.c -O2 -o build/false
	gcc src/touch.c -O2 -o build/touch
clean:
	rm -rf build
