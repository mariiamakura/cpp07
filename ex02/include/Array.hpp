#pragma once

#include <iostream>
#include <exception>

template <typename T>
class Array {
    private:
        T *_arrHead;
        unsigned int _arrSize;
    public:
        Array();
        Array(unsigned int n);
        Array(Array &src);
        Array &operator=(Array const &src);
        ~Array();

        T &operator[](unsigned int n) throw(std::exception);
        unsigned int size(void);

        class OutOfRange : public std::exception {
            public:
                const char *what() const throw();
        };

        //for testing
        void printArr();
};


template <typename T>
void Array<T>::printArr() {
    for (unsigned int i = 0; i < this->_arrSize; i++)
        std::cout << " [" << i << "]: "<< this->_arrHead[i];
}

template <typename T>
const char *Array<T>::OutOfRange::what() const throw() {
    return ("Index out of range");
}

template <typename T>
Array<T>::Array() {
    this->_arrHead = new T[0];
    this->_arrSize = 0;
    std::cout << "Array default constructor called" << std::endl;
}

template <typename T>
Array<T>::Array(unsigned int n) {
    this->_arrHead = new T[n];
    this->_arrSize = n;
    std::cout << "Array constructor with arg called" << std::endl;
}

template <typename T>
T &Array<T>::operator[](unsigned int n) throw(std::exception) {
    if (n >= this->_arrSize) {
        throw Array<T>::OutOfRange();
    }
    return _arrHead[n];
}

template <typename T>
Array<T>::Array(Array<T> &src) {
    this->_arrHead = new T[src.size()];
    this->_arrSize = src.size();
    for (unsigned  int i = 0; i < src.size(); i++) {
            this->_arrHead[i] =src._arrHead[i];
    }
    std::cout << "Array COPY constructor with arg called" << std::endl;
}

template <typename T>
Array<T> &Array<T>::operator=(const Array<T> &src) {
    if (this != &src) {
        delete[] this->_arrHead;
        this->_arrHead = new T[src._arrSize];
        this->_arrSize = src._arrSize;
        for (unsigned  int i = 0; i < src._arrSize; i++) {
            this->_arrHead[i] =src._arrHead[i];
        }
    }
    std::cout << "Array COPY OPERATOR= constructor with arg called" << std::endl;
    return (*this);
}


template <typename T>
Array<T>::~Array() {
    delete[] this->_arrHead;
    std::cout << "Array destructor called" << std::endl;
}

template <typename T>
unsigned int Array<T>::size() {
    return (this->_arrSize);
}


