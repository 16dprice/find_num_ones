//
// Created by Donald Lee Price Junior on 5/22/21.
//

#include "OneCounter.h"

int OneCounter::count(int n) {
    int total = 0;

    for(int i = 1; i <= n; i++) {
        total += countForNum(i);
    }

    return total;
}

int OneCounter::countForNum(int n) {
    if(n == 0) return 0;
    return (n % 10 == 1) + countForNum(n / 10);
}
