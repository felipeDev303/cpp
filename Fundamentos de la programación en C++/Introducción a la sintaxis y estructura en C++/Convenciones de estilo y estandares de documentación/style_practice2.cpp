#include <iostream>

/**
 * @class Calculator
 * @brief Clase para realizar cálculos simples entre dos números.
 * 
 * Realiza la suma de dos números y clasifica el resultado
 * como número grande (>25) o pequeño.
 */
class Calculator {
private:
    int firstNumber;
    int secondNumber;

public:
    /**
     * @brief Realiza el cálculo de la suma y muestra el resultado.
     * 
     * Suma firstNumber y secondNumber, imprime el resultado y
     * clasifica si es un número grande o pequeño.
     */
    void performCalculation() {
        firstNumber = 10;
        secondNumber = 20;
        int result = firstNumber + secondNumber;
        
        std::cout << "Resultado: " << result << std::endl;
        
        if (result > 25) {
            std::cout << "Número grande" << std::endl;
        } else {
            std::cout << "Número pequeño" << std::endl;
        }
    }
};

int main() {
    Calculator calculator;
    calculator.performCalculation();
    return 0;
}