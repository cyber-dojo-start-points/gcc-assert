#include "hiker.h"
#include <assert.h>

/* Given a .h name instead of a .c one, so it is never linked into the test
   program and this test never runs. Vanishing is what it must not do: the
   makefile compiles every header file in its own right, so a half written
   one is seen even though it is not run. */
static void the_answer_is_two_digits_long(void)
{
    assert(answer() > 9 && answer() < 100;
}
