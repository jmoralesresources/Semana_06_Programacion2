| <div align="right"><img src="../../Logo-UNA-Rojo_FondoTransparente%20(2).png" width="120" alt="Logo UNA" /></div> | | <p align="right"><img src="../../images.jpeg" width="120" alt="Logo EscINF" /></p> |
|:----------------------------------------------------|:-------------------------------------------------------------:|------------------------------------------------------------:|

**Programa de curso** · **Programación II**  
**Carrera:** Ingeniería de Sistemas de Información con grado en Bachillerato y salida lateral de Diplomado en Programación de Aplicaciones Informáticas.

---

# Semana 6 – Práctica semanal

**Contenidos:** Concepto de objeto base para manejo de cosesiones.

**Nota:** Semana Santa (según cronograma); las actividades pueden programarse antes o después.

---

## Actividad 1 (Cosesión polimórfica)

- Implemente `Figura` (abstracta) con `double area()` y `void escalar(double)`. Derive `Circulo` y `Rectangulo`.
- Use un array de punteros `Figura* figuras[MAX]` (constante MAX definida por usted), agregue varias figuras y recorra el array mostrando el área de cada una. Luego aplique `escalar(2.0)` y vuelva a mostrar áreas.

---

## Actividad 2 (Clonación)

- Añada `Figura* clonar() const` en la base e implementaciones en cada derivada.
- Escriba una función que reciba un array `Figura* figuras[]` y su tamaño, y devuelva (o llene) un nuevo array con clones. Libere correctamente la memoria al final.

---

## Actividad 3 (Interfaz común)

- Diseñe en MD la jerarquía "Elementos de UI" (Boton, Etiqueta) con método `dibujar()`. Documente la interfaz común y por qué se usa contenedor de punteros a la base (evitar slicing).

---

**Formato de entrega:** Código y documentación en **archivo(s) MD (Markdown)**.
