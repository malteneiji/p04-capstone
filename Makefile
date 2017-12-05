all: find

find: find.o main.o
	g++ main.o find.o -o find
main.o: main.cpp
	g++ -c main.cpp
find.o: find.cpp
	g++ -c find.cpp
clean:
	rm *o
