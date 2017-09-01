GTEST=/home/bulmaro/work/googletest/googletest

prime : prime.cpp prime.h
	g++ main.cpp prime.cpp -o prime

test :
	g++ tests.cpp prime.cpp \
		$(GTEST)/libgtest.a \
		-isystem $(GTEST)/include/ -pthread \
		 -o tests
	./tests
