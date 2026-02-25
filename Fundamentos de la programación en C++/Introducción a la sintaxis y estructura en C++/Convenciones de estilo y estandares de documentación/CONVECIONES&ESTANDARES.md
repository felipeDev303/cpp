# Convenciones de estilo C++ y estándares de documentación

## Introducción

¿Alguna vez has abierto un proyecto heredado sin comentarios y con nombres de variables inconsistentes? Así es como se siente un mal estilo. Imagina intentar resolver un puzle sin ninguna imagen clara ni instrucciones claras. Así es como se siente trabajar con código mal estilizado o sin documentar. En programación en C++, dominar un código limpio y legible es tan crucial como acertar con la lógica. Esta lectura profundiza en convenciones esenciales de estilo y estándares de documentación que no solo mejoran la legibilidad, sino también la mantenibilidad y el potencial de colaboración. El código claro actúa como un lenguaje universal entre los desarrolladores, sirviendo como base para un desarrollo de software robusto.

## Por qué importan el estilo de código y la documentación

Las convenciones de estilo en C++ son más que solo hacer que el código luzca ordenado; establecen un estándar universal que garantiza la legibilidad y organización del código. El cumplimiento constante de estas directrices permite que tú, tu equipo e incluso herramientas automatizadas comprendáis y mantengáis fácilmente una base de código, reduciendo errores y aumentando la productividad. El código bien documentado proporciona una hoja de ruta, guiando a los programadores a través de una lógica compleja y facilitando los procesos de incorporación para los nuevos miembros del equipo. En última instancia, adoptar estas prácticas garantiza una comunicación eficaz y una colaboración eficiente en entornos de desarrollo.

### Convenciones de estilo C++

#### Convenciones de nombres

Las convenciones de nombres ocupan un espacio fundamental para hacer que tu código sea comprensible:

- Variables y funciones: Utiliza camelCase significativo para la legibilidad dentro de variables y nombres de funciones. Por ejemplo, int totalScore; o void calculateSum().
- Clases: Emplea PascalCase para los nombres de las clases, como en clase GameEngine.
- Constantes: Convencionalmente, las constantes son todas mayúsculas con guiones subrayados, como flotante const PI_VALUE = 3,14159.

#### Sangría y formato

La sangría adecuada resalta la estructura lógica de un programa y facilita la comprensión de la lógica a nivel de bloques:

- Mantener un tamaño de sangría consistente, normalmente usando cuatro espacios para evitar discrepancias entre diferentes editores.
- Delimita claramente los bloques de código con llaves { }. Estos son cruciales para la claridad, incluso en casos simples como las sentencias if de una sola línea, para evitar ambigüedades cuando se actualiza el código.

**Ejemplo de una sentencia if indentada**

```cpp
/*An if statement is a decision structor that allows something to happen if a condition is true and something else to happen if it is false*/
if (score > 100) {
    std::cout << "High score!" << std::endl;
} else {
    std::cout << "Try again." << std::endl;
}
```

#### Espaciado y alineación

El espacio en blanco es tu aliado para mejorar la legibilidad:

- Utiliza espacios alrededor de los operadores para mayor claridad: resultado int = x + y;
- Alinea sentencias de código relacionadas (como declaraciones de variables o asignaciones) para lograr un aspecto limpio y organizado.

`Salud Int = 100;`

`Int blindaje = 75;`

`int stamina = 50;`

Estas prácticas simplifican tu código y reducen la carga cognitiva durante la comprobación de errores o al comprender la estructura.

#### Prácticas de comentario

Los comentarios allanan el camino hacia tu proceso de pensamiento y flujo lógico:

Comentarios de una sola línea: Usa // para notas breves junto al código para aclarar intenciones, como incrementar contadores.

Comentarios de varias líneas: Usa /_ ... _/ para explicaciones detalladas, especialmente antes de lógica compleja.

**Ejemplo:**

```cpp
// Initialize player stats
int health  = 100;
int armor   = 75;
/*
Calculate damage taken:
   This considers the damage reduction offered by armor.
*/
int netDamage = rawDamage - (armor / 10);
```

#### Comentarios buenos vs. redundantes

**Buen comentario:** Explica por qué o cómo se hace algo.

// Reducir el daño por factor de armadura para simular protección

int netDamage = rawDamage - (armor / 10);

**Comentario redundante:** Simplemente repite la acción del código sin añadir información adicional.

// Resta armadura dividida por 10 del daño bruto

int netDamage = rawDamage - (armor / 10);

Un comentario efectivo debería guiar a los lectores a través de la intención del código en lugar de limitarse a repetir lo que ya hace el código.

## Normas de Documentación

La documentación es una extensión avanzada de los comentarios que vincula información de alto nivel a operaciones detalladas de código:

1. **Comentarios del código:** Colócalos en secciones críticas para aclarar la intención y la metodología.

2. **Documentación de la función:** Describe el propósito de una función, detalles de los parámetros, valores de retorno y posibles efectos secundarios.

```cpp
/**
 * Calculates the player's new health after receiving damage.
 *
 * @param health The current health of the player.
 * @param damage The damage to be applied.
 * @return The updated health after applying the damage.
 */
int applyDamage(int health, int damage) {
    return health - damage;
}

```

**Descripciones de clases y módulos:** Describe la funcionalidad general, los objetivos y las interacciones con otros componentes del programa.

**Ejemplos**
Aplicando estos principios, consideremos este ejemplo de clase (blueprint):

```cpp
// Class for managing a simple player's score
class PlayerScore {
private:
    int score;  // Current score value
public:
    // Constructor to initialize score
	/* A Constructor is a special method used to create objects
We will touch on this later */
    PlayerScore() : score(0) {}
    // Function to update the player's score
    void updateScore(int points) {
        score += points; // Add points to current score
    }
    // Function to get the current score
    int getScore() const {
        return score;
    }
};
```

Esto muestra código estructurado, nombres coherentes, comentarios significativos y documentación detallada a nivel de clase.

## Cómo implementar y beneficiarse

Adoptar las convenciones de estilo comienza con una guía de estilo, un manual esencial para cualquier equipo que asegure la uniformidad. Aplicando estas convenciones, creas un código intuitivo y mantenible, facilitando colaboraciones más fluidas. Estos principios fomentan un entorno de programación eficiente y orientado al equipo.

Integrar la documentación y los estándares de estilo en tu rutina de programación te alinea con las normas del sector, preparando el terreno para futuros proyectos. Estas prácticas son vitales a medida que avanzas en C++, desde proyectos solitarios hasta iniciativas colaborativas en entornos profesionales.

## Conclusión

El camino para convertirse en un desarrollador competente de C++ está pavimentado con la práctica constante de las convenciones de estilo y una documentación exhaustiva. Estos hábitos fundamentales no solo promueven un código más claro, sino que también fomentan un ambiente colaborativo propicio para la innovación y la eficiencia. A medida que perfecciones estas habilidades, te verás bien preparado para las complejidades y desafíos de la programación en el mundo real y listo para destacar en cualquier entorno de programación C++.
