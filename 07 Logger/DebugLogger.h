#pragma once

#include "Logger.h"

class DebugLogger : public Logger {
public:
    void log(LogLevel level, const std::string& message) override;
};