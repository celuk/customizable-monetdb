#include <stdio.h>
#include "gdk_ssort.c"

int main(void) {
	printf("test\n");

	MergeState *ms;
	binarysort_any(1, 5, 2, ms);

	return 0;
}
