#include <iostream>
#include <limits>

using namespace std;
void print_calendar(int month, int year);
bool is_leap_year(int year);
int get_days_in_month(int month, int year);
int get_day_of_week(int month, int year);
int data_filtering(int start_range, int end_range);


int data_filtering(int start_range, int end_range)
{
    int number;
    while (!(std::cin >> number) || number < start_range || number > end_range) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Ошибка ввода. Введите целое число в диапазоне " << start_range << "-" << end_range << ": ";
    }
    return number;
}


int get_day_of_week(int month, int year)
{
    int dayOfWeek = 0;
    for (int y = 1900; y < year; ++y) {
        int daysInYear = 365;
        if (is_leap_year(y))
            daysInYear = 366;
        dayOfWeek = (dayOfWeek + daysInYear) % 7;
    }

    for (int m = 1; m < month; ++m) {
        int daysInMonth = get_days_in_month(m, year);
        dayOfWeek = (dayOfWeek + daysInMonth) % 7;
    }

    return dayOfWeek + 1;
}


bool is_leap_year(int year)
{
    if (year % 4 || (year % 100 == 0 && year % 400))
        return false;
    return true;
}


int get_days_in_month(int month, int year)
{
    if (month == 2) {
        if (is_leap_year(year))
            return 29;
        else
            return 28;
    }
    else if (month == 4 || month == 6 || month == 9 || month == 11)
        return 30;
    return 31;
}


void print_calendar(int month, int year)
{
    string month_names[12] = { "ЯНВАРЬ", "ФЕВРАЛЬ", "МАРТ", "АПРЕЛЬ", "МАЙ", "ИЮНЬ",
                   "ИЮЛЬ", "АВГУСТ", "СЕНТЯБРЬ", "ОКТЯБРЬ", "НОЯБРЬ", "ДЕКАБРЬ" };
    int days_in_month = get_days_in_month(month, year);
    int first_day = get_day_of_week(month, year);

    cout << month_names[month - 1] << " " << year << endl;
    cout << "ПН\tВТ\tСР\tЧТ\tПТ\tСБ\tВС" << endl;

    for (int i = 1; i < first_day; i++)
        cout << "\t";

    for (int day = 1; day < days_in_month + 1; day++) {
        if (day < 10)
            cout << " " << day << "\t";
        else
            cout << day << "\t";

        if (first_day % 7 == 0)
            cout << endl;
        first_day++;
    }
}


int main()
{   
    setlocale(LC_ALL, "Russian");
    int year, month;
    cout << "Введите год (1919-2069): ";
    year = data_filtering(1919, 2069);
    cout << "Введите месяц (1-12): ";
    month = data_filtering(1, 12);
    print_calendar(month, year);
    return 0;
}




