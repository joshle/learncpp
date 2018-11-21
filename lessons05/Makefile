# export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:/usr/local/lib:.

build:
	make clean
	# g++ bamutil.cpp -c -o bamutil.o
	g++ main.cpp bamutil.cpp -lhts -o bamutil
	./bamutil

clean:
	rm -f *.o *.so *.a bamutil
