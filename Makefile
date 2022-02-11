# Makefile of Individual Project
# Andrew ID: zhengyuh
#

CC = gcc
CFLAGS = -Wall -O2
OBJS = csapp.o
LIBS = -lpthread

all:tiny base starter

tiny:$(OBJS) tiny.o
	$(CC) $(CFLAGS) -o $@ $(OBJS) tiny.o $(LIBS)

base:$(OBJS) base.o
	$(CC) $(CFLAGS) -o $@ $(OBJS) base.o $(LIBS)

starter:
	cd cgi-bin && $(MAKE) all

%.o:%.c
	$(CC) -c $(CFLAGS) $< 

.PHONY:clean
clean:
	rm -f *.o tiny base starter
	cd cgi-bin && $(MAKE) clean

