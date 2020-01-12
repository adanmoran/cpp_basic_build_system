
#ifndef PRINTER_H_
#define PRINTER_H_

#include <string>
#include <iostream>

class Printer
{
public:
    Printer() {};
    ~Printer() {};

    void print(const std::string& str);
};

#endif

/* vim: set ts=4 sw=4 et : */
