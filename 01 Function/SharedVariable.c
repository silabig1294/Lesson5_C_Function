#include <stdio.h>

int data = 100;

void ProcessData(int x) {
	printf("x from ProcessData : %d\n", x);
}

void ShowData(int x) {
	printf("x from ShowData : %d\n", x);
}

int main(int argc, char *argv[]) {
    ProcessData(data);
    ShowData(data);
		
	return 0;
}


