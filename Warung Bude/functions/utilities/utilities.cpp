#include <stdio.h>
#include <time.h>

void detectOS() {
    #ifdef _WIN32
        #ifdef _WIN64
            printf("System: Windows 64 bit\n");
        #else
            printf("System: Windows 32 bit\n");
        #endif
    #elif TARGET_OS_MAC
        printf("System: MacOS\n");
    #elif __linux__
        printf("System: Linux\n");
    #elif __ANDROID__
        printf("System: Android\n");
    #elif __APPLE__
        printf("System: Apple\n");
    #endif
}

void outputLocalTime() {
    time_t lctime;
    time(&lctime);
    printf("%s", ctime(&lctime));
}

int strctr(char *str) {
    int ctr = 0;
    for (int i = 0; str[i] != '\0'; i++) ctr++;
    return ctr;
}

void delay() {
    for (int i = 0; i < 2e8; i++) ;
}

void cls() {
    for (int i = 0; i < 1e2; i++) puts("");
}