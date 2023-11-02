#ifndef C_LOGGER_LOGGER_H
#define C_LOGGER_LOGGER_H



#define COLOR_RED "\033[1;31m"
#define COLOR_YELLOW "\033[1;33m"
#define COLOR_DEFAULT "\033[1;0m"

void logger_log(FILE* file, const char* color, const char* message, va_list* args);

#endif //C_LOGGER_LOGGER_H
