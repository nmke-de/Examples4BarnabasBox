
LIBC = /usr/lib/libc.a
compile = $(CC) -c -o main.o main.c
link = ld -static -s -z norelro -z noseparate-code -o main main.o ../BarnabasBox/libbarnabas.a $(LIBC) 2>/dev/null

main: main.c ../BarnabasBox/libbarnabas.a $(LIBC)
	$(compile)
	$(link)

