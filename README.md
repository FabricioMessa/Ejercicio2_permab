# Ejercicio2_permab
Algoritmo de Euclides extendido en c++
Primero empezamos colocando las variables a y b, estas serán para el mcd, las variables d,x,y son de momento variables vacías que con ayuda de una función recursiva
se le colocará la variable respectiva. Iniciamos con la primera función tipo void llamada Euclides, aquí utilizaremos los 5 datos que colocamos anterior mente, los datos 
d,x,y serán tipo puntero puesto que irán cambiando, dentro de la función colocamos dos variables tipo entero largo x1,y1. Aquí colocamos la primera condición: Si el valor
de b es igual a 0 entonces la variable d tomará el valor de a, la variable x tomará el valor de 1 y la variable de y tomará el valor de 0, si no es así entonces volvemos
a llamar a la función con dos cambios, en el lugar de a colocamos b, y en el lugar de b colocamos el residuo de a entre b, es decir, colocamos a modúlo b, las otras varibales
se mantienen, esto generará un bucle y solo se detendrá cuando el valor de b sea finalmente 0, para poder entrar en el if y luego ejecutarse lo siguiente: la variable de x1
va a tomar el valor que tiene actualmente x, la variable y1 va a tomar el valor que tiene actualmente y, usando variables de intercambio colocamos que x tendra el valor de y1
y finalmente y será igual a la operación de x1 - a/b * y1, esto se irá repitiendo la cantidad de veces que hubo recursividad hasta igualar los valores originales de a y b, 
para poder así tener los valores de d,x, y. Finalmente solo queda imprimir los valores finales de cada variable(a, b, d, x, y).

Ejercicios 
1.- 128x + 138y = 2
  x = 22  ||   y = -21

2.- 311x + 337y = 7
  x = -13  ||  y = -12
  
3.- 991x + 997y = -2
  x = 166  ||  y = -165
