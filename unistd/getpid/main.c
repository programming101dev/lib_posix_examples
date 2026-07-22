#include <p101_env/env.h>
#include <p101_error/error.h>
#include <p101_posix/p101_unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>

int main(void)
{
    struct p101_error *error;
    struct p101_env   *env;
    pid_t              pid;

    error = p101_error_create(false);
    env   = p101_env_create(error, NULL);
    pid   = p101_getpid(env);
    printf("p101_getpid() = %ld\n", (long)pid);
    p101_env_destroy(env);
    p101_error_destroy(error);

    return EXIT_SUCCESS;
}
