CC = gcc
CFLAGS = -W -Wall
TARGET = product
DTARGET = product_debug
OBJECTS = main.c product.o manager.o

all:$(TARGET)
$(TARGET) : $(OBJECTS)
	$(CC) $(CFLAGS) -o $@ $^
$(DTARGET) : $(OBJECTS)
	$(CC) $(CFAGS) -DDEBUG -o $@ $^
clean:
	rm *.o $(TARGET) $(DTARGET)
