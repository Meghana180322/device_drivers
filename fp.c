#include <stdio.h>

struct cal{
    int (*add)(int, int);
    int (*sub)(int, int);
};

int add_fun(int x, int y){
    return x + y;
}

int sub_fun(int x, int y){
    return x - y;
}

int main(){
    int res1, res2;
    struct cal a;
    a.add = add_fun;
    a.sub = sub_fun;

    res1 = a.add(3, 4);
    res2 = a.sub(6, 3);

    printf("%d\n", res1);
    printf("%d", res2);

    return 0;
}

