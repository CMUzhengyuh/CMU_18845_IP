# Makefile of Individual Project
# Andrew ID: zhengyuh
#

CC = gcc
CFLAGS = -Wall -O2
OBJS = csapp.o
LIBS = -lpthread

all:tiny base starter concurrent optimize sbuf

tiny:$(OBJS) tiny.o
	$(CC) $(CFLAGS) -o $@ $(OBJS) tiny.o $(LIBS)

base:$(OBJS) base.o
	$(CC) $(CFLAGS) -o $@ $(OBJS) base.o $(LIBS)

concurrent:$(OBJS) concurrent.o
	$(CC) $(CFLAGS) -o $@ $(OBJS) concurrent.o $(LIBS)

optimize:$(OBJS) sbuf.o optimize.o
	$(CC) $(CFLAGS) -o $@ $(OBJS) sbuf.o optimize.o $(LIBS)

starter:
	cd cgi-bin && $(MAKE) all

%.o:%.c
	$(CC) -c $(CFLAGS) $< 

.PHONY:clean
clean:
	rm -f *.o tiny base starter concurrent optimize sbuf
	cd cgi-bin && $(MAKE) clean

