# Análisis empírico de Algoritmos 

En este informe se llevará a cabo la recolección de información a partir de la experimentación y 
análisis de una interpolación de los tiempos de ejecución de cuatro tipos de algoritmos de 
ordenamiento, es decir, ajuste de curvas, análisis de regresión lineal y no lineal. 
Para esto es necesario ejecutar cuatro algoritmos que respondan a los siguientes métodos de 
clasificación iterativos: -Burbuja simple y con centinela. -Selección. -Inserción directa y binaria. -Shell como mejora de algoritmo de inserción. 
Luego se medirán los tiempos para cada algoritmo, tanto como de CPU y en tiempo real, 
ingresando datos del tamaño entre 1 y 1000, variando el tamaño del problema de un array del 
tamaño de 100 hasta 10^7. 
Para realizar la comparación de una forma efectiva se realizarán estadísticas y gráficos de 
comportamiento de los algoritmos aplicando ajustes polinomiales con los datos de cada algoritmo. 
Finalmente se podrá determinar que tanto se acercan los resultados, a lo obtenido por el análisis 
asintótico.

El lenguaje utilizado en este análisis y comparación de algoritmos es C, regido por el estándar ANSI 
C.

1. Ordenamiento de burbuja: 

El ordenamiento de burbuja (Bubble Sort en inglés) es un algoritmo de ordenamiento. Funciona 
revisando cada elemento de la lista que va a ser ordenada con el siguiente, intercambiándolos de 
posición si están en el orden equivocado. Es necesario revisar varias veces toda la lista hasta que 
no se necesiten más intercambios, lo cual significa que la lista está ordenada. 
Para este algoritmo, se utilizará un rango aleatorio de 1 a 1000 utilizando la función Rand(), 
además, se realizarán las mediciones de los tiempos de CPU y tiempo real desde un array tamaño 
100 incrementando el tamaño hasta 10^7. 
En la siguiente imagen hay un ejemplo del algoritmo bubble sort aplicado con un array de un 
tamaño 100. El cual será utilizado para realizar las mediciones y el análisis asintótico.

2. Ordenamiento por selección:

El ordenamiento por selección (Selection sort en inglés) es un algoritmo de ordenación simple. 
Funciona dividiendo el array en dos partes: un subarray ordenado y otro sin ordenar. El 
ordenamiento por selección encuentra el elemento más pequeño dentro del subarray sin ordenar 
y lo mueve al último índice del subarray ordenado. Se utiliza cuando las operaciones de 
intercambio son muy costosas porque, como máximo, sólo se requieren n intercambios. 
Para este algoritmo, se utilizará un rango aleatorio de 1 a 1000 utilizando la función Rand(), 
además, se realizarán las mediciones de los tiempos de CPU y tiempo real desde un array tamaño 
100 incrementándolo hasta 10^7. 
En la siguiente imagen hay un ejemplo del algoritmo bubble sort aplicado con un array de un 
tamaño 100. El cual será utilizado para realizar las mediciones y el análisis asintótico.

3. Ordenamiento por Inserción directa: 

El método de ordenación por inserción directa consiste en recorrer todo el array comenzando 
desde el segundo elemento hasta el final. Para cada elemento, se trata de colocarlo en el lugar 
correcto entre todos los elementos anteriores a él o sea entre los elementos a su izquierda en el 
array. 
Para este algoritmo, se utilizará un rango aleatorio de 1 a 1000 utilizando la función Rand(), 
además, se realizarán las mediciones de los tiempos de CPU y tiempo real desde un array tamaño 
100 incrementándolo hasta 10^7. 
En la siguiente imagen hay un ejemplo del algoritmo de ordenamiento por Inserción directa 
aplicado con un array de un tamaño 100. El cual será utilizado para realizar las mediciones y 
el análisis asintótico.


4. Ordenamiento por Shell: 
El método de ordenamiento Shell consiste en dividir el array en intervalos de varios 
elementos para organizarlos después por medio del ordenamiento de inserción directa. El 
proceso se repite, pero con intervalos cada vez más pequeños, de tal manera que al final, 
el ordenamiento se haga en un intervalo de una sola posición, similar al ordenamiento por 
inserción directa, la diferencia entre ambos es qué, al final, en el método Shell los 
elementos ya están casi ordenados. 
Para este algoritmo, se utilizará un rango aleatorio de 1 a 1000 utilizando la función 
Rand(), además, se realizarán las mediciones de los tiempos de CPU y tiempo real desde 
un array tamaño 100 incrementándolo hasta 10^7. 
En la siguiente imagen hay un ejemplo del algoritmo de ordenamiento por Inserción 
directa aplicado con un array de un tamaño 100. El cual será utilizado para realizar 
las mediciones y el análisis asintótico.

