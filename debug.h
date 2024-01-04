#ifndef DEBUG_H_
#define DEBUG_H_

#include <stdint.h>

#define DEBUGF_CONSOLE_WIDTH       (79 + 1)     // Allow 79 characters and null byte

#define DEBUG_PREFIX               "DEBUG: "
#define DEBUG_RESET                "\x1B[0m"    // Reset to default colors
#define DEBUG_CLEAR                "\x1B[2J"    // Clear screen, reposition cursor to top left

#define DEBUG_TEXT_BLACK           "\x1B[2;30m"
#define DEBUG_TEXT_RED             "\x1B[2;31m"
#define DEBUG_TEXT_GREEN           "\x1B[2;32m"
#define DEBUG_TEXT_YELLOW          "\x1B[2;33m"
#define DEBUG_TEXT_BLUE            "\x1B[2;34m"
#define DEBUG_TEXT_MAGENTA         "\x1B[2;35m"
#define DEBUG_TEXT_CYAN            "\x1B[2;36m"
#define DEBUG_TEXT_WHITE           "\x1B[2;37m"

#define DEBUG_TEXT_BRIGHT_BLACK    "\x1B[1;30m"
#define DEBUG_TEXT_BRIGHT_RED      "\x1B[1;31m"
#define DEBUG_TEXT_BRIGHT_GREEN    "\x1B[1;32m"
#define DEBUG_TEXT_BRIGHT_YELLOW   "\x1B[1;33m"
#define DEBUG_TEXT_BRIGHT_BLUE     "\x1B[1;34m"
#define DEBUG_TEXT_BRIGHT_MAGENTA  "\x1B[1;35m"
#define DEBUG_TEXT_BRIGHT_CYAN     "\x1B[1;36m"
#define DEBUG_TEXT_BRIGHT_WHITE    "\x1B[1;37m"

#define DEBUG_BG_BLACK             "\x1B[24;40m"
#define DEBUG_BG_RED               "\x1B[24;41m"
#define DEBUG_BG_GREEN             "\x1B[24;42m"
#define DEBUG_BG_YELLOW            "\x1B[24;43m"
#define DEBUG_BG_BLUE              "\x1B[24;44m"
#define DEBUG_BG_MAGENTA           "\x1B[24;45m"
#define DEBUG_BG_CYAN              "\x1B[24;46m"
#define DEBUG_BG_WHITE             "\x1B[24;47m"

#define DEBUG_BG_BRIGHT_BLACK      "\x1B[4;40m"
#define DEBUG_BG_BRIGHT_RED        "\x1B[4;41m"
#define DEBUG_BG_BRIGHT_GREEN      "\x1B[4;42m"
#define DEBUG_BG_BRIGHT_YELLOW     "\x1B[4;43m"
#define DEBUG_BG_BRIGHT_BLUE       "\x1B[4;44m"
#define DEBUG_BG_BRIGHT_MAGENTA    "\x1B[4;45m"
#define DEBUG_BG_BRIGHT_CYAN       "\x1B[4;46m"
#define DEBUG_BG_BRIGHT_WHITE      "\x1B[4;47m"

#define DEBUG_HEADING  DEBUG_BG_BRIGHT_BLUE
#define DEBUG_WARNING  DEBUG_TEXT_YELLOW
#define DEBUG_ERROR    DEBUG_TEXT_BRIGHT_RED

/// @brief Provides debug information to an attached external device
/// @param format pointer to a null-terminated character string specifying how
///               to interpret the data
/// @param ... arguments specifying data to print. If any argument after
///            default argument promotions is not the type expected by the
///            corresponding conversion specifier, or if there are fewer
///            arguments than required by format, the behavior is undefined.
///            If there are more arguments than required by format, the
///            extraneous arguments are evaluated and ignored.
///
void debugf(const char *format, ...);

#endif
