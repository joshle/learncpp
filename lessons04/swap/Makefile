build:
	make clear
	g++ swapfunc.cpp -c -o swapfunc.o
	g++ swapmain.cpp -c -o swapmain.o
	g++ swapmain.o swapfunc.o -o swap

lswap:
	make clear
	ar rcs libswap.a swapfunc.o
	g++ -L$$(pwd) -lswap swapmain.o -o swap2

share:
	make clear
	g++ swapmain.cpp -c -o swapmain.o
	g++ -shared -fPIC -c swapfunc.cpp
	g++ -shared -fPIC -o libswapfunc.so swapfunc.o
	g++ -L. -lswapfunc swapmain.o -o swap3
	./swap3

clear:
	rm -f *.o *.so *.a swap swap2 swap3