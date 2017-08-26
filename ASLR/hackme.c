#include <stdio.h>
#include <stdlib.h>

void jumpesp() {
	__asm__("jmp *%esp");
}

void copy(char *arg) {
	char buf[1000];
	memcpy(buf, arg, strlen(arg));
}

int main(int argc, char **argv) {
	if (argc>1) {
		copy(argv[1]);
	}
	return 0;
}
