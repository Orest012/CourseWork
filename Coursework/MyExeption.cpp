#include <cmath>
#include <fstream>
#include <map>
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <Windows.h>
#include <vcclr.h>
#include <fstream>
#include <msclr/marshal_cppstd.h>
#include <stdexcept>
#include <iomanip>

using namespace std;

// Клас MyBaseException є базовим класом для усіх виняткових ситуацій у програмі.
class MyBaseException : public std::exception {
public:
    // Перевизначення функції what() для повернення опису виняткової ситуації
    virtual const char* what() const noexcept override {
        return "MyBaseException occurred";
    }
};

// Клас EmptyList унаслідований від MyBaseException і представляє виняток для порожнього списку.
class EmptyList : public MyBaseException {
public:
    // Конструктор класу
    EmptyList() { }

    // Перевизначення функції what() для повернення опису виняткової ситуації
    const char* what() const noexcept {
        return "This tape is empty!";
    }
};

// Клас OpenMyFile унаслідований від MyBaseException і представляє виняток для помилки відкриття файлу.
class OpenMyFile : public MyBaseException {
public:
    // Конструктор класу
    OpenMyFile() { }

    // Перевизначення функції what() для повернення опису виняткової ситуації
    const char* what() const noexcept {
        return "File opening error\nThis file does not seem to exist";
    }
};

// Клас OpenFileWithTxt унаслідований від MyBaseException і представляє виняток для неправильного імені файлу з розширенням .txt.
class OpenFileWithTxt : public MyBaseException {
public:
    // Конструктор класу
    OpenFileWithTxt() { }

    // Перевизначення функції what() для повернення опису виняткової ситуації
    const char* what() const noexcept {
        return "Incorrect file name\nThe extension must be '.txt'";
    }
};

// Клас EmptyTable унаслідований від MyBaseException і представляє виняток для порожньої таблиці.
class EmptyTable : public MyBaseException {
public:
    // Конструктор класу
    EmptyTable() { }

    // Перевизначення функції what() для повернення опису виняткової ситуації
    const char* what() const noexcept {
        return "Table is empty";
    }
};


// Клас NumberExeption унаслідований від MyBaseException і представляє виняток для помилок,
// пов'язаних з числовими операціями та операціями з числами.
class NumberExeption : public MyBaseException {
public:
    // Конструктор класу, який приймає рядок як повідомлення про помилку.
    NumberExeption(const std::string& message) : errorMessage(message) {}

    // Перевизначення функції what() для повернення опису виняткової ситуації.
    const char* what() const throw() {
        return errorMessage.c_str();
    }

private:
    std::string errorMessage;  // Змінна для зберігання повідомлення про помилку.
};

// Клас NegativeExeption унаслідований від MyBaseException і представляє виняток для помилок,
// пов'язаних з від'ємними числами.
class NegativeExeption : public MyBaseException {
public:
    // Конструктор класу, який приймає рядок як повідомлення про помилку.
    NegativeExeption(const std::string& message) : errorMessage(message) {}

    // Перевизначення функції what() для повернення опису виняткової ситуації.
    const char* what() const throw() {
        return errorMessage.c_str();
    }

private:
    std::string errorMessage;  // Змінна для зберігання повідомлення про помилку.
};
