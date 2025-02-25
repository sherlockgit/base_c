//
// Created by Shorlock on 2025/2/16.
//


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {

    char str[] = "C, 1972; C++,1983; Java, 1995; Rust, 2010; Kotlin, 2011";

    typedef struct {
        char *name;
        int year;
    } Language;

    const char *language_break = ";";
    const char *field_break = ",";

    int language_capacity = 3;
    int language_size = 0;

    Language *languages = malloc(sizeof(Language) * language_capacity);
    if (!languages) {
        abort();
    }

    char *next = strtok(str, field_break);
    while (next) {
        Language language;
        language.name = next;

        //字符串分割
        next = strtok(NULL, language_break);
        if (next) {
            language.year = atoi(next);
            if (language_size + 1 >= language_capacity) {
                language_capacity *= 2;
                languages = realloc(languages, sizeof(Language) * language_capacity);
                if (!languages) {
                    abort();
                }
            }
            languages[language_size++] = language;
            next = strtok(NULL, field_break);
        }
    }

    printf("language_size %d\n", language_size);
    printf("language_capacity %d\n", language_capacity);

    for (int i = 0; i < language_size; i++) {
        printf("languages[%d]:name:%s;year:%d\n", i,languages[i].name,languages[i].year);
    }
    free(languages);
    return 0;
}