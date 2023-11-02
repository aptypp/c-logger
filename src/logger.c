#include <stdio.h>
#include <stdarg.h>
#include <time.h>
#include <string.h>
#include "logger.h"

void logger_log(FILE* file, const char* type, const char* message, ...)
{
    char buffer[strlen(message) + 64];

    time_t raw_time;
    struct tm* time_info;

    time(&raw_time);
    time_info = localtime(&raw_time);

    va_list args;
    va_start(args, message);

    sprintf(buffer, "%s%02d:%02d:%02d %s\n", type, time_info->tm_hour, time_info->tm_min, time_info->tm_sec, message);

    vfprintf(file, buffer, args);
}
