#Makefile for hr_test

CC=gcc
MAKE=make
<<<<<<< HEAD
MODULE=ascending_random

modules:
	echo "starting to compile module: "$(MODULE)
	$(CC) -g ascending_random.c -o $(MODULE)
	echo "compile module: "$(MODULE)" done"
=======
MODULE=hr_test

modules:
	echo "start to compile module: "$(MODULE)
	$(CC) -g hr_test.c -lrt -o $(MODULE)
>>>>>>> 2b03377e2f074248ae02ce7accea995dd5cd0500

clean:
	rm -f $(MODULE)
	rm -f $(MODULE).txt

rebuild:
	make clean
	make modules
