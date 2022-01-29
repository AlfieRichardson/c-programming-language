#include <stdio.h>

/* an unknown escape sequence warning is thrown by the compiler.
	gcc will just remove the backslash, leaving the character 
	('z' in this case) in the final string*/
int main() {
	printf("hello,\z world\n");
}
