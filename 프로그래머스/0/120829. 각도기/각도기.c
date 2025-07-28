#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int angle) {
    if (angle > 0 && angle < 90)
        return 1; // 예각
    else if (angle == 90)
        return 2; // 직각
    else if (angle > 90 && angle < 180)
        return 3; // 둔각
    else if (angle == 180)
        return 4; // 평각
    return 0; // 예외 처리 (문제 조건상 사용되지 않음)
}