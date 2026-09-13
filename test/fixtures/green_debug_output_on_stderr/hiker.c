#include "hiker.h"
#include <stdio.h>

int answer(void)
{
    /* The learner is watching when this gets called, and has not taken
       this out yet. */
    fprintf(stderr, "answer was called\n");
    return 6 * 7;
}
