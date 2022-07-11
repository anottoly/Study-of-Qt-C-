all: my_prog
	./my_prog

my_prog: main.o negative.o
	g++ -o my_prog main.o negative.o

main.o: main.cpp
	g++ -c main.cpp negative.h

negative.o: negative.cpp
	g++ -c negative.cpp

clean: 
	rm -rf *.o my_prog *.h.gch