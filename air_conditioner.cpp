#include "air_conditioner.h"

AirConditioner::AirConditioner()
{
    air_conditioner = 0b00000000;
}

unsigned char AirConditioner::get_state()
{
    return air_conditioner;
}

void AirConditioner::on(int num)
{
    unsigned char bit = 0b00000001;
    unsigned char flag = bit << --num;

    air_conditioner |= flag;

    return; 
}

void AirConditioner::off(int num)
{
    unsigned char bit = 0b00000001;
    unsigned char flag = bit << --num;

    air_conditioner &= ~flag;

    return;
}

void AirConditioner::reversal()
{
    air_conditioner = ~air_conditioner;

    return;
}