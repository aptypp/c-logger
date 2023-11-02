#include <stdio.h>
#include <stdarg.h>
#include <time.h>
#include <string.h>
#include "logger.h"

void logger_log(FILE* file, const char* color, const char* message, va_list* args)
{
    char buffer[strlen(message) + 64];

    time_t raw_time;
    struct tm* time_info;

    time(&raw_time);
    time_info = localtime(&raw_time);

    sprintf(buffer, "%s%02d:%02d:%02d %s%s", color, time_info->tm_hour, time_info->tm_min, time_info->tm_sec, message, COLOR_DEFAULT);

    vfprintf(file, buffer, *args);
}
