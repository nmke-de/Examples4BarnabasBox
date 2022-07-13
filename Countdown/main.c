#include <unistd.h>
#include "../BarnabasBox/barnabas.h"
#include "../BarnabasBox/Itoa/itoa.h"

int main() {
	binit();
	int remaining = 15 * 60;
	for(; remaining > 0; remaining--) {
		bputs(itoa(remaining, 10));
		sleep(1);
		bwash();
	}
	bquit();
}
