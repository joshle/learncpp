build:
	make clean
	g++ -shared -fPIC -c pycpp.cpp
	g++ -shared -fPIC -o libpycpp.so pycpp.o

run:
	python testcpp.py

clean:
	rm -f *.o *.so *.a