#预处理
process:
	g++ main.cpp -E -o test.i

#编译
compile:
	g++ test.i -S -o test.s

#汇编
compilation:
	g++ test.s -c -o test.o

#链接
link:
	g++ test.o -o test

#生成可执行文件

clean:
	rm -f test*