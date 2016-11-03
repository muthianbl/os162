# (c) 2011-2016 Rahmat M. Samik-Ibrahim -- This is free software
# Feel free to copy and/or modify and/or distribute it, 
# provided this notice, and the copyright notice, are preserved. 
#
# REV01 Wed Nov  2 14:21:24 WIB 2016
# REV00 Xxx Sep 30 XX:XX:XX UTC 2015
# START Xxx Mar 30 02:13:01 UTC 2011

CC=gcc
 
EXECS= \
	01-thread    \
	03-readwrite \
	05-balap     \


OBJ= \
	01-thread.o    \
	03-readwrite.o \
	05-balap.o     \
	99-myutils.o   \


all:	$(EXECS)


01-thread: 01-thread.o 99-myutils.o
	gcc -std=gnu99 01-thread.o 99-myutils.o -pthread -lrt -o 01-thread 

01-thread.o: 01-thread.c 99-myutils.h
	gcc -c -std=gnu99 01-thread.c

03-readwrite: 03-readwrite.o 99-myutils.o
	gcc -std=gnu99 03-readwrite.o 99-myutils.o -pthread -lrt -o 03-readwrite 
03-readwrite.o: 03-readwrite.c 99-myutils.h
	gcc -c -std=gnu99 03-readwrite.c

05-balap: 05-balap.o 99-myutils.o
	gcc -std=gnu99 05-balap.o 99-myutils.o -pthread -lrt -o 05-balap 

05-balap.o: 05-balap.c 99-myutils.h
	gcc -c -std=gnu99 05-balap.c

99-myutils.o: 99-myutils.c 99-myutils.h
	gcc -c -std=gnu99 99-myutils.c

clean:
	rm -f $(EXECS)
	rm -f $(OBJ)
