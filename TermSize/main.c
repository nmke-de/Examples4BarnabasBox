#include "../BarnabasBox/barnabas.h"
#include "../BarnabasBox/Itoa/itoa.h"

int main(){
	char c;
	binit();
	int row = 0, col = 0, or = 0, oc = 0;
	bsize(&row, &col);
	bputs(itoa(row, 10));
	fputc(' ', stdout);
	bputs(itoa(col, 10));
	for(;;){
		bsize(&row, &col);
		if(row != or || col != oc){
			if(row == 1 && col < 5) break;
			or = row;
			oc = col;
			bwash();
			bputs(itoa(col, 10));
			bputc(' ');
			bputs(itoa(row, 10));
		}
	}
	bquit();
}
