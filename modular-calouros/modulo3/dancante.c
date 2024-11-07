#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define MAX_LEN 50

int main() {
	char sentence[MAX_LEN + 1];

	while (fgets(sentence, sizeof(sentence), stdin)) {
    	sentence[strcspn(sentence, "\n")] = '\0';

    	int upper = 1;

    	for (int i = 0; sentence[i] != '\0'; i++) {
        	if (sentence[i] != ' ') {
            	if (upper==1) {
                	sentence[i] = toupper(sentence[i]);
            	} else {
                	sentence[i] = tolower(sentence[i]);
            	}
            	upper = !upper;
        	}
    	}

    	printf("%s\n", sentence);
	}

	return 0;
}
