



#include <stdio.h>
#include <io.h>

void redirectStdout(char const *filename){
    static int saved_stdout_no = -1;
    if(filename){
        if(saved_stdout_no == -1){
            saved_stdout_no = dup(fileno(stdout)); //函数用于复制一个现有的文件描述符，返回一个新的文件描述符，该描述符指向同一个文件或资源。
        }
        fflush(stdout);
        freopen(filename,"a",stdout);
    } else {
        if(saved_stdout_no != -1){
            fflush(stdout);
            dup2(saved_stdout_no, fileno(stdout)); //dup2() 函数与 dup() 类似，但它允许你指定新描述符的值。如果指定的新描述符已经打开，dup2() 会先关闭它，然后再复制。dup2() 会将 oldfd 复制到 newfd，使得 newfd 指向与 oldfd 相同的文件、管道、套接字等资源。
            close(saved_stdout_no);
            saved_stdout_no = -1;
        }
    }
}


int main(void) {
//    freopen("data/test_data_redirect.txt","a",stdout); //将stdout的内容写入data/test_data_redirect.txt（文件重定向）
//    puts("hello world");
//    fclose(stdout);
    puts("1");
    redirectStdout("data/test_data_redirect.txt");
    puts("2");
    redirectStdout(NULL);
    puts("3");
}