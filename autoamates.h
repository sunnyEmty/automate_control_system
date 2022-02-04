//
// Created by egdan on 01.05.2021.
//

#ifndef PRACTICE9_AUTOAMATES_H
#define PRACTICE9_AUTOAMATES_H
#if defined(__cplusplus)
extern "C" {
#endif

#include "stdbool.h"
#include "time.h"
#define MOVE_UP 1
#define MOVE_DOWN 0
#define A_TIME time(NULL) - engine->ticks

enum States {
    STATE_0 = 0,
    STATE_1 = 1,
    STATE_2 = 2,
    STATE_3 = 3,
    STATE_4 = 4,
    STATE_5 = 5,
    STATE_6 = 6,
    STATE_7 = 7,
    STATE_8 = 8,
    STATE_9 = 9,
    STATE_10 = 10,
    STATE_11 = 11,
    STATE_12 = 12,
    STATE_13 = 13,
    STATE_14 = 14,
    STATE_15 = 15,
    STATE_16 = 16,
    STATE_17 = 17,
    STATE_18 = 18,
    S_ERR = -1,

};


// Струкура с параметрами автомата
struct Automate {
    int state;              // Номер текущего состояния
    bool at_bottom;         // Равен 1, если пневмоцилиндр находится в крайнем нижнем положении
    bool at_top;            // Равен 1, если пневмоцилиндр находится в крайнем верхнем положении
    bool output;            // Выходной управляющий сигнал
    long int ticks;         // Текущее время в секундах
    bool can_change;        // Если равен 1, то у автомата есть возможность
};

// Инициализация массивов с временными отрезками
bool set_switch_times();

// Инициализация массива автоматов engine размера size
void init(struct Automate* engine, int size);

// Обновление состояний пневмоцилиндров
bool synchro(struct Automate* structs, bool commands[8][18], int h);

// Вызывается для каждого автомата - engine (не массив) в функции synchro.
// На вход также получает массив команд (1 - вверх, 0 - вниз)
// Определяет последовательность смены состояний при
// работе в штатном режиме
bool update_state(struct Automate* engine, bool* commands);

// Осуществляет задержку цилиндра engine в заданном положении
// int state, bool com нужны в control_chang_st
bool send_com(struct Automate* engine, int state, bool com);

// Выполняет обработку возникших исключений в автоматах structs (количество которых равно size)
// start_st - предыдущее состояние автомата (до смены), commands - массив команд
bool resolve_ex(struct Automate* structs, const int size, const int start_st, bool commands[8][18]);

// Управляет подачей выходного сигнала и сменой состояний автомата
bool control_chang_st(struct Automate* engine, enum States start_state, bool com);

// Останавливает автоматы (процесс смены состояния) и переводит его в ошибочное
// Состояение если исключение обработать не удалось
void set_err(struct Automate* structs, int size);


#if defined(__cplusplus)
}
#endif
#endif //PRACTICE9_AUTOAMATES_H
