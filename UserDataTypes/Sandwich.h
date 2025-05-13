#pragma once
#include <iostream> 

enum Meat
{
    Chicken,
    Prawns,
    Pastrami
};

class Sandwich
{
public:
    std::string bread;
    bool isDelicious;
    Meat meat;

private:
    float price;

public:

    void setPrice(float value);

    void PrintPrice();
};