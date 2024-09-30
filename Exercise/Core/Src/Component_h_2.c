
#include "main.h"

static void Khong_h_2(void) {
    HAL_GPIO_WritePin(h_2_1_GPIO_Port, h_2_1_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(h_2_2_GPIO_Port, h_2_2_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(h_2_3_GPIO_Port, h_2_3_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(h_2_4_GPIO_Port, h_2_4_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(h_2_5_GPIO_Port, h_2_5_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(h_2_6_GPIO_Port, h_2_6_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(h_2_7_GPIO_Port, h_2_7_Pin, GPIO_PIN_SET);
}

static void Mot_h_2(void) {
    HAL_GPIO_WritePin(h_2_1_GPIO_Port, h_2_1_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(h_2_2_GPIO_Port, h_2_2_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(h_2_3_GPIO_Port, h_2_3_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(h_2_4_GPIO_Port, h_2_4_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(h_2_5_GPIO_Port, h_2_5_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(h_2_6_GPIO_Port, h_2_6_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(h_2_7_GPIO_Port, h_2_7_Pin, GPIO_PIN_SET);
}

static void Hai_h_2(void) {
    HAL_GPIO_WritePin(h_2_1_GPIO_Port, h_2_1_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(h_2_2_GPIO_Port, h_2_2_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(h_2_3_GPIO_Port, h_2_3_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(h_2_4_GPIO_Port, h_2_4_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(h_2_5_GPIO_Port, h_2_5_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(h_2_6_GPIO_Port, h_2_6_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(h_2_7_GPIO_Port, h_2_7_Pin, GPIO_PIN_RESET);
}

static void Ba_h_2(void) {
    HAL_GPIO_WritePin(h_2_1_GPIO_Port, h_2_1_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(h_2_2_GPIO_Port, h_2_2_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(h_2_3_GPIO_Port, h_2_3_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(h_2_4_GPIO_Port, h_2_4_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(h_2_5_GPIO_Port, h_2_5_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(h_2_6_GPIO_Port, h_2_6_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(h_2_7_GPIO_Port, h_2_7_Pin, GPIO_PIN_RESET);
}

static void Bon_h_2(void) {
    HAL_GPIO_WritePin(h_2_1_GPIO_Port, h_2_1_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(h_2_2_GPIO_Port, h_2_2_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(h_2_3_GPIO_Port, h_2_3_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(h_2_4_GPIO_Port, h_2_4_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(h_2_5_GPIO_Port, h_2_5_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(h_2_6_GPIO_Port, h_2_6_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(h_2_7_GPIO_Port, h_2_7_Pin, GPIO_PIN_RESET);
}

static void Nam_h_2(void) {
    HAL_GPIO_WritePin(h_2_1_GPIO_Port, h_2_1_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(h_2_2_GPIO_Port, h_2_2_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(h_2_3_GPIO_Port, h_2_3_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(h_2_4_GPIO_Port, h_2_4_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(h_2_5_GPIO_Port, h_2_5_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(h_2_6_GPIO_Port, h_2_6_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(h_2_7_GPIO_Port, h_2_7_Pin, GPIO_PIN_RESET);
}

static void Sau_h_2(void) {
    HAL_GPIO_WritePin(h_2_1_GPIO_Port, h_2_1_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(h_2_2_GPIO_Port, h_2_2_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(h_2_3_GPIO_Port, h_2_3_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(h_2_4_GPIO_Port, h_2_4_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(h_2_5_GPIO_Port, h_2_5_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(h_2_6_GPIO_Port, h_2_6_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(h_2_7_GPIO_Port, h_2_7_Pin, GPIO_PIN_RESET);
}

static void Bay_h_2(void) {
    HAL_GPIO_WritePin(h_2_1_GPIO_Port, h_2_1_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(h_2_2_GPIO_Port, h_2_2_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(h_2_3_GPIO_Port, h_2_3_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(h_2_4_GPIO_Port, h_2_4_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(h_2_5_GPIO_Port, h_2_5_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(h_2_6_GPIO_Port, h_2_6_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(h_2_7_GPIO_Port, h_2_7_Pin, GPIO_PIN_SET);
}

static void Tam_h_2(void) {
    HAL_GPIO_WritePin(h_2_1_GPIO_Port, h_2_1_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(h_2_2_GPIO_Port, h_2_2_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(h_2_3_GPIO_Port, h_2_3_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(h_2_4_GPIO_Port, h_2_4_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(h_2_5_GPIO_Port, h_2_5_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(h_2_6_GPIO_Port, h_2_6_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(h_2_7_GPIO_Port, h_2_7_Pin, GPIO_PIN_RESET);
}

static void Chin_h_2(void) {
    HAL_GPIO_WritePin(h_2_1_GPIO_Port, h_2_1_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(h_2_2_GPIO_Port, h_2_2_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(h_2_3_GPIO_Port, h_2_3_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(h_2_4_GPIO_Port, h_2_4_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(h_2_5_GPIO_Port, h_2_5_Pin, GPIO_PIN_SET);
    HAL_GPIO_WritePin(h_2_6_GPIO_Port, h_2_6_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(h_2_7_GPIO_Port, h_2_7_Pin, GPIO_PIN_RESET);
}

static void display7SEG_h_2(int num) {
    switch(num) {
        case 0: Khong_h_2(); break;
        case 1: Mot_h_2(); break;
        case 2: Hai_h_2(); break;
        case 3: Ba_h_2(); break;
        case 4: Bon_h_2(); break;
        case 5: Nam_h_2(); break;
        case 6: Sau_h_2(); break;
        case 7: Bay_h_2(); break;
        case 8: Tam_h_2(); break;
        case 9: Chin_h_2(); break;
    }
}

