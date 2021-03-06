// -*- lsst-c++ -*-

/**
 * @file Utils.h
 * @brief Utility functions
 * @author Benjamin Thomas Schwertfeger
 * @copyright Benjamin Thomas Schwertfeger
 * @link https://b-schwertfeger.de
 * @github https://github.com/btschwertfeger/Bias-Adjustment-Cpp
 */

#ifndef __UTILS__
#define __UTILS__
#include <iostream>
/*
 * ----- ----- ----- C O N T E N T ----- ----- ----- */
namespace utils {
/** Class to create log files */
class Log {
   public:
    Log();
    ~Log();

    static void debug(std::string);
    static void info(std::string);
    static void warning(std::string);
    static void error(std::string);
};

void progress_bar(float, float);

}  // namespace utils

#endif

/*
 * ----- ----- ----- E O F ----- ----- ----- ----- ----- ----- ----- ----- ----- ----- ----- ----- */
