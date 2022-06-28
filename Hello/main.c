#include "../BarnabasBox/barnabas.h"

int main() {
	binit();
	bputs("Hello, World!\n");
	bputc('\n');
	bputs("Press any key to quit ...");
	fgetc(stdin);
	bquit();
	return 0;
}
