#define FMT_HEADER_ONLY
#include <iostream>
#include <fmt/format.h>
#include <fmt/color.h>

int main(){
    fmt::print(fmt::emphasis::bold | fmt::fg(fmt::color::beige),"hello world\n");
    return 0;
}

