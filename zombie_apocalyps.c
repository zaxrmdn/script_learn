#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define ZOMBIE_COUNT 100   // BATASI JUMLAH

int main() {
    pid_t pid;

    printf("Parent PID: %d\n", getpid());

    for (int i = 0; i < ZOMBIE_COUNT; i++) {
        pid = fork();

        if (pid == 0) {
            // Child process
            exit(0); // langsung mati → jadi zombie
        }
    }

    // Parent sengaja hidup lama TANPA wait()
    printf("Created %d zombie processes\n", ZOMBIE_COUNT);
    sleep(120); // waktu cukup buat observasi

    return 0;
}
