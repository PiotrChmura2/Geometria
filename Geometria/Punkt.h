#ifndef Punkt_H 
#define Punkt_H

class Punkt {
    unsigned int x;
    unsigned int y;

public:
    void setX(unsigned int wsp);
    void setY(unsigned int wsp);

    // chc¹c siê dostac do tych wartoœci w innym programie, nale¿y stworzyæ getter
    unsigned int getX();
    unsigned int getY();

};


#endif

