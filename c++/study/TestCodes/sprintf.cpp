//
// Created by cyildiz2@na.jnj.com on 3/14/22.
//

#include <unistd.h>
#include <array>
#include <cstring>
#include <cstdio>

int main()
{
    pid_t self;
    std::array<char, 30> command;
    memset(&command, 0, sizeof(command));
    self = getpid();
    sprintf(command.data(), "aaaaaaaaaabbbbbbbbbbccccccccccdddddddddd%d", self);
    puts(command.data());
    return 0;
}