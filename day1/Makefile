App:App.c add.o sub.o mult.o Arith.h
	gcc App.c add.c sub.c mult.c  -o App
add.o:add.c
	gcc -c add.c -o add.o
sub.o:sub.c
	gicc -c sub.c -o sub.o
mult.o:mult.c
	gcc -c mult.c -o mult.o

clean:
	rm *.o
