

examples: BarnabasBox Counter TermSize Hello

BarnabasBox: BarnabasBox/libbarnabas.a

Counter: Counter/main

TermSize: TermSize/main

Hello: Hello/main

BarnabasBox/libbarnabas.a:
	make -C BarnabasBox -f Makefile

Counter/main: Counter/main.c
	make -C Counter -f Makefile

TermSize/main: TermSize/main.c
	make -C TermSize -f Makefile

TermSize/main: Hello/main.c
	make -C Hello -f Makefile

clean:
	rm -f */main
	rm -f */*.o
	make -C BarnabasBox -f Makefile clean

all: examples clean

