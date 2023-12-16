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

// ���� MyBaseException � ������� ������ ��� ��� ���������� �������� � �������.
class MyBaseException : public std::exception {
public:
    // �������������� ������� what() ��� ���������� ����� ��������� ��������
    virtual const char* what() const noexcept override {
        return "MyBaseException occurred";
    }
};

// ���� EmptyList ������������ �� MyBaseException � ����������� ������� ��� ���������� ������.
class EmptyList : public MyBaseException {
public:
    // ����������� �����
    EmptyList() { }

    // �������������� ������� what() ��� ���������� ����� ��������� ��������
    const char* what() const noexcept {
        return "This tape is empty!";
    }
};

// ���� OpenMyFile ������������ �� MyBaseException � ����������� ������� ��� ������� �������� �����.
class OpenMyFile : public MyBaseException {
public:
    // ����������� �����
    OpenMyFile() { }

    // �������������� ������� what() ��� ���������� ����� ��������� ��������
    const char* what() const noexcept {
        return "File opening error\nThis file does not seem to exist";
    }
};

// ���� OpenFileWithTxt ������������ �� MyBaseException � ����������� ������� ��� ������������� ���� ����� � ����������� .txt.
class OpenFileWithTxt : public MyBaseException {
public:
    // ����������� �����
    OpenFileWithTxt() { }

    // �������������� ������� what() ��� ���������� ����� ��������� ��������
    const char* what() const noexcept {
        return "Incorrect file name\nThe extension must be '.txt'";
    }
};

// ���� EmptyTable ������������ �� MyBaseException � ����������� ������� ��� �������� �������.
class EmptyTable : public MyBaseException {
public:
    // ����������� �����
    EmptyTable() { }

    // �������������� ������� what() ��� ���������� ����� ��������� ��������
    const char* what() const noexcept {
        return "Table is empty";
    }
};


// ���� NumberExeption ������������ �� MyBaseException � ����������� ������� ��� �������,
// ���'������ � ��������� ���������� �� ���������� � �������.
class NumberExeption : public MyBaseException {
public:
    // ����������� �����, ���� ������ ����� �� ����������� ��� �������.
    NumberExeption(const std::string& message) : errorMessage(message) {}

    // �������������� ������� what() ��� ���������� ����� ��������� ��������.
    const char* what() const throw() {
        return errorMessage.c_str();
    }

private:
    std::string errorMessage;  // ����� ��� ��������� ����������� ��� �������.
};

// ���� NegativeExeption ������������ �� MyBaseException � ����������� ������� ��� �������,
// ���'������ � ��'������ �������.
class NegativeExeption : public MyBaseException {
public:
    // ����������� �����, ���� ������ ����� �� ����������� ��� �������.
    NegativeExeption(const std::string& message) : errorMessage(message) {}

    // �������������� ������� what() ��� ���������� ����� ��������� ��������.
    const char* what() const throw() {
        return errorMessage.c_str();
    }

private:
    std::string errorMessage;  // ����� ��� ��������� ����������� ��� �������.
};
