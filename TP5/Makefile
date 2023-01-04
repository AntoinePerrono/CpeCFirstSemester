main : main.o operator.o fichier.o
	gcc -o main main.o fichier.o operator.o

operator.o : src/operator.c
	gcc -c -Wall -Wextra src/operator.c -o operator.o

fichier.o : src/fichier.c
	gcc -c -Wall -Wextra src/fichier.c -o fichier.o

main.o : src/main.c src/operator.h src/fichier.h
	gcc -c -Wall -Wextra src/main.c -o main.o 

clean :
	rm -rf *.o