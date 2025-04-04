# Проект - Вечный календарь

Проект разработан в рамках дисциплины "Алгоритмизация и программирование" студентами Российского экономического университета им. Г.В. Плеханова. Программа позволяет отображать календарь для любого месяца в диапазоне с 1919 по 2069 год.

## 📋 Требования
- Язык программирования: C++
- Ограничение на длину кода: ≤40 строк на участника
- Диапазон ввода года: 1919–2069
- Обработка некорректного ввода (числа, символы, вне диапазона)

## 🛠 Функционал
- Проверка високосного года (`is_leap_year`)
- Определение количества дней в месяце (`get_days_in_month`)
- Расчет дня недели для первого дня месяца (`get_day_of_week`)
- Валидация ввода (`data_filtering`)
- Вывод календаря в консоль (`print_calendar`)

## 📈 Блок-схема
![image](https://github.com/user-attachments/assets/a8fefca0-4a1d-4e61-834c-e9520cc71c7f)


## 📅 Пример использования
```
Введите год (1919-2069): 2024
Введите месяц (1-12): 2

ФЕВРАЛЬ 2024
ПН     ВТ     СР     ЧТ     ПТ     СБ     ВС
                     1      2      3      4
5      6      7      8      9      10     11
12     13     14     15     16     17     18
19     20     21     22     23     24     25
26     27     28     29
```

## 🧑💻 Участники проекта
* Архитектор
* Менеджер проекта
* Тестировщик
