#include <iostream>
#include "MY_CONSTANTS.h"
#include "prompt.h"
#include "air_conditioner.h"

using namespace std;

int main()
{
    AirConditioner air_conditioner;
    unsigned char state;
    int opt = 0;
    int num = 0;

    while(true)
    {
        // 현재 에어컨의 가동 현황 출력
        state = air_conditioner.get_state();
        prompt::show_state(state);

        // 에어컨 On/Off/Reversal, 프로그램 종료 중에 옵션 선택 
        opt = prompt::select_option();
        if(opt == constant::exit)
        {
            break;
        }

        switch (opt)
        {
            // ON하고 싶은 에어컨의 번호 선택 후, 해당 에어컨 ON
            case constant::on:
                num = prompt::select_number();
                air_conditioner.on(num);
                cout << "[*]" << num << "번 에어컨 ON 완료" << endl;
                break;

            // OFF하고 싶은 에어컨의 번호 선택 후, 해당 에어컨 OFF
            case constant::off:
                num = prompt::select_number();
                air_conditioner.off(num);
                cout << "[*]" << num << "번 에어컨 OFF 완료" << endl;
                break;

            // 에어컨 전체 Reversal (ON -> OFF, OFF -> ON)
            case constant::reversal:
                air_conditioner.reversal();
                cout << "[*] 모든 에어컨 ON/OFF 전환 완료" << endl;
                break;

            default:
                cout << "!! 잘못 입력하셨습니다. 다시 입력해주세요. !!" << endl;
                break;
        }

        cout << "===============================================================================" << endl;
    }
}