# Makefile of cgi-bin
#

CC = gcc
CFLAGS = -Wall -O2
INCLUDE = ../

all:starter

starter:starter.o
	$(CC) $(CFLAGS)  -o $@ $<

starter.o:starter.c
	$(CC) $(CFLAGS) -I$(INCLUDE) -c $<

.PHONY: clean
clean:
	rm -f starter starter.o	
