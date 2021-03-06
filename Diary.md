# Построение модели пневмоцилиндра
Прежде всего, необходимо построить модель пневмоцилиндра.

Пневматические цилиндры (поршневые пневмоцилиндры) – это механические устройства , которые используют энергию сжатого газа для создания силы при возвратно-поступательном линейном движении.  Такие устроства состоят из поршня, полости (в которой размещен поршень и шток), штока. Поршень использется для преобразования энергии сжатого воздуха в энергию поступательного движения, шток – соединенный с поршнем элемент для передачи перемещения и усилия к объекту воздействия. Также рассмотрим понятия прямого и обратного хода. Прямой ход –движение поршня, при подаче давления в поршневую полость, обратный ход производится при выходе газа из поршневой полости.

В данной работе используется пневмоцилиндр с пружинным возвратом. Его характерной особенностью является применение пружины для осуществления обратного хода.

Процесс работы поршня можно описать следующим образом: при подачи сжатого газа в полость его давление воздействует на поршень, заставляя его перемещаться, до тех пор, пока он не упрется в переднюю крышку. При выходе газа из полости поршень движется в обратном направлении под действием пружины.

Построим модель пневмоцилиндра в среде SimInTech. Создадим субмодель и соберем в ней следующую схему (Рис 1.1):
<p align="center">

  <img src="https://user-images.githubusercontent.com/95709737/152410090-b15a0705-2240-455e-a05f-362172d31fbe.png">
  <div align="center">
    Рис. 1.1. Схема моделирующая работу пневмоцилиндра
  </div>

</p>

На данной схеме можно увидеть следующие блоки: ГПС - Механический элемент поступательного движения (его настройки приведены на Рис. 1.2); ГПС - Пневмомеханический преобразователь поступательного типа (Рис. 1.3); ГПС - Пневматическая полость переменного объема (изотерма или адиабата), его настройки приведены на Рис. 1.4; два блока: ГПС - Пневматический турбулентный дроссель с регулированием по произвольному параметру, на Рис. 1.5. приведены настройки левого блока, на Рис. 1.6 - правого; два блока ГПС - Давление и температура газа (настройки левого блока приведены на Рис. 1.7, правого на Рис. 1.8).

<p align="center">

  <img src="https://user-images.githubusercontent.com/95709737/152430913-9595b698-2c14-457d-bce4-8a86784e9ec9.png">
  <div align="center">
    Рис. 1.2. Параметры блока: ГПС - Механический элемент поступательного движения
  </div>

</p>

<p align="center">

  <img src="https://user-images.githubusercontent.com/95709737/152431651-b3e62cd0-acd5-44fd-aaca-1f01218dd8ab.png">
  <div align="center">
    Рис. 1.3. Настройки блока: ГПС - Пневмомеханический преобразователь поступательного типа
  </div>

</p>

<p align="center">

  <img src="https://user-images.githubusercontent.com/95709737/152431726-f15b27b4-2be1-446a-9c02-de9ae4ff5a64.png">
  <div align="center">
    Рис. 1.4. Настройки блока: Пневматическая полость переменного объема (изотерма или адиабата)
  </div>

</p>

<p align="center">

  <img src="https://user-images.githubusercontent.com/95709737/152431814-5f0dd432-5e4b-4db0-aa98-1be1f8f25cd8.png">
  <div align="center">
    Рис. 1.5. Настройки левого блока ГПС - Пневматический турбулентный дроссель с регулированием по произвольному параметру
  </div>

</p>
<p align="center">

  <img src="https://user-images.githubusercontent.com/95709737/152432046-395646ec-fae0-4c58-acd6-b738a6bb565f.png">
  <div align="center">
    Рис. 1.6. Настройки правого блока ГПС - Пневматический турбулентный дроссель с регулированием по произвольному параметру
  </div>

</p>

<p align="center">

  <img src="https://user-images.githubusercontent.com/95709737/152432694-ffef1a51-7e4f-41ce-be26-5112f4086aef.png">
  <div align="center">
    Рис. 1.7. ГПС - Давление и температура газа, настройки левого блока
  </div>

</p>

