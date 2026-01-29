# compilador
CC = cc

# flags de compilação
CFLAGS = -Wall -Wextra -O2

# bibliotecas (raylib)
LIBS = $(shell pkg-config --cflags --libs raylib)

# nome do executável
TARGET = poker

# arquivos fonte
SRC = main.c

# regra padrão (executada quando você roda só "make")
all:
	$(CC) $(SRC) -o $(TARGET) $(CFLAGS) $(LIBS)

# roda o programa
run: all
	./$(TARGET)

# limpa os arquivos gerados
clean:
	rm -f $(TARGET)

