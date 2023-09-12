#include <stdio.h>

#include <stringprep.h>

int
main(void) {
	const char *found_version = NULL;

	found_version = stringprep_check_version(STRINGPREP_VERSION);

	if(found_version != NULL) {
		printf("Found stringprep version: %s\n", found_version);
		return 0;
	} else {
		printf("stringprep_check_version() failed:\n"
		       "Header file incompatible with shared library.\n");
		return 1;
	}
}
