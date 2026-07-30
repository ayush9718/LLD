#include "ErrorLogger.h"
#include <iostream>

void ErrorLogger::log(LogLevel level, const std::string& message) {
    if (level == ERROR) {
        std::cout << "[ERROR] " << message << std::endl;
        return;
    }

    Logger::log(level, message);
}