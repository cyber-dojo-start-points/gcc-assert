#include "checksum.h"

/* Nothing #includes checksum.h and nothing calls checksum(), but the
   makefile compiles every .c file in this directory, so a half written one
   is seen rather than sitting there unnoticed. */
int checksum(void)
{
    return 7
}
