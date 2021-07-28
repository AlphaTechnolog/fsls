CC=g++

fsls: fsls.o
	${CC} fsls.o -o fsls

fsls.o: fsls.cpp
	${CC} -c fsls.cpp -o fsls.o
