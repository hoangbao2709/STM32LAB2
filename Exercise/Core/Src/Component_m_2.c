
#include "main.h"

static void Khong_m_2(void) {
    HAL_GPIO_WritePin(m_1_GPIO_Port, m_1_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(m_2_GPIO_Port, m_2_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(m_3_GPIO_Port, m_3_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(m_4_GPIO_Port, m_4_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(m_5_GPIO_Port, m_5_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(m_6_GPIO_Port, m_6_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(m_7_GPIO_Port, m_7_Pin, GPIO_PIN_SET);
}

static void Mot_m_2(void) {
    HAL_GPIO_WritePin(m_1_GPIO_Port, m_1_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(m_2_GPIO_Port, m_2_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(m_3_GPIO_Port, m_3_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(m_4_GPIO_Port, m_4_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(m_5_GPIO_Port, m_5_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(m_6_GPIO_Port, m_6_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(m_7_GPIO_Port, m_7_Pin, GPIO_PIN_SET);
}

static void Hai_m_2(void) {
    HAL_GPIO_WritePin(m_1_GPIO_Port, m_1_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(m_2_GPIO_Port, m_2_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(m_3_GPIO_Port, m_3_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(m_4_GPIO_Port, m_4_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(m_5_GPIO_Port, m_5_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(m_6_GPIO_Port, m_6_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(m_7_GPIO_Port, m_7_Pin, GPIO_PIN_RESET);
}

static void Ba_m_2(void) {
    HAL_GPIO_WritePin(m_1_GPIO_Port, m_1_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(m_2_GPIO_Port, m_2_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(m_3_GPIO_Port, m_3_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(m_4_GPIO_Port, m_4_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(m_5_GPIO_Port, m_5_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(m_6_GPIO_Port, m_6_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(m_7_GPIO_Port, m_7_Pin, GPIO_PIN_RESET);
}

static void Bon_m_2(void) {
    HAL_GPIO_WritePin(m_1_GPIO_Port, m_1_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(m_2_GPIO_Port, m_2_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(m_3_GPIO_Port, m_3_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(m_4_GPIO_Port, m_4_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(m_5_GPIO_Port, m_5_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(m_6_GPIO_Port, m_6_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(m_7_GPIO_Port, m_7_Pin, GPIO_PIN_RESET);
}

static void Nam_m_2(void) {
    HAL_GPIO_WritePin(m_1_GPIO_Port, m_1_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(m_2_GPIO_Port, m_2_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(m_3_GPIO_Port, m_3_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(m_4_GPIO_Port, m_4_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(m_5_GPIO_Port, m_5_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(m_6_GPIO_Port, m_6_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(m_7_GPIO_Port, m_7_Pin, GPIO_PIN_RESET);
}

static void Sau_m_2(void) {
    HAL_GPIO_WritePin(m_1_GPIO_Port, m_1_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(m_2_GPIO_Port, m_2_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(m_3_GPIO_Port, m_3_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(m_4_GPIO_Port, m_4_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(m_5_GPIO_Port, m_5_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(m_6_GPIO_Port, m_6_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(m_7_GPIO_Port, m_7_Pin, GPIO_PIN_RESET);
}

static void Bay_m_2(void) {
    HAL_GPIO_WritePin(m_1_GPIO_Port, m_1_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(m_2_GPIO_Port, m_2_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(m_3_GPIO_Port, m_3_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(m_4_GPIO_Port, m_4_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(m_5_GPIO_Port, m_5_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(m_6_GPIO_Port, m_6_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(m_7_GPIO_Port, m_7_Pin, GPIO_PIN_SET);
}

static void Tam_m_2(void) {
    HAL_GPIO_WritePin(m_1_GPIO_Port, m_1_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(m_2_GPIO_Port, m_2_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(m_3_GPIO_Port, m_3_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(m_4_GPIO_Port, m_4_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(m_5_GPIO_Port, m_5_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(m_6_GPIO_Port, m_6_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(m_7_GPIO_Port, m_7_Pin, GPIO_PIN_RESET);
}

static void Chin_m_2(void) {
    HAL_GPIO_WritePin(m_1_GPIO_Port, m_1_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(m_2_GPIO_Port, m_2_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(m_3_GPIO_Port, m_3_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(m_4_GPIO_Port, m_4_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(m_5_GPIO_Port, m_5_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(m_6_GPIO_Port, m_6_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(m_7_GPIO_Port, m_7_Pin, GPIO_PIN_RESET);
}

static void display7SEG_m_2(int num) {
    switch(num) {
        case 0: Khong_m_2(); break;
        case 1: Mot_m_2(); break;
        case 2: Hai_m_2(); break;
        case 3: Ba_m_2(); break;
        case 4: Bon_m_2(); break;
        case 5: Nam_m_2(); break;
        case 6: Sau_m_2(); break;
        case 7: Bay_m_2(); break;
        case 8: Tam_m_2(); break;
        case 9: Chin_m_2(); break;
    }
}

