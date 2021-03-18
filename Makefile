CC = gcc

all:
	mkdir -p build
	${CC} src/yes.c -Ofast -o build/yes
	${CC} src/true.c -O2 -o build/true
	${CC} src/false.c -O2 -o build/false
	${CC} src/touch.c -O2 -o build/touch
	${CC} src/whoami.c -O2 -o build/whoami
	${CC} src/cp.c -O2 -o build/cp
	${CC} src/cat.c -O2 -o build/cat
	${CC} src/rm.c -O2 -o build/rm
clean:
	rm -rf build
