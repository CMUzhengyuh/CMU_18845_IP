# Makefile of Individual Project
# Andrew ID: zhengyuh
#

CC = gcc
CFLAGS = -Wall -O2
OBJS = csapp.o
LIBS = -lpthread

all:base starter

base:$(OBJS) base.o
	$(CC) $(CFLAGS) -o $@ $(OBJS) base.o $(LIBS)

starter:$(OBJS) starter.o
	$(CC) $(CFLAGS) -o $@ $(OBJS) starter.o $(LIBS)

%.o:%.c
	$(CC) -c $(CFLAGS) $< 

.PHONY:clean
clean:
	rm -f *.o base starter
