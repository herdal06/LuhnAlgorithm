hepsi: derle calistir

derle:
	gcc -I ./include/ -o ./lib/Sayi.o -c ./src/Sayi.c
	gcc -I ./include/ -o ./bin/test ./lib/Sayi.o ./src/Main.c
	
calistir:
	./bin/test