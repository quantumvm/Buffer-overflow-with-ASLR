#include <stdio.h>

void vulnerable(){
	char overflowed[16];
	gets(overflowed);
}

int main(){
	vulnerable();
}
