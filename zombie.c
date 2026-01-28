#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
    pid_t pid = fork();

    if (pid > 0) {
        // Parent process
        printf("Parent PID: %d\n", getpid());
        sleep(60); // sengaja tidak wait()
    } else if (pid == 0) {
        // Child process
        printf("Child PID: %d\n", getpid());
        exit(0); // child langsung mati
    } else {
        perror("fork failed");
    }

    return 0;
}
