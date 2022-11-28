main : bin/main.o bin/operator.o bin/fichier.o
	gcc -o main bin/main.o bin/fichier.o bin/operator.o

bin/operator.o : src/operator.c
	gcc -c -Wall -Wextra src/operator.c -o bin/operator.o

bin/fichier.o : src/fichier.c
	gcc -c -Wall -Wextra src/fichier.c -o bin/fichier.o

bin/main.o : src/main.c src/operator.h src/fichier.h
	gcc -c -Wall -Wextra src/main.c -o bin/main.o 

clean :
	rm -rf *.o