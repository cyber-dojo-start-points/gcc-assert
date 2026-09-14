#include "hiker.h"
#include <stddef.h>

/* Neither table has been filled in yet, so both are still NULL and reading
   from either one crashes the test program. */

int answer(void)
{
    int *answers = NULL;
    return answers[0];
}

int checksum(void)
{
    int *checksums = NULL;
    return checksums[0];
}
