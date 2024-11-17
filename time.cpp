#include <iostream>
#include <iomanip>
using namespace std;

class Time
{
private:
    int hour;
    int minute;
    int second;

public:
    Time(int h = 0, int m = 0, int s = 0) : hour(h), minute(m), second(s) {}

    void display() const
    {
        std::cout << std::setw(2) << std::setfill('0') << hour << ":"
                  << std::setw(2) << std::setfill('0') << minute << ":"
                  << std::setw(2) << std::setfill('0') << second << std::endl;
    }

    Time &operator++()
    {
        ++second;
        if (second == 60)
        {
            second = 0;
            ++minute;
            if (minute == 60)
            {
                minute = 0;
                ++hour;
                if (hour == 24)
                {
                    hour = 0;
                }
            }
        }
        return *this;
    }

    Time &operator--()
    {
        --second;
        if (second < 0)
        {
            second = 59;
            --minute;
            if (minute < 0)
            {
                minute = 59;
                --hour;
                if (hour < 0)
                {
                    hour = 23;
                }
            }
        }
        return *this;
    }

    Time operator++(int)
    {
        Time temp = *this;
        ++(*this);
        return temp;
    }

    Time operator--(int)
    {
        Time temp = *this;
        --(*this);
        return temp;
    }
};

int main()
{
    Time t(23, 59, 59);
    std::cout << "Initial time: ";
    t.display();

    ++t;
    std::cout << "After incrementing by 1 second: ";
    t.display();

    --t;
    std::cout << "After decrementing by 1 second: ";
    t.display();

    return 0;
}
