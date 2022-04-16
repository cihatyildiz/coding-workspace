//
// Created by cyildiz2@na.jnj.com on 3/11/22.
//

#include <cstdio>

int main(){
    int x = 5;
    int y = 42;

    const char * s = x < y ? "yes" : "no";
    const char * q = x > y ? "yes" : "no";
    puts(s);
    puts(q);
    return (0);
}