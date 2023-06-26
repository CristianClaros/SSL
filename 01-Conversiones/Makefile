BIN = conversionTest
OBJ = conversionTest.o conversion.o tablasDeConversion.o
CC = gcc
RM = rm -rf
CFLAGS = -std=c99 -Wall
SALIDA = salida.txt


$(BIN) : $(OBJ)
	$(CC) $(OBJ) -o $(BIN) $(CFLAGS)
conversion.o : conversion.c conversion.h
	$(CC) -c conversion.c -o conversion.o $(CFLAGS)
conversionTest.o : conversionTest.c conversion.h
	$(CC) -c conversionTest.c -o conversionTest.o $(CFLAGS)
tablasDeConversion.o : tablasDeConversion.c conversion.h
	$(CC) -c tablasDeConversion.c -o tablasDeConversion.o $(CFLAGS)

.PHONY: clean 
clean : 
	$(RM) $(OBJ) $(BIN)