#include"complex.h"
template <typename T>
Complex<T>::Complex(){

}
template <typename T>
Complex<T>::Complex(T real,Y imag):m_real(real),m_imag(imag){

}
template <typename T>
Complex<T>::getReal()const{
    return m_real;
}
template <typename T>
Complex<T>::getImag()const{
    return m_imag;
}
template<typename T>
void Complex<T>::display(){
    cout<<m_real,m_imag;
}
