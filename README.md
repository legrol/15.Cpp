![Descripción](https://img.shields.io/badge/Descripción-blue?style=for-the-badge)

- Colección de **10 módulos** (00 a 09) de C++, con ejercicios de `ex00` a `ex09`.
- Desde `ex00` a `ex04` pertenecen al `Circle 4`.
- Desde `ex05` a `ex09` pertenecen al `Circle 5`.
- Practica desde conceptos básicos (parsing de argumentos, clases simples) hasta avanzados (herencia, polimorfismo, excepciones, plantillas, ficheros).  
- Refuerza:  
  - Sintaxis y semántica de C++ moderno.  
  - Gestión de memoria (constructores, destructores, `new`/`delete`).  
  - Diseño orientado a objetos y patrones de uso de clases. 

```text
15.Cpp-main/
├── Module_00/        # Fundamentos de C++: funciones y clases básicas
│   ├── ex00/         # megaphone (parsing de args)
│   ├── ex01/         # phonebook (clase Contact & Agenda)
│   └── ex02/         # account (simulación bancaria)
├── Module_01/        # Constructors, destructors y memoria dinámica
│   ├── ex00/         # zombie (new/delete, utils)
│   ├── ex01/         # ...
│   └── ex06/         
├── Module_02/        # Sobrecarga de operadores y flujos I/O
│   ├── ex00/         # ...
│   └── ex03/         
├── Module_03/        # Herencia y clases abstractas
│   └── ex00–ex03/    
├── Module_04/        # Polimorfismo y plantillas básicas
│   └── ex00–ex03/    
├── Module_05/        # Excepciones y pruebas unitarias
│   └── ex00–ex03/    
├── Module_06/        # Ficheros y stream buffers
│   └── ex00–ex02/    
├── Module_07/        # Arrays estáticos vs dinámicos
│   └── ex00–ex02/    
├── Module_08/        # Templates avanzadas y metaprogramación
│   └── ex00–ex02/    
├── Module_09/        # Cronómetros, timeouts y utilidades
│   └── ex00–ex02/    
├── .gitignore  
└── .vscode/          # Configuración de editor
```

![Compilación](https://img.shields.io/badge/Compilación-blue?style=for-the-badge)

Cada ejercicio incluye su propio Makefile. Por ejemplo, para el módulo 03, ejercicio 02:

    cd Module_03/ex02
    make            # genera el ejecutable (p. ej. ex02)
    make clean      # elimina objetos intermedios (*.o)
    make fclean     # además de clean, elimina el binario

Ejecuta el binario dentro de su carpeta con los argumentos que marque el enunciado. Ejemplo:

    ./ex00 "Hello, World!"






![Autor](https://img.shields.io/badge/Autor-red?style=for-the-badge)

- Roberto del Olmo Lima
- [![GitHub](https://img.shields.io/badge/GitHub-Profile-informational?style=for-the-badge&logo=github&logoColor=white&color=181717)](https://github.com/legrol)
 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;[![LinkedIn](https://img.shields.io/badge/LinkedIn-0077B5?style=for-the-badge&logo=linkedin&logoColor=white)](https://www.linkedin.com/in/roberto-del-olmo-731746245)
