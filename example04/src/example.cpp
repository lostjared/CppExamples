
#include "example.h"

void print(const char *src) {
	std::cout << src;
}

Example::Example() {
	say("Object created...\n");
}
void Example::say(const char *src) {
	print(src);
}

