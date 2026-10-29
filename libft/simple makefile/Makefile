# -*- MakeFile -*-

#target : dependencies
#action

all : abcd

abcd : main.o a.o b.o c.o d.o changetonum.o
	cc main.o a.o b.o c.o d.o changetonum.o -o abcd

changetonum.o : changetonum.c
	cc -c changetonum.c
main.o : main.c
	cc -c main.c 
a.o : a.c g.h
	cc -c a.c
b.o : b.c g.h
	cc -c b.c
c.o : c.c g.h
	cc -c c.c
d.o : c.c g.h
	cc -c d.c

clear : 
	rm *.o abcd
