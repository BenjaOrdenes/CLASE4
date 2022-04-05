// ej_05_poema_condicional
// por montoyamoraga
// v0.0.1 abril 2022
// hecho con Arduino Uno y IDE 1.8.19

// declarar variable para almacenar entrada
int byteEntrada;

// variables para procesar numeros 0-9 en ASCII
// 0 equivale a 48 ASCII
int numeroMin = 48;
// 9 equivale a 57 ASCII
int numeroMax = 57;

// arreglo de Strings
// a su vez un String es un arreglo de chars
// asterisco * es tema avanzado, pointers
char *poema[] = {"habia un gato en la ventana", "que con la brisa se cayo", "se escucho un fuerte grito",
                 "porque la patita se rompio", "un niño que por ahi pasaba", "que con esta escena se encontro",
                 "recogio al pobre gatito", "y a su casa lo llevo", "pasaron y pasaron los dias",
                 "y su patita se sano"
                };

// setup() ocurre una vez, al principio
void setup() {

  // abrir comunicacion serial
  Serial.begin(9600);

}

// loop() ocurre despues de setup(), en bucle
void loop() {

  // si es que existe info en el puerto serial
  if (Serial.available() > 0) {

    //  leer el byte de entrada
    byteEntrada = Serial.read();

    // comprobar que la entrada este en el rango [min, max]
    if (byteEntrada <= numeroMax && byteEntrada >= numeroMin) {

      // si lo esta, imprimir el verso correspondiente
      Serial.println(poema[byteEntrada - numeroMin]);
    }
  }
}
