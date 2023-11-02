//
// Created by artur on 02.11.23.
//

#include <stdio.h>
#include "logger.h"

int main()
{
    LOG_INFO(stdout, "hello info %s\n", "arg");
    logger_info(stdout, "hello info %s\n", "arg");
    logger_error(stdout, "hello error %d\n", 1);
}