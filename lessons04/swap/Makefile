export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:.

build:
	make clean
	g++ swapfunc.cpp -c -o swapfunc.o
	g++ swapmain.cpp -c -o swapmain.o
	g++ swapmain.o swapfunc.o -o swap
	./swap

static:
	make clean
	g++ swapfunc.cpp -c -o swapfunc.o
	g++ swapmain.cpp -c -o swapmain.o
	# ar rcs libswap.a swapfunc.o
	ar -rc swapfunc.a swapfunc.o
	g++ swapmain.o swapfunc.a -o swap2
	./swap2

share:
	make clean
	g++ swapfunc.cpp -shared -fPIC -o libswap.so
	g++ swapmain.cpp -L. -lswap -o swap3
	./swap3

clean:
	rm -f *.o *.so *.a swap swap2 swap3
