#include "prompt.h"
#include "MY_CONSTANTS.h"
#include <iostream>
#include <iomanip>

#define WIDTH 5

using namespace std;

int prompt::select_option()
{
    int option = 0;
    
    cout << "[" << constant::on << "]에어컨 ON ";
    cout << "[" << constant::off << "]에어컨 OFF ";
    cout << "[" << constant::reversal << "]에어컨 전체 전환 ";
    cout << "[" << constant::exit << "]프로그램 종료" << endl;

    cout << ">> ";

    cin >> option;

    return option;
}

int prompt::select_number()
{
    int number = 0;

    while(number < 1 || number > 8)
    {
        cout << "[*] 제어할 에어컨의 번호를 입력하세요(1 ~ 8 이외의 값 입력 시, 다시 입력해야합니다)" << endl;
        cout << ">> ";
        cin >> number;
    }

    return number;
}

void prompt::show_state(unsigned char state)
{
    for(int i = 1; i < 9; ++i)
    {
        cout << setw(WIDTH) << left << i << "| ";
    }
    cout << endl;

    unsigned char flag;
    unsigned char bit = 0b00000001;

    for(int i = 0; i < 8; ++i)
    {
        flag = bit << i;
        
        if(state & flag)
        {
            cout << setw(WIDTH) << left << "ON" << "| ";
        }
        else
        {
            cout << setw(WIDTH) << left << "OFF" << "| ";
        }
    }
    cout << endl;

    return;
}