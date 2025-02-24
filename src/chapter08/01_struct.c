//
// Created by Shorlock on 2025/2/16.
//

#include <stdio.h>


int main(void) {

    //非匿名结构体，可重复使用
    struct Student {
        char name[10];
        int age;
    };

    //初始化结构体
    struct Student student = {.name = "John", .age = 20};

    printf("student.name = %s\n", student.name);
    printf("student.age = %d\n", student.age);

    //修改结构体字段值
    student.age = 10;

    printf("student.name = %s\n", student.name);
    printf("student.age = %d\n", student.age);

    //结构体指针
    struct Student *student_ptr = &student;

    //结构体的内存占用情况
    printf("sizeof(student) = %d\n", sizeof(student));
    printf("sizeof(student) = %d\n", sizeof(struct Student));

    //别名简化
    typedef struct Student Student;
    Student student_typedef;

    //若通过指针访问结构体数据需要用->（成员选择运算符）访问
    printf("student.name = %s\n", student_ptr->name);

    //匿名结构体，多用于只需要使用一次
    struct {
        char name[20];
        int age;
    } student1;

    //别名简化
    typedef struct Student2{
        char name[20];
        int age;
    } Student2;

    typedef struct Room {
        char name[20];
        int num;
    } Room;

    //多重结构体
    typedef struct Student3 {
        char name[20];
        int age;
        Room room;
        struct {
            int extra1;
            char extra2[20];
        } extra;
        struct Student3 *student3_ptr;
    } Student3;

    return 0;


}