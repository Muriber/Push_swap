# push_swap
Este proyecto trata de ordenar datos en un stack, con un conjunto limitado de instrucciones, y utilizando el menor número posible de acciones.
Se parte de las siguientes premisas:
* Se dispone de 2 stacks, llamados a y b.
◦ El stack **a** contiene una cantidad aleatoria de números positivos y/o negativos,
nunca duplicados.
◦ El stack **b** está vacío.
* El objetivo es ordenar los números del stack a en orden ascendente. Para hacerlo
se tienen las siguientes operaciones a disposición:
* **sa** swap a: Intercambia los dos primeros elementos del stack a. No hace nada si
hay uno o menos elementos.
* **sb** swap b: Intercambia los dos primeros elementos del stack b. No hace nada si
hay uno o menos elementos.
* **ss** swap a y swap b a la vez.
* **pa** push a: Toma el primer elemento del stack b y lo pone el primero en el stack
a. No hace nada si b está vacío.
* **pb** push b: Toma el primer elemento del stack a y lo pone el primero en el stack
b. No hace nada si a está vacío.
* **ra** rotate a: Desplaza hacia arriba todos los elementos del stack a una posición,
de forma que el primer elemento se convierte en el último.
* **rb** rotate b: Desplaza hacia arriba todos los elementos del stack b una posición,
de forma que el primer elemento se convierte en el último.
* **rr** ra y rb al mismo tiempo.
* **rra** reverse rotate a: Desplaza hacia abajo todos los elementos del stack a una
posición, de forma que el último elemento se convierte en el primero.
* **rrb** reverse rotate b: Desplaza hacia abajo todos los elementos del stack b una
posición, de forma que el último elemento se convierte en el primero.
* **rrr** rra y rrb al mismo tiempo

Se trata por ejemplo de obtener lo siguiente:
~~~
$>./push_swap 2 1 3 6 5 8
sa
pb
pb
pb
sa
pa
pa
pa
~~~
