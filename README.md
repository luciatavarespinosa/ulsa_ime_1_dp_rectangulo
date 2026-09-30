# Práctica 3: Área y perímetro de un rectángulo
## 1. Descripción del problema (Fase 1)
<!-- Explica con tus palabras qué hace tu programa y para qué serviría en la vida real. Máximo 4 líneas. -->

_____

## 2. Entradas y salidas (Fase 1)
<!-- Define cada entrada y cada salida, con su tipo de dato, sus unidades y su objetivo. -->

**Entradas:**
1. _base____
2. _altura____

**Salidas:**
1. _____
2. _____

**Fórmulas** (área y perímetro):
_____

## 3. Restricciones e invariante (Fase 1 y 2)

**Restricciones** (¿qué debe cumplirse?):
- _____
- _____

**¿Qué hace mi programa con una medida de 0 o negativa? ¿Por qué?**
_____

**¿Quién detecta cada error?** (¿qué revisa `leerDecimal` y qué reviso yo?)
_____

**Invariante** (al salir del ciclo que pide el ancho, ¿qué es seguro sobre `ancho`?):
_____

## 4. Casos resueltos a mano (Fase 1)

| Caso | Ancho | Alto | Área calculada a mano | Perímetro calculado a mano |
|---|---|---|---|---|
| 1 | ___23__ | ____45_ | _1035____ | _136.\programa____ |
| 2 (cuadrado) | ____ | _____ | _____ | _____ |
| 3 (con decimales) | __2.4___ | ___5.4__ | ___12.96__ | __15.6___ |

## 5. Receta en pseudocódigo (Fase 2)
<!-- Tu receta va en el archivo RECETA.md. Aquí solo responde las preguntas. -->


**¿Probé mi receta a mano con un caso válido y uno inválido?** Sí 
**¿Tuve que corregirla?** _si____
**¿Cuántas versiones de mi receta escribí hasta la final?** ___muchas__

## 6. Cómo compilar y ejecutar (Fase 3)

```bash
g++ -Wall -Wextra -std=c++17 main.cpp -o rectangulo
./rectangulo
```

## 7. Ejemplo de ejecución (Fase 3)
<!-- Pega aquí lo que muestra tu programa en pantalla con un caso normal. -->
PS C:\Users\lucia\OneDrive\Documentos\GitHub\proyecto\ulsa_ime_1_dp_rectangulo> g++ main.cpp -o programa
PS C:\Users\lucia\OneDrive\Documentos\GitHub\proyecto\ulsa_ime_1_dp_rectangulo> .\programa
Area y perimetro de un rectangulo
Ingresa la base y la altura: 2.4 5.4
Area: 12.96 unidades cuadradas
Perimetro: 15.6 unidades
```
_____
```

## 8. Experimentos (Fase 3)

**Experimento A: ¿qué resultado dio `2 * ancho + alto` con 5 × 3? ¿Por qué?**
__Dio 13, no 16. Faltan paréntesis: sin ellos, primero multiplica 2 por ancho y luego suma el alto.___

**Experimento B: sin validación, ¿qué mostró el programa con ancho -4 y alto 3? ¿Tiene sentido?**
_____no me la acepto ya q negativos no existen en rectangulos

**Experimento C (opcional): con `int`, ¿qué pasó con 2.5 y con 100000 × 100000?**
__Con 2.5 perdió el decimal (guardó solo 2). Con 100000 × 100000 el número salió mal porque es demasiado grande para `int`.___

## 9. Tabla de pruebas (Fase 4)

| Caso | Ancho | Alto | Esperado | Obtenido | ¿Pasó? |
|---|---|---|---|---|---|
| Normal | 5 | 3 | Área 15, perímetro 16 | ___15 y 16 __ | __si___ |
| Cuadrado | 4 | 4 | Área 16, perímetro 16 | ____16 16 _ | _____si |
| Decimales | 2.5 | 4 | Área 10, perímetro 13 | __si___ | ___si__ |
| Muy pequeño | 0.1 | 0.1 | Área 0.01, perímetro 0.4 | ____si _ | __si___ |
| Ancho cero | 0 | 3 | vuelve a pedir el ancho | __no___ | ___error__ |
| Alto negativo | 5 | -2 | vuelve a pedir el alto | __no ___ | _error____ |
| Texto | `abc` | 3 | `leerDecimal` vuelve a pedir | ___no__ | ___no__ |
| Caso propio 1 | __2.4 ___ | ___4.5__ | ___12.96  15.6__ | _____ | _____ |
| Caso propio 2 | _34____ | ___54__ | ___1836 176__ | _____ | _____ |

## 10. Bitácora de mejoras (Fase 4)

| # | ¿Qué falló o qué quise mejorar? | ¿Qué cambié? | ¿Funcionó? |
|---|---|---|---|
| 1 | __pues lo de los decimales ___ | _____ | _____ |
| 2 | ___cambiar los negativos y q me pida otros__ | _____ | _____ |

**Reto elegido (opcional):** _____

## 11. Dudas para el profesor (Fase 3)

| Duda | Lo que ya intenté |
|---|---|
| _____ | ____pues el codigo no me funciona muy bien y eso no entiendo totalmente_ |

## 12. Reflexión final

**¿Qué aprendí con esta práctica?**
__a poco a poco hacer la receta sola___

**Ahora que terminé, ¿qué cambiaría de mi proceso?**
__pues todo la manera de como darme a entender___

**¿Qué fue lo más difícil y cómo lo resolví?**
__el codigo ___

**¿Qué pregunta me quedó sin responder?**
__pues como poner bien lo de los decimales y el cuadrado___

**Diseñar la receta desde cero, ¿fue más fácil o más difícil de lo que esperaba? ¿Qué haría distinto la próxima vez?**
___pues fue facil__

## 13. Lista de verificación antes de entregar (Fase 5)

- [ ] Llené todas las secciones (no quedan `_____`)
- [ ] Escribí mi receta completa en `RECETA.md` antes de programar
- [ ] Mi programa compila sin advertencias
- [ ] Probé todos los casos de la tabla
- [ ] Hice los Experimentos A y B y dejé el código correcto al terminar
- [ ] No modifiqué `utilerias.h`
- [ ] Hice al menos 3 commits con mensajes claros
- [ ] Hice `git push` y verifiqué mi fork en GitHub
- [ ] Entregué el enlace de mi fork en Classroom