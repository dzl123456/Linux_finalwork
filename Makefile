main:main.o stack.o queue.o
	gcc main.o stack.o queue.o -o main
main.o:main.c
	gcc -c main.c
stack.o:stack.c
  gcc -c stack.c
queue.o:queue.c
  gcc -c queue.c

clean:
	rm main *.o
