build:
	make clear
	g++ -shared -fPIC -c pycpp.cpp
	g++ -shared -fPIC -o libpycpp.so pycpp.o

run:
	python testcpp.py

clear:
	rm -f *.o *.so *.a