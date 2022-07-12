all: my_prog
	./my_prog

my_prog: main.o
	g++ -o my_prog main.o 

main.o: main.cpp
	g++ -c main.cpp lesson2namespace.h



clean:.
	rm -rf *.o my_prog *.h.gch
