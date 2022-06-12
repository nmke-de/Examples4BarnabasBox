#include <stdio.h>
#include "../BarnabasBox/Itoa/itoa.h"
#include "../BarnabasBox/barnabas.h"

int main(){
	unsigned acc = 0, base = 10;
	char c;
	binit();
	bputs(itoa(acc, base));
	while((c = fgetc(stdin)) != 'q'){
		switch(c){
			case '+':
				++acc;
				break;
			case '-':
				if (acc > 0) --acc;
				break;
			case '*':
				if (base < 16) ++base;
				break;
			case '_':
				if (base > 2) --base;
				break;
			default:
				continue;
		}
		bwash();
		bputs(itoa(acc, base));
	}
	bquit();
}