<p align="center">

  <img src="https://user-images.githubusercontent.com/95709737/152432910-167bf94a-0ea8-4b22-a0f6-01fd6ce74960.png">
  <div align="center">
    Рис. 1.8.  ГПС - Давление и температура газа, настройки правого блока
  </div>

</p>

Блок ГПС - Механический элемент поступательного движения можно редактировать войдем в него (Рис. 1.9).

<p align="center">

  <img src="https://user-images.githubusercontent.com/95709737/152433005-0b5c7567-a0e8-493b-bda3-09b4f239e330.png">
  <div align="center">
    Рис. 1.9. Редактирование блока ГПС - Механический элемент поступательного движения 
  </div>

</p>

Изменим его для вывода подробной информации о положении поршня (Рис. 10): output - текущее положение поршня, X\_max - на этом выходе единица если поршень находится в крайним верхнем положении, X\_min - на нем единица если поршень находится в крайнем нижнем положении.

<p align="center">

  <img src="https://user-images.githubusercontent.com/95709737/152433359-499f189c-c526-46eb-8f6a-bb6b34eb78b4.png">
  <div align="center">
    Рис. 1.10. Измененный блок  ГПС - Механический элемент поступательного движения
  </div>

</p>

На Рис. 1.11, 1.12 приведены настройки констант для этих выходов.

<p align="center">

  <img src="https://user-images.githubusercontent.com/95709737/152433779-0c4dedfc-cc86-4bfd-bcb3-0c86d115e0b1.png">
  <div align="center">
    Рис. 1.11. Параметры константы для выхода X_max
  </div>

</p>

<p align="center">

  <img src="https://user-images.githubusercontent.com/95709737/152434288-886c03a7-b7f0-44f4-895f-d21b3375af77.png">
  <div align="center">
    Рис 1.12. Параметры константы для выхода X_min
  </div>

</p>

Сохраним измененную схему (Рис. 1.13).
<p align="center">

  <img src="https://user-images.githubusercontent.com/95709737/152434542-26db3fe5-7f0b-49fd-b079-f5f7d390bc20.png">
  <div align="center">
    Рис. 1.13. Сохранение изменений
  </div>

</p>

Протестируем пневмоцилиндр. Построим следующую схему (она приведена на Рис. 1.14). При подаче на вход единицы поршень пневоцилиндра постепенно перемещается в крайне верхнее положение, при подаче нуля пружина двигает поршень в исходное положение. Это видно на построеннном моделью графике (Рис. 1.15).
<p align="center">

  <img src="https://user-images.githubusercontent.com/95709737/152434749-d6cb281d-0805-4d00-afcd-bccaf9652836.png">
  <div align="center">
    Рис. 1.14. Схема для тестирования субмодели
  </div>

</p>

<p align="center">

  <img src="https://user-images.githubusercontent.com/95709737/152435003-aaf331b1-f0f0-48b7-ad9c-f5cc626c7ad8.png">
  <div align="center">
    Рис. 1.15. Тестирование пневмоцилиндра
  </div>

</p>

# 2. Построение модели автомата

Исходные данные (Вариант 141).

