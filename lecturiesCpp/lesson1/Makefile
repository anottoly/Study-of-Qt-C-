all: my_prog
	./my_prog

my_prog: main.o negative.o
	g++ -o my_prog main.o negative.o

main.o: main.cpp negative.h
	g++ -c main.cpp negative.h

negative.o: negative.cpp negative.h
	g++ -c negative.cpp negative.h

clean: 
	rm -rf *.o my_prog *.h.gch