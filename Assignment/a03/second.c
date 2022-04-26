/* fork: create a new process */
#include <stdlib.h> /* needed to define exit() */
#include <unistd.h> /* needed for fork() */
#include <sys/wait.h> /* needed for wait() */
#include <stdio.h> /* needed for printf() */
int main(int argc, char **argv) {
int pid; /* process ID */
pid = fork();
if (pid == -1) {
perror("Error");
}

if (pid == 0)
 {
 printf ("\nIn Child!\nChild's PID: %d\n", getpid());
}
 else
 {
 printf ("\nParent!\nParent's PID: %d\n", getpid());
 printf ("Child's PID: %d\n", pid);

 }

sleep(1);
exit(0);
}
