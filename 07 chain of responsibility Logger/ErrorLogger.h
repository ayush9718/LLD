#pragma once

#include "Logger.h"

class ErrorLogger : public Logger {
public:
    void log(LogLevel level, const std::string& message) override;
};