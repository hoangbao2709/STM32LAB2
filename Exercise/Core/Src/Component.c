
#include "main.h"

static void Khong(void) {
    HAL_GPIO_WritePin(a_GPIO_Port, a_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(b_GPIO_Port, b_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(c_GPIO_Port, c_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(d_GPIO_Port, d_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(e_GPIO_Port, e_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(f_GPIO_Port, f_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(g_GPIO_Port, g_Pin, GPIO_PIN_SET);
}

static void Mot(void) {
    HAL_GPIO_WritePin(a_GPIO_Port, a_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(b_GPIO_Port, b_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(c_GPIO_Port, c_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(d_GPIO_Port, d_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(e_GPIO_Port, e_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(f_GPIO_Port, f_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(g_GPIO_Port, g_Pin, GPIO_PIN_SET);
}

static void Hai(void) {
    HAL_GPIO_WritePin(a_GPIO_Port, a_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(b_GPIO_Port, b_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(c_GPIO_Port, c_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(d_GPIO_Port, d_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(e_GPIO_Port, e_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(f_GPIO_Port, f_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(g_GPIO_Port, g_Pin, GPIO_PIN_RESET);
}

static void Ba(void) {
    HAL_GPIO_WritePin(a_GPIO_Port, a_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(b_GPIO_Port, b_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(c_GPIO_Port, c_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(d_GPIO_Port, d_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(e_GPIO_Port, e_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(f_GPIO_Port, f_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(g_GPIO_Port, g_Pin, GPIO_PIN_RESET);
}

static void Bon(void) {
    HAL_GPIO_WritePin(a_GPIO_Port, a_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(b_GPIO_Port, b_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(c_GPIO_Port, c_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(d_GPIO_Port, d_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(e_GPIO_Port, e_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(f_GPIO_Port, f_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(g_GPIO_Port, g_Pin, GPIO_PIN_RESET);
}

static void Nam(void) {
    HAL_GPIO_WritePin(a_GPIO_Port, a_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(b_GPIO_Port, b_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(c_GPIO_Port, c_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(d_GPIO_Port, d_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(e_GPIO_Port, e_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(f_GPIO_Port, f_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(g_GPIO_Port, g_Pin, GPIO_PIN_RESET);
}

static void Sau(void) {
    HAL_GPIO_WritePin(a_GPIO_Port, a_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(b_GPIO_Port, b_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(c_GPIO_Port, c_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(d_GPIO_Port, d_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(e_GPIO_Port, e_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(f_GPIO_Port, f_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(g_GPIO_Port, g_Pin, GPIO_PIN_RESET);
}

static void Bay(void) {
    HAL_GPIO_WritePin(a_GPIO_Port, a_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(b_GPIO_Port, b_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(c_GPIO_Port, c_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(d_GPIO_Port, d_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(e_GPIO_Port, e_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(f_GPIO_Port, f_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(g_GPIO_Port, g_Pin, GPIO_PIN_SET);
}

static void Tam(void) {
    HAL_GPIO_WritePin(a_GPIO_Port, a_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(b_GPIO_Port, b_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(c_GPIO_Port, c_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(d_GPIO_Port, d_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(e_GPIO_Port, e_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(f_GPIO_Port, f_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(g_GPIO_Port, g_Pin, GPIO_PIN_RESET);
}

static void Chin(void) {
    HAL_GPIO_WritePin(a_GPIO_Port, a_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(b_GPIO_Port, b_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(c_GPIO_Port, c_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(d_GPIO_Port, d_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(e_GPIO_Port, e_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(f_GPIO_Port, f_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(g_GPIO_Port, g_Pin, GPIO_PIN_RESET);
}

static void display7SEG(int num) {
    switch(num) {
        case 0: Khong(); break;
        case 1: Mot(); break;
        case 2: Hai(); break;
        case 3: Ba(); break;
        case 4: Bon(); break;
        case 5: Nam(); break;
        case 6: Sau(); break;
        case 7: Bay(); break;
        case 8: Tam(); break;
        case 9: Chin(); break;
    }
}

