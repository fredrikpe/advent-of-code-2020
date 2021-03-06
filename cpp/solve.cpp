#include <iostream>

#include "1.h"
#include "2.h"
#include "3.h"
#include "4.h"
#include "5.h"
#include "6.h"
#include "11.h"
#include "14.h"

int main() {
    std::cout << "1: " << day1::part1() << std::endl;

    std::cout << "2-1: " << day2::part1(day2::parse_input()) << std::endl;
    std::cout << "2-2: " << day2::part2(day2::parse_input()) << std::endl;

    std::cout << "3-1: " << day3::part1(day3::parse_input()) << std::endl;
    std::cout << "3-2: " << day3::part2(day3::parse_input()) << std::endl;

    std::cout << "4-1: " << day4::part1(day4::parse_input()) << std::endl;
    std::cout << "4-2: " << day4::part2(day4::parse_input()) << std::endl;

    std::cout << "5-1: " << day5::part1(day5::parse_input()) << std::endl;
    std::cout << "5-2: " << day5::part2(day5::parse_input()) << std::endl;

    std::cout << "6-1: " << day6::part1() << std::endl;
    std::cout << "6-2: " << day6::part2() << std::endl;

    std::cout << "11-1: " << day11::part1() << std::endl;
    std::cout << "11-2: " << day11::part2() << std::endl;

    std::cout << "14-1: " << day14::part1() << std::endl;
}
