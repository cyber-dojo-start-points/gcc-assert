#include "hiker.h"

int answer(void)
{
    /* The learner meant to count up to 42 and never moves n. Declaring it
       volatile is what stops the optimiser folding the loop away. */
    volatile int n = 0;
    while (n != 42)
    {
    }
    return n;
}
