CXX=g++
CXXFLAGS=
LDFLAGS=-lstdc++

.PHONY: all
all: test

test: test.o stl_helpers/src/std_sprintf.o

.PHONY: clean
clean:
	-rm *.o test
