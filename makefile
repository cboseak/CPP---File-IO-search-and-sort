
PROGS := lab6

all: $(PROGS)



lab6: main.cpp fileManip.cpp fileManip.h
	g++ -g main.cpp fileManip.cpp fileManip.h -o lab6


clean:
	rm -f $(PROGS) *.o *~
