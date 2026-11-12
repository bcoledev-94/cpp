//
// Created by Brandon on 7/29/2026.
//
#include <iostream>
#include <spdlog/spdlog.h>
#include <spdlog/sinks/stdout_color_sinks.h>

#define DEBUG
spdlog::level::level_enum fetch_log_level(int level)
{
    switch (level)
    {
        case 1: return spdlog::level::trace;
        case 2: return spdlog::level::debug;
        case 3: return spdlog::level::info;
        case 4: return spdlog::level::warn;
        case 5: return spdlog::level::err;
        case 6: return spdlog::level::critical;
        default: return spdlog::level::info;
    }
}


void init_logger (int level = 1) {
    auto logger = spdlog::stdout_color_mt("app");
    spdlog::set_default_logger(logger);
    spdlog::set_level(fetch_log_level(level));
    spdlog::set_pattern("[%Y-%m-%d %H:%M:%S.%e] [%^%l%$] %v");

#ifdef DEBUG
    std::cout << "Wow" << std::endl;
#endif
}

int main () {
    init_logger();
    spdlog::info("Brandon was here.");
    return 0;
}