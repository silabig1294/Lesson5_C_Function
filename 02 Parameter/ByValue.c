#include <stdio.h>

void ProcessData(int x) {
	x = x + 100;  
}

int main(int argc, char *argv[]) {
    int num = 1;
    printf ("Num-Before : %d\n", num);

    ProcessData(num);
    printf ("Num-After : %d", num);
	
	return 0;
}


