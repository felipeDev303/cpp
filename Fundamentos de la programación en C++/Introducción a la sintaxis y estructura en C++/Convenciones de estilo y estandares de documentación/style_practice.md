# Análisis de Problemas de Estilo en style_practice.cpp

## 6+ Problemas de Estilo Identificados

### 1. **Problemas de espaciado alrededor de operadores**

- `#include<iostream>` → Debería ser `#include <iostream>` (espacio después de `#include`)
- `x=10;y=20;` → Debería ser `x = 10; y = 20;` (espacios alrededor de `=`)
- `int res=x+y;` → Debería ser `int res = x + y;` (espacios alrededor de operadores)
- `if(res>25){` → Debería ser `if (res > 25) {` (espacio después de `if` y alrededor de `>`)

### 2. **Sangría inconsistente o ausente**

- El cuerpo de la función `domath()` no está indentado correctamente
- Las líneas dentro del `if/else` tienen sangría variable e inconsistente
- El `else` está en la misma línea que `}` del `if`, lo cual es confuso

### 3. **Nombres pobres de variables y clases**

- `calc` → Debería ser `Calculator` (más descriptivo y sigue convenciones)
- `domath()` → Debería ser `performCalculation()` o `doMath()` (más claro qué hace)
- `x`, `y` → Debería ser `firstNumber`, `secondNumber` o `num1`, `num2`
- `res` → Debería ser `result` (abreviaturas poco claras)

### 4. **Comentarios ausentes**

- No hay comentarios explicando el propósito de la clase `calc`
- No hay documentación sobre qué hace el método `domath()`
- No hay comentarios indicando qué representan las variables `x`, `y`
- El umbral `25` en la comparación no tiene explicación

### 5. **Colocación inconsistente de llaves**

- `else{cout<<"small number"<<endl;` → La llave `{` en la misma línea que `else`
- Algunas llaves están al final de la línea, otras en línea separada
- No hay patrón consistente (no sigue un estilo como Allman o K&R consistentemente)

### 6. **Uso de `using namespace std;`**

- Usar `using namespace std;` en archivos fuente es una mala práctica
- Mejor usar `std::cout`, `std::endl` o límitar a ciertos nombres específicos
- Causa contaminación del espacio de nombres

---

## Respuestas a las Preguntas

### ¿Qué convención de nombres debería usarse para clases frente a variables?

**Convención estándar de C++ (Google/LLVM/Industria):**

- **Clases**: `PascalCase` o `UpperCamelCase`
  - Ejemplo: `Calculator`, `DatabaseConnection`, `FileManager`
  - La primera letra de cada palabra es mayúscula

- **Variables**: `lowerCamelCase` o `snake_case`
  - lowerCamelCase: `resultValue`, `userCount`, `isActive`
  - snake_case: `result_value`, `user_count`, `is_active`

- **Funciones/Métodos**: `lowerCamelCase`
  - Ejemplo: `calculateSum()`, `getMaxValue()`, `processData()`

- **Constantes**: `UPPER_SNAKE_CASE`
  - Ejemplo: `MAX_BUFFER_SIZE`, `PI_VALUE`

**En el código:**

- `class calc` → `class Calculator`
- `void domath()` → `void performCalculation()`
- `int res` → `int result`

---

### ¿Cómo ayuda una correcta sangría a entender la estructura del código?

Una correcta sangría (indentación) es crucial porque:

1. **Define la estructura visual del bloque**
   - Muestra claramente qué pertenece a qué función o estructura de control

2. **Facilita seguir el flujo lógico**
   - Se ve rápidamente dónde comienzan y terminan bloques `if`, `for`, `while`, funciones

3. **Reduce errores de lógica**
   - Previene que se olvide cerrar bloques
   - Ayuda a detectar llaves faltantes o mal colocadas

4. **Mejora la legibilidad**
   - El ojo humano sigue automáticamente la indentación
   - Código mal indentado es difícil de seguir mentalmente

5. **Ayuda en el debugging**
   - Facilita ubicar el nivel de anidamiento donde ocurre un problema

**Ejemplo del impacto:**

```
Mal:                          Bien:
if(x>0)                       if (x > 0) {
cout<<"positive";               std::cout << "positive";
if(y<10)                      }
cout<<"small";                if (y < 10) {
                                std::cout << "small";
                              }
```

---

### ¿Qué espaciado hace que los operadores sean más fáciles de leer?

El espaciado en operadores sigue estos principios:

1. **Alrededor de operadores binarios**: Espacio antes y después
   - `a = b + c;` (no `a=b+c;`)
   - `if (x > 10)` (no `if(x>10)`)
   - `a && b || c` (no `a&&b||c`)

2. **Después de palabras clave**: Espacio después
   - `if (...)` (no `if(...)`)
   - `for (...)` (no `for(...)`)
   - `while (...)` (no `while(...)`)

3. **En includes**: Espacio después
   - `#include <iostream>` (no `#include<iostream>`)

4. **NO se usa espacio en**:
   - Operadores unarios: `*ptr`, `&ref`, `!flag`
   - Acceso a miembros: `obj.member`, `ptr->member`
   - Indexación: `array[0]` (sin espacios)

5. **En listas de parámetros**: Espacio después de comas
   - `func(a, b, c)` (no `func(a,b,c)`)

6. **Después de comas**: Siempre necesario
   - `int x, y, z;` (no `int x,y,z;`)

**Comparación:**

```
MAL:                      BIEN:
x=a+b*c                    x = a + b * c
if(x>25){                  if (x > 25) {
cout<<"result"<<res;       std::cout << "result" << res;
func(a,b,c);               func(a, b, c);
```

El espaciado adecuado hace que el código sea **escaneado más rápidamente** por el ojo y la mente procesa más fácilmente los operadores.
