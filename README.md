# Построение автоматной модели управления пневмоцилиндрами по заданной управляющей последовательности
Целью данной работы является построение модели пневмоцилиндра в среде SimInTech и осуществление управления восьмью пневмоцилиндрами в соответстии с заданной управляющей последовательностью при помощи автомата реализованного на языке Си.
## Сборка проекта
Сборка проекта осуществляется компилятором MinGW-64 с утилитой CMake
1. Установить [MSYS2](https://www.msys2.org/)
2. Обновить MSYS2
```
pacman -Syuu
```
3. Установить необходимые пакеты (cmake + MinGW-64)
```
pacman -S --needed base-devel mingw-w64-x86_64-toolchain mingw-w64-x86_64-cmake git
```
4. Установить среду динамического моделирования [SimInTech](https://simintech.ru/).
5. Указать путь к компилятору в bat-файле build.bat (...\SimInTech64\bin\CodeTemplates\MinGW_DLL_x64\build.bat) изменив строку начинающуюся с "set path =" следующим образом.
```
set path=%path%;путь_к_каталогу_bin_компилятора
```
6. Открыть файл G_K_A.prt. Во вкладке "Инструменты" выбрать пункт "Сгенерировать программу" для сборки проекта.
7. Можно протестировать работу полученной dll в файле K_A.prt.

## Содержимое файлов
1. autoamates.h, autoamates.c - сама автоматная модель управления пневмоцилиндрами
2. G_K_A.prt - схема для сборки модели
3. K_A.prt - схема для тестирования модели
4. [Diary.md](https://github.com/sunnyEmty/automate_control_system/blob/main/Diary.md) - содержит в себе детальное описание структуры модели
