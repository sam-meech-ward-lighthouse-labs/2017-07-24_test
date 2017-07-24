#include <stdio.h>

bool isMultipleOf(int i, int multiple) {
    return i & multiple == 0;
}

int main(int argc, const char * argv[]) {
    
    for (int i = 0; i <= 100; ++i) {
        if (isMultipleOf(i, 3) && isMultipleOf(i, 5)) {
            printf("Fizz Buzz\n");
        } else if (isMultipleOf(i, 3)) {
            printf("Fizz\n");
        } else {
            printf("Buzz\n");
        }
    }
    
    printf("We did it!!");
    printf("Sam is 💩");
    
    return 0;
}
