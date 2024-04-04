# Cifrado César

El cifrado César es un cifrado simple y uno de los algoritmos de cifrado más conocidos. Es muy simple de cifrar, descifrar e interceptar. El cifrado César es un cifrado de sustitución donde cada letra del texto sin formato (texto decodificado) se sustituye por una letra un cierto número de espacios a la derecha de la letra en el alfabeto (La cantidad de espacios se denomina clave o cambio y solo es conocida por el remitente y el receptor previsto).

**Descargo de responsabilidad: ¡No intente cifrar datos personales o mensajes serios con este cifrado! ¡Sólo se tarda medio segundo en ser crackeado por un ordenador!**

1. Se necesita una cantidad muy pequeña de tiempo para codificar y decodificar mensajes (Menos de un segundo, por lo general).
2. No existen aplicaciones reales para el cifrado, ya que es el más inseguro por ahí.
3. Este cifrado fue inventado por Julio César como una forma de enviar mensajes de gran importancia militar.

## Pasos

### Cifrado

1. Elija el alfabeto que va a utilizar.
2. Elija una clave secreta (turno) que va a utilizar en este caso `n`.
3. Por cada letra del texto sin formato, sustitúyala por una letra del alfabeto que esté `n` letras alejadas de la letra. (Por ejemplo: para una clave de «1», «a» se convertiría en «b», «z» se convertiría en «a», etc.)
4. El mensaje ahora debe codificarse.

### Descifrado

1. Elija el alfabeto con el que se cifró el mensaje.
2. Deje que `n` sea la clave secreta en la que se codifica el mensaje.
3. Por cada letra del texto cifrado, sustitúyala por una letra del alfabeto que esté `n` letras detrás en el alfabeto de la letra.
`c` sería `b`, `a` sería `z` con una llave de `1`.
4. El mensaje ahora debe ser decodificado

## Ejemplo

### Un ejemplo de cifrado

Digamos que estamos enviando un mensaje secreto a un amigo.

* Primero escribimos nuestro mensaje. En este caso: `El cifrado César es un divertido cifrado de sustitución`
* Nuestro alfabeto será: `abcdefghijklmnopqrstuvwxyz`. Para los usos de este tutorial, el caso no importa. (En un cambio de «1»: «A» se convertirá en «B», `a` se convertirá en «b»)
* Deje que nuestra llave sea 6.
* Comenzando con la primera letra: `T`. La letra a 6 letras de distancia es `Z`. Añadimos `Z` al mensaje.
* La segunda letra es `h`. La letra a 6 letras de distancia es `n`. Nuestro mensaje ahora es `Zn`
* Seguimos así hasta el final. Nuestro mensaje final es: `Znk Igkygx iovnkx oy g lat yahyzozazout iovnkx.`
* El descifrado es de la misma manera, excepto que en lugar de ir a la derecha en el alfabeto, vamos hacia atrás.
