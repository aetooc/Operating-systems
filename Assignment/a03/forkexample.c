#include <stdlib.h> /* needed to define exit() */
#include <unistd.h> /* needed for fork() */
#include <stdio.h> /* needed for printf() */


int main(int argc, char **argv) {

fork();

fork();

fork();

sleep(10000);

exit(0);
}
