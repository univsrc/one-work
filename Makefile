# Debugging
CC = gcc
TARGET = a.out
OBJS = main.o

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) -o $@ $^

clean:
	rm *.o $(TARGET)
