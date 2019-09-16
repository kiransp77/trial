Build.exe:big.o parandrome.o main.o
	gcc -o Build.exe big.o parandrome.o main.o
main.o:main.c
big.o:big.c
	gcc -c big.c
parandrome.o:parandrome.c
	gcc -c parandrome.c

