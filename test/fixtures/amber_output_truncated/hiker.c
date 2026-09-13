#include "hiker.h"
#include <stdio.h>

int answer(void)
{
    /* The learner put a print inside a loop to see what was happening. It
       goes to stderr, where a failing assert() writes too, and prints far
       more than the 50K the runner keeps, so the line naming the failed
       assertion is cut off the end. */
    for (int i = 0; i != 5000; i++)
    {
        fprintf(stderr, "debug: answer was called, i is %d\n", i);
    }
    return 6 * 9;
}
