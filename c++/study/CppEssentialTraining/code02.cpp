//
// Created by cyildiz2@na.jnj.com on 3/9/22.
//

#include <cstdio>

class S{
public:
    int static_value(){
        static int x = 7;
        return ++x;
    }
};

int func(){
    static int x = 7;
    return ++x;
}

int main(){
    int i = func();
    i = func();
    i = func();
    printf("The integer is %d\n", i);
    return (0);
}

//Another Example
//int main(){
//    S s1;
//    S s2;
//    S s3;
//    printf("The integer is %d\n", s1.static_value());
//    printf("The integer is %d\n", s2.static_value());
//    printf("The integer is %d\n", s3.static_value());
//    return (0);
//}