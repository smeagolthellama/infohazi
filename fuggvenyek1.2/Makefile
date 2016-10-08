CPPFLAGS=-g
test : all
	echo 10 1 2 3 4 5 6 7 8 9 10 | ./all
all : main.o
	g++ -g -Wall -o $@ $<
pretty : main.cpp 
	astyle --style=1tbs -T -p -j -k1 $<
