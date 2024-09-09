/*
 *  MyInit for CNUOS Practice
 *  
 *  Entrypoint
 * 
 */

#ifdef __linux__

/* ==============================================
 * main() function
 * MyInit starts
 * ==============================================
 */
int main (int argc, char* argv[], char* envp[]) {
    return 0;
}

#else

/*
 * Codes from this point describes fallback for non-Linux OSes
 * Keep in mind that this app must be built on Linux or suitable crosscompilers!
 */

#include <stdio.h>

int main (void) {
    puts("MyInit is only for Linux!");
    while (1);

    return 1;
}

#endif
