GTEST=/home/bulmaro/work/googletest/googletest

add.o : add.cc add.h
	g++ -c add.cc -o add.o
		
entry.o : entry.cc add.h
	g++ -c entry.cc -o entry.o

add : add.o entry.o
	g++ -o add add.o entry.o

tests : add.o
	g++ test_add.cc add.o \
		$(GTEST)/libgtest.a \
		-isystem $(GTEST)/include/ -pthread \
		-o tests
	./tests

