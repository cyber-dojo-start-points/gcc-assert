#include "tests/answer_size.tests.h"
#include "hiker.h"
#include <assert.h>

/* A test file in a sub-directory is compiled and linked like any other.
   Calling it is still the learner's job, which is C's rule rather than
   cyber-dojo's, so main names it through the header beside this file. */
void the_answer_is_two_digits_long(void)
{
    assert(answer() > 9 && answer() < 100);
}
