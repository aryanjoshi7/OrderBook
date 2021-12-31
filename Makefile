output: main.o Limit.o Book.o Order.o
	g++ Limit.o Book.o Order.o -o output
main.o: main.cpp
	g++ -c main.cpp
Limit.o: Limit.h Limit.cpp
	g++ -c
Order.o: Order.h Order.cpp
	g++ -c
Book.o: Book.h Book.cpp
	g++ -c
