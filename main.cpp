
//import std;
#include <iostream>
#include <format>

import mymod;

namespace temp
{
    template <typename... Args>
    void print(std::format_string<Args...> fmt, Args&&... args)
    {
        std::cout << std::format(fmt, std::forward<Args>(args)...);
    }

    template <typename... Args>
    void println(std::format_string<Args...> fmt, Args&&... args)
    {
        std::cout << std::format(fmt, std::forward<Args>(args)...) << "\n";
    }
}

int main()
{
    using temp::println;

    const int x{ 11 };
    const int y{ -2 };

    println("{} add {} is {}", x, y, mymod::add(x, y));
    println("{} subtract {} is {}", x, y, mymod::subtract(x, y));
}
