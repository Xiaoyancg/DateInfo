#include <string>
#include <chrono>
#include "DateInfo.h"

DateInfo::DateInfo(){
    const std::chrono::time_point now{std::chrono::system_clock::now()};
    const std::chrono::year_month_day ymd{std::chrono::floor<std::chrono::days>(now)};
    this->year = static_cast<int>(ymd.year());
    this->month = static_cast<unsigned>(ymd.month());
    this->day = static_cast<unsigned>(ymd.day());
}
int DateInfo::getYear() {
    return this->year;
}
int DateInfo::getMonth() {
    return this->month;
}
int DateInfo::getDay() {
    return this->day;
}

std::string DateInfo::getYearString() {
    return(std::to_string(year));
}
std::string DateInfo::getMonthString() {
    if (month < 10)
        return(std::string("0")+std::to_string(month));
    else
        return(std::to_string(month));
}
std::string DateInfo::getDayString() {
    if (day < 10)
        return(std::string("0")+std::to_string(day));
    else
        return(std::to_string(day));
}
std::string DateInfo::getDateString() {
    return(
        std::to_string(year)
        + (month < 10 ? std::string("0")+std::to_string(month) : std::to_string(month))
        + (day < 10 ? std::string("0")+std::to_string(day) : std::to_string(day))
    );
}
std::string DateInfo::getDateString(char sep) {
    return(
        std::to_string(year) + std::to_string(sep)
        + (month < 10 ? std::string("0")+std::to_string(month) : std::to_string(month))+ std::to_string(sep)
        + (day < 10 ? std::string("0")+std::to_string(day) : std::to_string(day))
    );
}

std::string DateInfo::getDateString_s() {
    const std::chrono::time_point now{std::chrono::system_clock::now()};
    const std::chrono::year_month_day ymd{std::chrono::floor<std::chrono::days>(now)};
    int year = static_cast<int>(ymd.year());
    int month = static_cast<unsigned>(ymd.month());
    int day = static_cast<unsigned>(ymd.day());
    return(
        std::to_string(year)
        + (month < 10 ? std::string("0")+std::to_string(month) : std::to_string(month))
        + (day < 10 ? std::string("0")+std::to_string(day) : std::to_string(day))
    );
}

std::string DateInfo::getDateString_s(char sep) {
    const std::chrono::time_point now{std::chrono::system_clock::now()};
    const std::chrono::year_month_day ymd{std::chrono::floor<std::chrono::days>(now)};
    int year = static_cast<int>(ymd.year());
    int month = static_cast<unsigned>(ymd.month());
    int day = static_cast<unsigned>(ymd.day());
    return(
        std::to_string(year) + std::to_string(sep)
        + (month < 10 ? std::string("0")+std::to_string(month) : std::to_string(month))+ std::to_string(sep)
        + (day < 10 ? std::string("0")+std::to_string(day) : std::to_string(day))
    );
}