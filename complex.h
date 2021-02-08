/**
 * @brief template program for complex numbers
 * 
 */
#define __COMPLEX_H

template<typename T>
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
  int getReal(T);
  /**
   * @brief Get the Real object
   * 
   * @return int 
   */
  
  
  int getImag(T);
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