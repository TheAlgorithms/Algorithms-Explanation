# Detector de Harris

## Declaración del problema

Detecte esquinas y bordes en una imagen determinada.

## Enfoque

Dada la imagen `$I$`, $ntimes n$ tamaño Gaussian Kernel `$G_{ntimes n}$`,

1. Calcule los degradados de la imagen, tanto horizontales como verticales. `$X=(-1, 0, 1)otimes I$`, `$Y=(-1, 0, 1)^T otimes I$`
2. Calcule la matriz `$M$`, donde `$A = G_{ntimes n} otimes X^2$`, `$B=G_{ntimes n}otimes Y^2$`, `$C=G_{ntimes n}otimes XY$`
3. Calcule la función de respuesta `$R$`, donde `$R=AB-C^2-k(A+B)$`
4. Clasifique todos los puntos en `$R$`.

## Referencia

C. Harris y M. Stephens, "A Combined Corner and Edge Detector", en *Procedings of the Alvey Vision Conference 1988*, Manchester, 1988, págs. 23.1-23.6.
