CC     = gcc
RM     = rm -f
OBJS   = main.o

LIBS   =
CFLAGS =

.PHONY: bin/Release/Tugas\ no\ 3.exe clean clean-after

all: bin/Release/Tugas\ no\ 3.exe

clean:
	$(RM) $(OBJS) bin/Release/Tugas\ no\ 3.exe

clean-after:
	$(RM) $(OBJS)

bin/Release/Tugas\ no\ 3.exe: $(OBJS)
	$(CC) -O2 -s -Wall -o '$@' $(OBJS) $(LIBS)

main.o: main.c
	$(CC) -O2 -s -Wall -c $< -o $@ $(CFLAGS)

