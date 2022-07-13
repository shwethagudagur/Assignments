CC = g++
LFLAGS = -o
CFLAGS = -c -g -Wall -Werror
INC = ./inc
IFLAG = -I$(INC)
BIN = ./bin
OBJ = ./obj
SRC = ./src

all: emp1

emp1: $(OBJ)/emp1.o
	$(CC) $(LFLAGS) $(BIN)/emp1 $(OBJ)/emp1.o

$(OBJ)/emp1.o:$(SRC)/emp1.cpp
	$(CC) $(CFLAGS)  $(IFLAG) $(SRC)/emp1.cpp
	mv *.o $(OBJ)

clean:
	rm -f a.out emp1
	rm -f *.o
	rm -f $(OBJ)/*.o
	
