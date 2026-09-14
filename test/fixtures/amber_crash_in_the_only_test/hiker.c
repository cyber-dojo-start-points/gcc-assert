#include "hiker.h"
#include <stddef.h>

int answer(void)
{
    /* The learner has not filled the table in yet, so it is still NULL and
       reading from it crashes the test program. */
    int *answers = NULL;
    return answers[0];
}
