#include <stdint.h>
#include <stdio.h>

// atributos
typedef struct{
	uint8_t cal1;
	uint8_t cal2;
    uint8_t* nombre;

	uint8_t promedio;
}alumno_t;

// getters
uint8_t alumno_getCal1(alumno_t* alumno){
    return alumno->cal1;
}

uint8_t alumno_getCal2(alumno_t* alumno){
    return alumno->cal2;
}

uint8_t alumno_getPromedio(alumno_t *alumno){
	return alumno->promedio;
}

uint8_t* getNombre(alumno_t* alumno){
    return alumno->nombre;
}

// setters
void setCalificacion1(alumno_t* alumno, uint8_t cal1){
    alumno->cal1 = cal1;
}

void setCalificacion2(alumno_t* alumno, uint8_t cal2){
    alumno->cal2 = cal2;
}

void setPromedio(alumno_t* alumno){
    alumno->promedio = ( alumno_getCal1(alumno) + alumno_getCal2(alumno) ) / 2;
}

void setNombre(alumno_t* alumno, uint8_t* nombre){
    alumno->nombre = nombre;
}

// metodos
void build(alumno_t* alumno, uint8_t cal1, uint8_t cal2, uint8_t* nombre){
	setCalificacion1(alumno, cal1);
    setCalificacion2(alumno, cal2);
    setNombre(alumno, nombre);

    setPromedio(alumno);
}

void print(alumno_t* alumno){
	printf(" nombre: %s\n calificacion 1: %d\n calificacion 2: %d\n promedio: %d\n\n",
            alumno->nombre, alumno->cal1, alumno->cal2, alumno->promedio);
}

void main(void) {
    alumno_t juan;
    alumno_t alan;

    build(&juan, 9, 10, "Juan");
    build(&alan, 6, 10, "Alan");

    print(&alan);
    print(&juan);
}

