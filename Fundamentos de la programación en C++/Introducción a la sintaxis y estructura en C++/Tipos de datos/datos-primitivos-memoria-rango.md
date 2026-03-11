# Tipos de datos primitivos, memoria y rango de valores en C++

## Tipos de datos fundamentales en C++

C++ ofrece una variedad de tipos de datos primitivos, cada uno diseñado para manejar diferentes rangos de datos y necesidades operativas. Conocer las características y los casos de uso adecuados de estos tipos de datos te permitirá escribir programas que sean tanto eficaces como eficientes en memoria.

### 1. Tipos enteros:

#### int (Entero) - ESTÁNDAR

- **Memoria:** Normalmente 4 bytes (32 bits) en la mayoría de los sistemas.
    
- **Rango de valor:** -2.147.483.648 a 2.147.483.647.
    
- **Uso:** Mejor para números enteros como conteos, puntuaciones o índices de arrays.
    
- **Ejemplo:**
    

``edad int = 25;`` Almacena la edad de una persona

#### Short (Entero corto) - MÁS PEQUEÑO

- **Memoria:** 2 bytes (16 bits).
    
- **Rango de valor:** -32.768 a 32.767.
    
- **Uso:** Útil para valores más pequeños para ahorrar memoria, especialmente en entornos restringidos.
    
- **Ejemplo:**
    

``short smallNumber = 500;`` Menor uso de memoria para números más pequeños

#### largo (MAYOR) y largo largo (Entero largo) (AÚN MAYOR)

- **Memoria:** largo es al menos 4 bytes; largo largo es 8 bytes.
    
- **Rango de valor:** largo desde -9.223.372.036.854.775.808 hasta 9.223.372.036.854.775.807.
    
- **Uso:** Ideal para grandes cálculos numéricos como marcas de tiempo.
    
- **Ejemplo:**
    

largo largo muchoGrandeNumber = 123456789012345; Adecuado para valores grandes

### 2. Tipos de coma flotante:

#### **Flotador**

- **Memoria:** 4 bytes.
    
- **Rango de valores:** ~3,4E-38 a ~3,4E+38 con 7 dígitos decimales de precisión.
    
- **Uso:** Adecuado para números decimales con necesidades de precisión moderada.
    
- **Ejemplo:**
    

temperatura de flotación = 98,6; Almacenamiento decimal con flotador

#### **Doble**

- **Memoria:** 8 bytes.
    
- **Rango de valores:** ~1.7E-308 a ~1.7E+308 con 15 dígitos decimales de precisión.
    
- **Uso:** Esencial para aplicaciones que requieren alta precisión.
    
- **Ejemplo:**
    

doble precisiónMedición = 0,000123456789; Almacenamiento de alta precisión

**doble largo**

- **Memoria:** 8 bytes (10 bytes en algunos compiladores).
    
- **Rango de valores:** ~1,7E-308 a ~1,7E+308 con 15 dígitos decimales de precisión/ ~3,4E-4932 a ~1,1E+4832 (cuando se usan 10 bytes).
    
- **Uso:** Esencial para aplicaciones que requieren alta precisión.
    

**Ejemplo:**  

doble pi = 3,1415926535L

### 3. Caracteres y tipos booleanos:

#### Char (personaje)

- **Memoria:** 1 byte.
    
- **Rango de valor:** Firmado: -128 a 127 o Sin firmar: 0 a 255.
    
- **Uso:** Almacena caracteres individuales como letras o símbolos.
    
- **Ejemplo:**
    

inicial de char = 'A'; Representa un solo carácter

#### bool (booleano)

- **Memoria:** 1 byte, puede representar eficazmente con un solo bit.
    
- **Rango de valores:** verdadero o falso.
    
- **Uso:** Ideal para condiciones de verdadero/falso y banderas de estado.
    
- **Ejemplo:**
    

bool isGameOver = false; Bandera para el estado del partido

## Selección de memoria y tipos de datos

Seleccionar el tipo de dato adecuado es crucial para lograr eficiencia en rendimiento y memoria:

- **Huella de memoria:** Utiliza el operador sizeof() para evaluar cuánta memoria requieren los tipos de datos, lo cual es especialmente crítico en sistemas con recursos limitados como dispositivos embebidos (los sistemas embebidos suelen operar con memoria limitada):
    

``std::cout << "Tamaño de int: " << sizeof(int) << "bytes" << std::endl;``

- **Precisión y alcance:** Al decidir entre float y double, ten en cuenta las necesidades de aplicación. Float ofrece menos precisión y uso de memoria, mientras que double destaca en precisión para cálculos de alto riesgo.
    
- **Elegir sabiamente:** Una elección incorrecta del tipo de dato puede provocar desbordamiento o desbordamiento. Por ejemplo, almacenar cifras financieras como riesgos de desbordamiento de int, haciendo que el largo largo sea una mejor opción.
    

## Comprendiendo los rangos de valores y el desbordamiento

Reconocer las limitaciones de los tipos de datos es fundamental para evitar errores:

- **Desbordamiento/Desbordamiento:** Ocurre cuando los cálculos superan la capacidad de un tipo de dato, lo que lleva a resultados inesperados. Por ejemplo:

```cpp
int maxIntValue = INT_MAX;

std::cout << maxIntValue + 1 << std::endl; /* Illustrates overflow

And one more than the allowed range for an integer*/
```

- **Implicaciones prácticas:** La correcta selección del tipo de dato es fundamental para prevenir fallos críticos, especialmente en aplicaciones como sistemas financieros o software científico, donde la precisión y la fiabilidad son innegociables. ¡Imagina los problemas que puede causar un descuento de unos céntimos con el tiempo!