#ifndef AIR_CONDITIONER_H
#define AIR_CONDITIONER_H

class AirConditioner
{
    private:
        unsigned char air_conditioner;

    public:
        AirConditioner(); // 생성자, air_conditioner == 0
        unsigned char get_state(); // 현재 에어컨의 가동 현황 가져옴
        void on(int); // 해당하는 번호의 에어컨의 가동 ON
        void off(int); // 해당하는 번호의 에어컨의 가동 OFF
        void reversal(); // 모든 에어컨의 가동 전환(반전)
};

#endif