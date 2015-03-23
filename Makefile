#Makefile for hr_test

CC=gcc
MAKE=make
MODULE=ascending_random

modules:
	echo "starting to compile module "$(MODULE)
	$(CC) -g ascending_random.c -o $(MODULE)

clean:
	rm -f $(MODULE)
	rm -f $(MODULE).txt

rebuild:
	make clean
	make modules
