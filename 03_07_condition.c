#include <stdio.h>
#include <stdbool.h>

int main(void) {
    //bool
    //true 1 (一切的非0值) false 0
    _Bool flag = true;
    flag = 10;//无法变为10 编译的手段强制将这个值只能为1或者0
    printf("flag %d\n", flag);
    bool flag1 = false;
    printf("flag1 %d\n", flag1);

    //if...else
    if (flag) {
        printf("true\n");
    }else {
        printf("false\n");
    }

    //三元运算符
    int is_open = flag ? 1 : 0;
    printf("is_open %d\n", is_open);

    //switch
    switch (is_open) {
        case 0:
            printf("switch true\n");
            break;
        case 1:
            printf("switch false\n");
            break;
    }

    printf("Hello, World!\n");
    return 0;
}
