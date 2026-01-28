#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

#define MAX_FORK 30   // BATAS AMAN

int main() {
    pid_t pid;

    printf("Parent PID: %d\n", getpid());

    for (int i = 0; i < MAX_FORK; i++) {
        pid = fork();

        if (pid == 0) {
            // Child process
            sleep(30); // hidup, tapi tidak fork lagi
            exit(0);
        }
    }

    sleep(60); // parent hidup tanpa wait()
    return 0;
}
