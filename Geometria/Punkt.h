#ifndef Punkt_H 
#define Punkt_H

class Punkt {
    unsigned int x;
    unsigned int y;

public:
    void setX(unsigned int wsp);
    void setY(unsigned int wsp);

    // chc�c si� dostac do tych warto�ci w innym programie, nale�y stworzy� getter
    unsigned int getX();
    unsigned int getY();

};


#endif

