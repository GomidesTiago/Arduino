#define VERMELHO 4
#define VERDE 5
#define AZUL 6

void setup() {}

void color(int r, int g, int b) {
    analogWrite(VERMELHO, 255 - r);
    analogWrite(VERDE, 255 - g);
    analogWrite(AZUL, 255 - b);
}

void light(int r, int g, int b, int intervalo) {
    cor(r, g, b);
    delay(intervalo);
}

void loop() {
    light(255,0,0,1000);   //! vermelho
    light(0,255,0,1000);    //! verde
    light(0,0,255,1000);    //! azul
    light(190,255,0,1000);  //! amarelo
    light(190,0,255,1000);  //! magenta

    light(0,255,255,1000);  //! ciano
    light(255,255,255,1000); //! branco
    light(0,0,0,1000);      //! apagado

    light(63,0,0,1000); //! vermelho com 1/4 da intensidade
    light(0,63,0,1000); //! verde com 1/4 da intensidade
    light(0,0,63,1000); //! azul com 1/4 da intensidade
}