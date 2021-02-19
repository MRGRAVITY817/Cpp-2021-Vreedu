CC = g++
TARGET = main
OBJS = main.o client.o owner.o

all: $(TARGET)
	./$^

$(TARGET): $(OBJS)
	$(CC) -o $@ $^

clean:
	rm $(TARGET) $(OBJS)