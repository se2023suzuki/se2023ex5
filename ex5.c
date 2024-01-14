#include <stdio.h>

int main() {
    printf("hello\n");
    return 0;
}

#include <stdio.h>

int main() {
    char str[] = "hello";
    printf("%s\n", str);
    return 0;
}

#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "hello";
    printf("String: %s\n", str);
    printf("Length: %lu\n", strlen(str));
    return 0;
}