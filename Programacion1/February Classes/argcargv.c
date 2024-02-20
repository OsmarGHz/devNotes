#include <stdio.h>
#define T 20

int main(int argc, char **argv){
    int i;
    for (i = 0; i < argc; i++)
    {
        printf("\nArgumentos %s", argv[i]);
    }
	return 0;
}
