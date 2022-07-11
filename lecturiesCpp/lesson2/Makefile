all: my_prog
	./my_prog

my_prog: main.o column.o line.o
	g++ -o my_prog main.o line.o column.o Timer.o

main.o: main.cpp
	g++ -c main.cpp lesson2namespace.h

column.o: column.cpp Timer.cpp
	g++ -c column.cpp Timer.cpp

line.o: line.cpp Timer.cpp
	g++ -c line.cpp Timer.cpp

clean:.
	rm -rf *.o my_prog *.h.gch
