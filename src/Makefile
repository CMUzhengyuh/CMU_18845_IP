# Makefile of Individual Project
# Andrew ID: zhengyuh
#

CC = gcc
CFLAGS = -Wall -O2
OBJS = csapp.o
LIBS = -lpthread

all:tiny mp starter mt tp dl

tiny:$(OBJS) tiny.o
	$(CC) $(CFLAGS) -o $@ $(OBJS) tiny.o $(LIBS)

mp:$(OBJS) mp.o
	$(CC) $(CFLAGS) -o $@ $(OBJS) mp.o $(LIBS)

mt:$(OBJS) mt.o
	$(CC) $(CFLAGS) -o $@ $(OBJS) mt.o $(LIBS)

tp:$(OBJS) sbuf.o tp.o
	$(CC) $(CFLAGS) -o $@ $(OBJS) sbuf.o tp.o $(LIBS)

dl:$(OBJS) sbuf.o dl.o
	$(CC) $(CFLAGS) -o $@ $(OBJS) sbuf.o dl.o $(LIBS) -ldl

starter:
	cd cgi-bin && $(MAKE) all

%.o:%.c
	$(CC) -c $(CFLAGS) $< 

.PHONY:clean
clean:
	rm -f *.o starter tiny mp mt tp dl sbuf
	cd cgi-bin && $(MAKE) clean

