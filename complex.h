/**
 * @brief template program for complex numbers
 * 
 */
#ifndef __COMPLEX_H
#define __COMPLEX_H

template<class T>
class Complex {
  T m_real;
  T m_image;
  public:
  Complex();
  /**
   * @brief Construct a new Complex object
   * 
   */
  Complex(T,T);
  /**
   * @brief Initialize parameters
   * 
   */
  T getReal(T);
  /**
   * @brief Get the Real object
   * 
   * @return int 
   */
  
  
  T getImag(T);
  /**
   * @brief Get the Imag object
   * 
   */
  void display();
  /**
   * @brief function to display Real and Imaginary values
   * 
   */
};

#endif