

examples: BarnabasBox Counter TermSize

BarnabasBox: BarnabasBox/libbarnabas.a

Counter: Counter/main

TermSize: TermSize/main

BarnabasBox/libbarnabas.a:
	make -C BarnabasBox -f Makefile

Counter/main: Counter/main.c
	make -C Counter -f Makefile

TermSize/main: TermSize/main.c
	make -C TermSize -f Makefile

clean:
	rm -f */main
	rm -f */*.o
	make -C BarnabasBox -f Makefile clean

all: examples clean

