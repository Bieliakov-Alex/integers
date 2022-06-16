#include <iostream>
#include <cstdint>

int main(){
    //целочисленные типы данных
    int a = 0;
    short b = 1;
    long c = 2;
    long long d = 3;

    // short<=int<=long<=long long

    std::cout<<a<<" "<<b<<" "<<c<<" "<<d<<std::endl;

    char e = 36;

    std::cout<<e<<std::endl;

    std::cout<<"Size of char "<<sizeof(char)<<std::endl;
    std::cout<<"Size of int "<<sizeof(int)<<std::endl;
    std::cout<<"Size of a "<<sizeof(a)<<std::endl;

    //Арифметические операции

    char first_arg = 2;
    char second_arg = 18;
    char answer = first_arg * second_arg;

    std::cout<<"Answer "<<answer<<std::endl;

    // + - * / %

    //% - остаток от деления

    // Знак числа

    //Унарный оператор "-"

    int positive_integer = -1;
    std::cout<<"positive_integer="<<positive_integer<<std::endl;
    std::cout<<"positive_integer="<<-positive_integer<<std::endl;

    //unsigned - число без знака

    char signed_char = 127;            // 0111 1111
    unsigned char unsigned_char = 127; // 0111 1111


    std::cout<<"signed_char="<<static_cast<int>(signed_char)<<std::endl;
    ++signed_char; // 1111 1111
    std::cout<<"signed_char="<<static_cast<int>(signed_char)<<std::endl;

    std::cout<<"unsigned_char="<<static_cast<int>(unsigned_char)<<std::endl;
    ++unsigned_char;
    std::cout<<"unsigned_char="<<static_cast<int>(unsigned_char)<<std::endl;

    int signed_int = 0; // 0000 0000 0000 0000 0000 0000 0000 0000
    unsigned int unsigned_int = 0; // 0000 0000 0000 0000 0000 0000 0000 0000

    std::cout<<"signed_int="<<signed_int<<std::endl;
    --signed_int; // 1111 1111 1111 1111 1111 1111 1111 1111
    std::cout<<"signed_int="<<signed_int<<std::endl;
    std::cout<<"unsigned_int="<<unsigned_int<<std::endl;
    --unsigned_int; // 1111 1111 1111 1111 1111 1111 1111 1111
    std::cout<<"unsigned_int="<<unsigned_int<<std::endl;

    size_t size_of_t = -1;
    std::cout<<"size_of_t="<<size_of_t<<std::endl;

    // побитовые операции

    // & | ~ ^

    int result = 0;
    result = 6 & 3; // result = 2

    // 0110
    // 0011
    // &
    // 0010

    std::cout<<"result="<<result<<std::endl;

    result = 6 | 3;

    std::cout<<"result="<<result<<std::endl;

    // 0000 0000 0000 0000 0000 0000 0000 0001
    // 1111 1111 1111 1111 1111 1111 1111 1110

    result = ~1;

    std::cout<<"result="<<result<<std::endl;

    // 0110
    // 0011
    // ^
    // 0101

    result = 6 ^ 3;

    std::cout<<"result="<<result<<std::endl;

    // += -= *= /= %= &= |= ~= ^=

    a = 2;
    result += 2;

    std::cout<<"result="<<result<<std::endl;

    // == != <= >= < >

    //целые числа с фиксированным размером

    //подробнее - тут: https://en.cppreference.com/w/cpp/types/integer

    uint8_t fixed_size_int_8 = 0;
    std::cout<<"size of uint8_t "<<sizeof(fixed_size_int_8)<<std::endl;

    return 0;
}
