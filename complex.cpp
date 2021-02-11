#include"complex.h"
#include<iostream>
template <class T>
Complex<T>::Complex():m_real(0),m_image(0){}

template <class T>
Complex<T>::Complex(T real,T imag):m_real(real),m_imag(imag){

}
template <class T>
T Complex<T>::getReal(){
    return m_real;
}
template <class T>
T Complex<T>::getImag(){
    return m_imag;
}

template<class T>
void Complex<T>::display(){
    std::cout<<getReal()<<getImag();
}