![image](https://user-images.githubusercontent.com/95709737/152453484-8a9d4f3f-19e1-449f-baca-c4fe52899728.png)

Где ![image](https://user-images.githubusercontent.com/95709737/152453597-f3f6931f-b773-40c3-b04a-0e8088cd6e85.png)- множество автоматов, ![image](https://user-images.githubusercontent.com/95709737/152453715-ac03a66e-ee29-4ae7-b270-8bec4172a74f.png)- последовательность переключений автоматов, устанавливает промежутки времени ![image](https://user-images.githubusercontent.com/95709737/152453783-9b52506e-e663-470e-876a-bef83c0e852e.png), за которые пневмоцилиндры должны переключится в данные состояния, ![image](https://user-images.githubusercontent.com/95709737/152453848-d63f7f2d-f298-4049-99c6-823def5d1135.png)- задает время нахождения в каждом состоянии. ![image](https://user-images.githubusercontent.com/95709737/152453914-b06b9bb6-761a-4ba5-9a3a-6eecda0d1186.png)- описывает переключения пневмоцилиндров если хотя бы один не успел перейти в данное состояние. Каждое переключение задается вектором ![image](https://user-images.githubusercontent.com/95709737/152454053-d6bebe4c-9407-4d9e-8702-1d1a3b7893ab.png), где ![image](https://user-images.githubusercontent.com/95709737/152454140-3aa2567c-f810-4cf8-a75c-d51c38580677.png)– шаг на котором произошла исключительная ситуация (он соответствует своему ![image](https://user-images.githubusercontent.com/95709737/152454223-a3a51f5b-fd36-40a4-8918-11b1c2d43952.png)), ![image](https://user-images.githubusercontent.com/95709737/152454338-9ccfb577-ed0e-46c4-a878-724000ef3a9c.png)– шаг, на который система перейдет в таком случае.

Процесс каждого переключения можно описать в виде автомата Мура (в нашем случае у автомата 19 состояний). Данный автомат приведен на Рис. 2.1.

Где G\_Ti - i-ое количество времени отведенное на перемещение поршня, G\_Di - i-ое количество времени отведенное на сохранение положения поршня, D - время, в течении которого поршень не подвижен, T - время в течении которого поршень подвижен.

Введем следующее обозначение (y1y2y3y4y5y6y7y8). Оно истинно когда положения пневмоцилиндров соответствуют переданным в скобкам положениям (yi равно единице для крайне верхнего положения поршня и нулю в противном случае) и ложно в противном случае. Например (10000000) соответствует высказыванию: «у первого пневмоцилиндра поршень находится в крайнем верхнем положении, у остальных – в нижнем».

<p align="center">

  <img src="https://user-images.githubusercontent.com/95709737/152454757-edc44316-9dc0-4031-aeb2-d025d996c368.png">
  <div align="center">
    Рис. 2.1. Диаграмма Мура
  </div>

</p>

# 3. Реализация автомата на языке СИ

Реализуем данный автомат. Функция init выполняет инициализацию автомата (листинг 3.1). Она принимает на вход массив структур, каждый каждая структура соответствует своему пневмоцилиндру и хранит входные, выходные значения и состояние.

Листинг 3.1 – Инициализация автомата
```
void init(struct Automate *engine, int size) {
    for (int i = 0; i < size; i++) {
        engine[i].state = STATE_0;
        engine[i].ticks = time(NULL);
        engine[i].output = 0;
        engine[i].at_bottom = 0;
        engine[i].at_top = 0;
        engine[i].can_change = 1;
    }
}
```

Работу автомата можно описать следующими функциями. Функция synchro выполняет работу с несколькими пневмоцилиндрами сразу, обеспечивая подачу команд на пневмоцилиндры и возможность обнаружения исключительных ситуации (листинг 3.2).

Листинг 3.2 – Подача сигнала
```
bool synchro(struct Automate *structs, bool commands[8][18], int h) {
    for (int i = 0; i < h; i++) {
        if (!update_state(structs + i, commands[i])) {
            bool success = false;
            switch ((structs + i)->state) {
                case STATE_2: //2
                    success = resolve_ex(structs, h, STATE_4, commands);
                    break;

                case STATE_3:
                    ALL_GOOD = 3222;
                    success = resolve_ex(structs, h, STATE_14, commands);
                    break;

                case STATE_5:
                    success = resolve_ex(structs, h, STATE_9, commands);
                    break;

                case STATE_6:
                    success = resolve_ex(structs, h, STATE_12, commands);
                    break;

                case STATE_7:
                    success = resolve_ex(structs, h, STATE_2, commands);
                    break;

            }

            if (!success) {
                set_err(structs, h);
                return false;
            }
            break;

        }
    }
    return true;

}
```
В функции update\_state (листинг 3.3) отражена зависимость последующего состояния автомата от текущего (состояния).

Листинг 3.3 – Связь между состояниями
```
bool update_state(struct Automate *engine, bool *commands) {
    switch (engine->state) {

        case STATE_0:
            //return control_chang_st(engine, STATE_0, commands[0]);
            return send_com(engine, STATE_0, commands[0]);

        case STATE_1:
            return send_com(engine, STATE_1, commands[1]);

        case STATE_2:
            return send_com(engine, STATE_2, commands[2]);

        case STATE_3:
            return send_com(engine, STATE_3, commands[3]);

        case STATE_4:
            return send_com(engine, STATE_4, commands[4]);

        case STATE_5:
            return send_com(engine, STATE_5, commands[5]);

        case STATE_6:
            return send_com(engine, STATE_6, commands[6]);

        case STATE_7:
            return send_com(engine, STATE_7, commands[7]);

        case STATE_8:
            return send_com(engine, STATE_8, commands[8]);

        case STATE_9:
            return send_com(engine, STATE_9, commands[9]);

        case STATE_10:
            return send_com(engine, STATE_10, commands[10]);

        case STATE_11:
            return send_com(engine, STATE_11, commands[11]);

        case STATE_12:
            return send_com(engine, STATE_12, commands[12]);

        case STATE_13:
            return send_com(engine, STATE_13, commands[13]);

        case STATE_14:
            return send_com(engine, STATE_14, commands[14]);

        case STATE_15:
            return send_com(engine, STATE_15, commands[15]);

        case STATE_16:
            return send_com(engine, STATE_16, commands[16]);

        case STATE_17:
            return send_com(engine, STATE_17, commands[17]);

        case STATE_18:
            return send_com(engine, STATE_18, commands[0]);

    }
    return false;
}
```
Функция send\_com фактически осуществляет задержку цилиндра в заданном положении (листинг 3.4).

Листинг 3.4 – Функция задержки
```
bool send_com(struct Automate *engine, int state, bool com) {
    if (engine->can_change) {
        return control_chang_st(engine, state, com);
    } else if (A_TIME >= G_D[state]) { //
        engine->can_change = true;
        engine->ticks = time(NULL);
        return control_chang_st(engine, state, com);
    }
    return true;
}
```
Функция control\_chang\_st управляет подачей выходного сигнала и сменой состояний (листинг 3.5).

Листинг 3.5 – Функция управления
```
bool control_chang_st(struct Automate *engine, enum States start_state, bool com) {
    int next_state = engine->state + 1;
    if (engine->state == STATE_18) next_state = STATE_1;
    if (engine->state == start_state && A_TIME > G_T[next_state]) // ????
        return false;


    if ((engine->at_top * com || engine->at_bottom * !com)) {
        engine->ticks = time(NULL);
        engine->state = next_state;
        //ALL_GOOD = next_state;
        engine->can_change = false;
        return true;
    }

    if (engine->at_bottom || engine->at_top) {
        engine->output = com;
        engine->ticks = time(NULL);
        return true;
    } else {
        engine->output = com;
    }
    return true;
}
```
Также присутствует функция, обрабатывающая исключительные ситуации (листинг 3.6). Она выполняется если по каким-либо причинам один или несколько пневмоцилиндров не успели сменить состояние.

Листинг 3.6 – Функция обработки исключения
```
bool resolve_ex(struct Automate *structs, const int size, const int start_st, bool commands[8][18]) {
    bool ext = true;
    for (int i = 0; i < size; i++) {
        (structs + i)->state = start_st;
        (structs + i)->ticks = time(NULL);
        (structs + i)->can_change = true;
    }
    for (int i = 0; i < size; i++) {
        ext = update_state((structs + i), commands[i]);
        if (!ext) return false;
    }

    return true;
}
```
В функции set\_switch\_times производится инициализация массивов, хранящих временные промежутки (листинг 3.7). Обычно глобальные переменные нежелательны в коде так как небезопастны. Однако их можно использовать в случаях, когда мы точно знаем, что разрабатываемая программа не будет слижком сложной по своей струтуре и глобальные переменные не окажут сильнного влияния на написание кода. В данном случае использование глобальных переменных обусловлено их большей наглядностью для данной задачи по сравнению с макросами. 

Листинг 3.7 – Инициализация массива с временными отрезками
```
bool set_switch_times() {
    const int d = 1;
    G_T[0] = -1;
    G_D[0] = -1;
    G_T[4 + d] = G_T[15 + d] = G_T[16 + d] = 120;
    G_T[1 + d] = G_T[2 + d] = G_T[3 + d] = G_T[5 + d] = G_T[11 + d] = G_T[14 + d] = 56;
    G_T[18] = G_T[0 + d] = G_T[8 + d] = G_T[9 + d] = 60;
    G_T[7 + d] = G_T[10 + d] = G_T[12 + d] = G_T[13 + d] = 45;
    G_T[6 + d] = 30;

    G_D[2 + d] = G_D[3 + d] = 33;
    G_D[5 + d] = G_D[10 + d] = G_D[11 + d] = G_D[15 + d] = 70;
    G_D[4 + d] = G_D[8 + d] = G_D[9 + d] = G_D[13 + d] = G_D[14 + d] = G_D[16 + d] = 60;
    G_D[6 + d] = G_D[7 + d] = 45;
    G_D[18] = G_D[0 + d] = G_D[1 + d] = G_D[12 + d] = 78;
    //G_T[2] = 1;
    //G_T[4] = 2;
    return true;
}
```
# 4. Тестирование автомата в среде SimInTech

Соберем схему для генерации кода (Рис. 4.1).

<p align="center">

  <img src="https://user-images.githubusercontent.com/95709737/152457988-e0caf8b7-d020-4dc8-8a79-d5fde6cb8d9e.png">
  <div align="center">
    Рис. 4.1. Схема для генерации кода
  </div>

</p>

В заголовке модуля объявляется массив структур engine, элементы которого соответствуют своим пневмоцилиндрам (Листинг 4.1). Здесь также инициализируется двумерный массив com, в котором построчно заносятся команды для каждого пневмоцилиндра. Свяжем входы и выходы блока с соответствующими им полями структур в основной секции кода (Листинг 4.2).

Листинг 4.1 – Заголовок модуля
```
#include "autoamates.h"
#include "autoamates.c"
 struct Automate engine[8];
 
 bool com[8][18] = {
            {
                MOVE_DOWN,
                MOVE_UP,
                MOVE_DOWN,
                MOVE_UP,
                MOVE_DOWN,
                MOVE_DOWN,
                MOVE_UP,
                MOVE_UP,
                MOVE_DOWN,
                MOVE_DOWN,
                MOVE_DOWN,
                MOVE_UP,
                MOVE_UP,
                MOVE_DOWN,
                MOVE_DOWN,
                MOVE_DOWN,
                MOVE_UP,
                MOVE_DOWN
            },

            {
                MOVE_DOWN,
                MOVE_UP,
                MOVE_DOWN,
                MOVE_UP,
                MOVE_UP,
                MOVE_DOWN,
                MOVE_DOWN,
                MOVE_DOWN,
                MOVE_UP,
                MOVE_DOWN,
                MOVE_UP,
                MOVE_UP,
                MOVE_DOWN,
                MOVE_UP,
                MOVE_DOWN,
                MOVE_UP,
                MOVE_DOWN,
                MOVE_UP,
            },

            {
                MOVE_DOWN,
                MOVE_UP,
                MOVE_DOWN,
                MOVE_UP,
                MOVE_UP,
                MOVE_UP,
                MOVE_DOWN,
                MOVE_DOWN,
                MOVE_UP,
                MOVE_UP,
                MOVE_DOWN,
                MOVE_UP,
                MOVE_UP,
                MOVE_DOWN,
                MOVE_DOWN,
                MOVE_UP,
                MOVE_UP,
                MOVE_DOWN,
            },
            //4
            {
                MOVE_DOWN,
                MOVE_UP,
                MOVE_DOWN,
                MOVE_UP,
                MOVE_UP,
                MOVE_UP,
                MOVE_DOWN,
                MOVE_UP,
                MOVE_DOWN,
                MOVE_DOWN,
                MOVE_UP,
                MOVE_DOWN,
                MOVE_DOWN,
                MOVE_UP,
                MOVE_UP,
                MOVE_DOWN,
                MOVE_UP,
                MOVE_DOWN,

            },
            //5
            {
                MOVE_DOWN,
                MOVE_UP,
                MOVE_UP,
                MOVE_DOWN,
                MOVE_UP,
                MOVE_DOWN,
                MOVE_UP,
                MOVE_UP,
                MOVE_DOWN,
                MOVE_DOWN,
                MOVE_UP,
                MOVE_UP,
                MOVE_UP,
                MOVE_DOWN,
                MOVE_DOWN,
                MOVE_UP,
                MOVE_DOWN,
                MOVE_UP,
            },
            //6
            {
               MOVE_DOWN,
               MOVE_UP,
               MOVE_DOWN,
               MOVE_UP,
               MOVE_UP,
               MOVE_UP,
               MOVE_DOWN,
               MOVE_DOWN,
               MOVE_UP,
               MOVE_DOWN,
               MOVE_UP,
               MOVE_DOWN,
               MOVE_DOWN,
               MOVE_UP,
               MOVE_UP,
               MOVE_DOWN,
               MOVE_UP,
               MOVE_DOWN,
            },
            //7
            {
                MOVE_DOWN,
                MOVE_UP,
                MOVE_DOWN,
                MOVE_UP,
                MOVE_DOWN,
                MOVE_DOWN,
                MOVE_UP,
                MOVE_UP,
                MOVE_DOWN,
                MOVE_UP,
                MOVE_DOWN,
                MOVE_UP,
                MOVE_UP,
                MOVE_DOWN,
                MOVE_DOWN,
                MOVE_DOWN,
                MOVE_UP,
                MOVE_DOWN,
            },
            //8
            {
                MOVE_DOWN,
                MOVE_UP,
                MOVE_UP,
                MOVE_DOWN,
                MOVE_UP,
                MOVE_DOWN,
                MOVE_UP,
                MOVE_UP,
                MOVE_DOWN,
                MOVE_UP,
                MOVE_UP,
                MOVE_UP,
                MOVE_UP,
                MOVE_DOWN,
                MOVE_DOWN,
                MOVE_UP,
                MOVE_UP,
                MOVE_DOWN,

            }

    };
```

Листинг 4.2 – Основная секция кода
```
engine[0].at_bottom = (bool) %input:0%;
engine[0].at_top = (bool) %input:1%;
engine[1].at_bottom = (bool) %input:2%;
engine[1].at_top = (bool) %input:3%;
engine[2].at_bottom = (bool) %input:4%;
engine[2].at_top = (bool) %input:5%;
engine[3].at_bottom = (bool) %input:6%;
engine[3].at_top = (bool) %input:7%;
engine[4].at_bottom = (bool) %input:8%;
engine[4].at_top = (bool) %input:9%;
engine[5].at_bottom = (bool) %input:10%;
engine[5].at_top = (bool) %input:11%;
engine[6].at_bottom = (bool) %input:12%;
engine[6].at_top = (bool) %input:13%;
engine[7].at_bottom = (bool) %input:14%;
engine[7].at_top = (bool) %input:15%;

synchro(engine, com, 8);
%out:0% = engine[0].output;
%out:1% = engine[1].output;
%out:2% = engine[2].output;
%out:3% = engine[3].output;
%out:4% = engine[4].output;
%out:5% = engine[5].output;
%out:6% = engine[6].output;
%out:7% = engine[7].output;
%out:8% = ALL_GOOD;
```

Инициализация массива engine выполняется в блоке «Значения переменных по умолчанию». Также здесь выполняется инициализация массивов временных промежутков (Листинг 4.3).

Листинг 4.3. блок «Значения переменных по умолчанию»
```
init(engine, 8);
set_switch_times();
```

Соберем схему для тестирования автомата (Рис. 4.3). Настроим блок DLL (Рис. 4.4).
<p align="center">

  <img src="https://user-images.githubusercontent.com/95709737/152460168-c0e912eb-3349-4073-b785-d4958600f073.png">
  <div align="center">
    Рис. 4.3. Схема для тестирования автомата
  </div>

</p>

<p align="center">

  <img src="https://user-images.githubusercontent.com/95709737/152460674-ef9555a9-7ed3-4923-97b6-cc1158e00291.png">
  <div align="center">
    Рис. 4.4. Настройка блока DLL
  </div>

</p>

Протестируем работу цилиндров в «штатном режиме» (когда все пневмоцилиндры успевают сменить состояние). Ниже приведены графики положения цилиндров (Рис. 4.5) и управляющих сигналов (Рис. 4.6). Черной линеей отделен первая итерация цикла от второй.

<p align="center">

  <img src="https://user-images.githubusercontent.com/95709737/152460541-daf8b0e5-e9e6-4ad8-afce-a21c0c68552c.png">
  <div align="center">
    Рис. 4.5. Графики положений цилиндров при работе в «штатном режиме»
  </div>

</p>

<p align="center">

  <img src="https://user-images.githubusercontent.com/95709737/152460598-a0e86844-5a46-4a5b-bba2-b3fae41c0ad4.png">
  <div align="center">
    Рис. 4.6. Графики управляющих сигналов при работе в «штатном режиме»
  </div>

</p>

Теперь вызовем исключение. Пусть на первом шаге первый цилиндр не смог переключится. Эту ситуацию можно смоделировать присвоив ячейке G\_T[2] единицу (цилиндры не успеют переключиться за столь малый срок). Сделать это можно прямо в функции set\_switch\_times (листинг 3.7) - достаточно снять раскомментировать нужную строку. Получим следующие графики (Рис. 4.7 – 4.8). Как видно все цилиндры перешли в состояние ошибки, так как все поршни переместились вниз и все сигналы, подаваемые на цилиндры равны нулю.

<p align="center">

  <img src="https://user-images.githubusercontent.com/95709737/152460834-a460c29b-7f22-4234-842b-0c2908dbc715.png">
  <div align="center">
    Рис. 4.7. Обработка критической для работы системы ошибки
  </div>

</p>

<p align="center">

  <img src="https://user-images.githubusercontent.com/95709737/152461155-a4891c07-e4f5-49bb-bb47-35d3be514bd8.png">
  <div align="center">
    Рис. 4.8. Графики управляющих сигналов при возникновении «критической ошибки»
  </div>

</p>

Теперь вызовем исключение на третьем шаге (Рис. 4.9 – 4.10). Для этого присвоим ячейке массива G\_T[4] значение равное двум (это также можно сделать раскомментировав в функции set\_switch\_times соответствующуюстроку). По графикам видно, что автомат перешел c третьего на четырнадцатый шаг.
<p align="center">

  <img src="https://user-images.githubusercontent.com/95709737/152461215-63bcaf8a-2fd2-433a-be4e-69da38f257c0.png">
  <div align="center">
    Рис. 4.9. Положения цилиндров в момент смены шага из-за ошибки
  </div>

</p>

<p align="center">

  <img src="https://user-images.githubusercontent.com/95709737/152461346-354c718c-4b95-438d-a8a7-59a3246f32e5.png">
  <div align="center">
    Рис. 4.10. Графики управляющих сигналов при смене шага вследствие ошибки
  </div>

</p>

# ЗАКЛЮЧЕНИЕ

В результате выполнения курсовой работы были приобретены навыки построения управляющей автоматной модели по известным времяным промежуткам. Был написан автомат на языке СИ, осуществляющий управление восьмью пневмоцилиндрами.

#

# СПИСОК ИСПОЛЬЗОВАННЫХ ИНФОРМАЦИОННЫХ ИСТОЧНИКОВ

⦁ Хлебников А. А. Лекции. Автоматное программирование систем управления, РТУ МИРЭА, 2021 уч. г.

⦁ Пневматический привод [электронный ресурс] ― URL: https://ru.wikipedia.org/wiki/Пневматический\_привод (Дата обращения: 20.04.2021)

⦁ Пневмоцилиндры ― назначение, использование и особенности конструкции [электронный ресурс] ― URL: https://kuzvesti.ru/kultura-i-iskusstvo/pnevmotsilindry-naznachenie-ispolzovanie-i-osobennosti-konstruktsii.html (Дата обращения: 20.04.2021)
