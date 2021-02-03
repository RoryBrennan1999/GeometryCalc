# Makefile for Assignment 2
# Rory Brennan 18237606

# Use vpath to find .c/.h files in subdirectories
vpath %.c 3DShapes:2DShapes
vpath %.h 3DShapes:2DShapes

x := mathmain.c # make file variable 

# Rule for main application and execution
mathmain: 2dim.o 3dim.o $(x)
	gcc -Wall -ggdb -o $@ $^
	./mathmain

# Rule for 2 dim application
2dim.o: 2dim.c 2dim.h
	gcc -Wall -ggdb -c $<

# Rule for 3 dim application
3dim.o: 3dim.c 3dim.h
	gcc -Wall -ggdb -c $<

# Cleaning up Makefile
clean:
	 -rm *.o *# *~ mathmain

# Rule for execution
run:
	./mathmain
