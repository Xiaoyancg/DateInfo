#include <string>
class DateInfo{
public:
    DateInfo();
    int getYear();
    int getMonth();
    int getDay();
    std::string getYearString();
    std::string getMonthString();
    std::string getDayString();
    std::string getDateString();
    std::string getDateString(char sep);
    static std::string getDateString_s(char sep);
    static std::string getDateString_s();
private:
    int year;
    int month;
    int day;
};