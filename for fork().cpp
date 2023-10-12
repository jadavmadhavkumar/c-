#include <iostream>
#include <unistd.h> // for fork()

int main()
{
    pid_t pid = fork(); // create a new process

    if (pid == -1) {
        std::cerr << "fork() failed!" << std::endl;
        return 1;
    }
    else if (pid == 0) {
        // child process
        std::cout << "Hello from child process!" << std::endl;
    }
    else {
        // parent process
        std::cout << "Hello from parent process!" << std::endl;
    }

    return 0;
}
