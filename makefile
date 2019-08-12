all: exec

run: exec
	./exec
	
exec: ponto.o circulo.o main.o
	gcc -o exec ponto.o circulo.o main.o -Wall -lm

main.o: main.c
	gcc -c main.c

circulo.o: circulo.c
	gcc -c circulo.c

ponto.o: ponto.c
	gcc -c ponto.c

clean:
	rm *.o exec