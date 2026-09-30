# Receta: Área y perímetro de un rectángulo

<!-- Escribe aquí tu receta completa en pseudocódigo, ANTES de programar.
     El primer paso es solo un ejemplo del formato; el resto de la receta es completamente tuyo.
     Si la corriges después de probarla a mano, deja aquí la versión final. -->

``` text
1. MOSTRAR "Bienvenido a mi programa de rectangulo"
introduce base y altura del rectangulo
leer a y b 
MOSTRAR a = <=0 HACER 
MOSTRAR  " No se puede ,ingresa otro numero" 
pedir al usuario la base (a)
leer a
FIN MIENTRAS

MOSTRAR b = <=0 HACER
MOSTRAR  " No se puede ,ingresa otro numero" 
pedir al usuario la altura (b)
leer b 
FIN MIENTRAS

perimetro <- 2 * (a + b)
area <- a * b 
mostrar" El perimetro es " perimetro
mostrar "El area es " area
fin 