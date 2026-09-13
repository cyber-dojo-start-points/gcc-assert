#include "answer_size.tests.h"
#include "hiker.h"
#include <assert.h>

/* The makefile compiles every .c file in this directory, so this one is
   built and linked without the makefile being touched. main() is in
   hiker.tests.c, so that is where the call to this test lives. */
void the_answer_is_two_digits_long(void)
{
    assert(answer() > 9 && answer() < 100);
}
