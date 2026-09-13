CFLAGS += -I.
CFLAGS += -std=c18
CFLAGS += -Wall
CFLAGS += -Wextra
CFLAGS += -Wsequence-point
CFLAGS += -Wstrict-prototypes
CFLAGS += -Wmissing-prototypes
CFLAGS += -Wshadow
CFLAGS += -Wfloat-equal
CFLAGS += -O
CFLAGS += -fprofile-arcs -ftest-coverage

# Files are found at any depth, so a test you put in a sub-directory is
# compiled and linked like any other. A shallow glob would leave it out of
# the build entirely, where neither its tests nor its mistakes could be seen.
# The leading ./ that find prints is dropped so a compiler message names
# your file the way you wrote it, as checksum.c rather than ./checksum.c.
H_FILES = $(patsubst ./%,%,$(shell find . -name '*.h'))
COMPILED_H_FILES = $(patsubst %.h,%.compiled_h,$(H_FILES))
C_FILES = $(patsubst ./%,%,$(shell find . -name '*.c'))

.PHONY: test.output
test.output: test makefile
	@./$<

test: makefile $(C_FILES) $(COMPILED_H_FILES)
	@gcc $(CFLAGS) $(C_FILES) -o $@

# This rule ensures header files build in their own right.
# The quality of header files is important because header files
# are #included from other files and thus have a large span
# of influence (unlike .c files which are not #included).

%.compiled_h: %.h
	@gcc -x c $(CFLAGS) -c -o $@ $<
