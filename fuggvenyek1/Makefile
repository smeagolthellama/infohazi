all : main.o
	g++ -o $@ $<
pretty : main.cpp 
	astyle --style=1tbs -T -p -j -k1 $<
