//
// Created by Shorlock on 2025/2/16.
//


#include <ctype.h>
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <wchar.h>

int main(void) {
    printf("iswalpha: %d\n",iswalpha('a'));
    printf("iswdigit: %d\n",iswdigit('1'));

    wchar_t *wc = L"你好 Hello";
    size_t len = wcslen(wc);
    printf("len: %d\n",len);

    wchar_t src[] =  L"Hello World";
    wchar_t *dest = malloc(11 * sizeof(wchar_t));
    wmemset(dest, 0, 11);
    wmemcpy(dest, src, 11);
    wprintf(dest);
    free(dest);


    char *new_locale = setlocale(LC_ALL, "zh_CN.utf8");
    if (new_locale) {
        printf("setlocale returned %p\n", new_locale);
    }

    char src2[] = "你好";
    wchar_t wsrc2[10];
    mbstowcs(wsrc2, src2, 10);
    wprintf(L"%ls\n", wsrc2);


}