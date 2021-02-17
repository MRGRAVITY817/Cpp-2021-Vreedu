CC = g++
TARGET = main
OBJS = main.o hello.o new.o world.o

all: $(TARGET)
	./$^

$(TARGET): $(OBJS)
	$(CC) -o $@ $^

clean: 
	rm $(TARGET) $(OBJS)