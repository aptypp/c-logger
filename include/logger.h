#ifndef C_LOGGER_LOGGER_H
#define C_LOGGER_LOGGER_H

#define COLOR_RED "\x1b[31m"
#define COLOR_YELLOW "\x1b[33m"
#define COLOR_DEFAULT "\x1b[0m"

#define LOG_INFO(file, message, ...) \
    logger_log(file, COLOR_YELLOW, message, __VA_ARGS__); \

#define LOG_ERROR(file, message, ...) \
    logger_log(file, COLOR_RED, message, __VA_ARGS__); \

void logger_log(FILE* file, const char* color, const char* message, va_list* args);

#endif //C_LOGGER_LOGGER_H
