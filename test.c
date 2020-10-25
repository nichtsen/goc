#include "test.h"
#define MAXBYTE 256 

//void main(void) {
//	char str[MAXBYTE] ;
//	str[0] = 'a';
//	str[1] = 'b';
//	str[2] = '\0';
//	int n = myprint(str);	
//	getchar();
//}
char buf[50];
char *myprint(char *str) {
	int n;
	n=sprintf(buf, "test.c: %s", str);
	return buf;
}
