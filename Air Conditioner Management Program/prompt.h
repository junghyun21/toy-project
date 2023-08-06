#ifndef PROMPT_H
#define PROMPT_H

namespace prompt
{
    int select_option(); // on/off/reversal/exit 중 제어할 옵션 선택
    int select_number(); // 제어할 에어컨의 번호 선택

    void show_state(unsigned char); // 에어컨들의 현재 상태 출력
}

#endif