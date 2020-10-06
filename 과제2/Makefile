cc=gcc -g
target = exe
objects = main.o count.o print_case.o readtestcase.o

$(target): $(objects)
	$(cc) -o $(target) $(objects)

$(objects) : Header.h

.PHONY : clean
clean :
	rm $(target) $(objects)
