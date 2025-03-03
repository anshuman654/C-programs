TARGET=matrix_multiple

CFLAGS= -Wall -g

OBJS= hello.o bye.o

$(TARGET):$(OBJS)
	gcc $(CFLAGS) -o $(TARGET) $(OBJS)
%.o:%.c
	gcc $(CFLAGS) -c $<
	


