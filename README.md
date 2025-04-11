[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/kl-E8VQf)

### .gitignore
_¿Por qué es conveniente incluirlo?_
    Es convenite utilizarlo para evitar que se incluyan archivos que no son necesarios en un repositorio remoto

_¿Cuándo se debe hacer?_
- Cuendo se quiere excluir archivos de compilación
- Cuando se quiere excluir archivos de cache
- Cuando se quiere excluir directorios de salida de compilación
- Cuando se quiere excliur archivos generados en tiempo de ejecución 

_¿Cómo configuraría el archivo .gitignore?_
1. Abre tu terminal o línea de comandos.
2. Navega hasta la raíz de tu repositorio de Git.
3. Escribe touch . gitignore y presiona Enter.
4. Abre el nuevo archivo . ...
5. Agrega las rutas de los archivos o directorios que quieres que Git ignore, cada una en una línea nueva.
6. Guarda y cierra el archivo.gitignore

## Ignorar un archvo.txt
- Elimina el archivo del repositorio
    Si el archivo ya esta confirmado
- Crea un archivo .gitignore
    Crea un archivo de texto plano y asignale el nombre ".gitignore"
    En cada nueva linea, agrega el archivo o carpeta que quieras que git ignore
- Actualiza el repositorio
    Vuelve a hacer un commit y actualiza el repositorio y ya queda ignorado

# 3.c_ 
    Veo los archivos .gitignore, README.md y tp1_1.c
    El Archivo q no haria falta seria los archivos ".exe"
