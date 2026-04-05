#ifndef KOSMETYKA5_H
#define KOSMETYKA5_H

#include <iostream>
#include <string>

class Kosmetyka {
private:
    std::string nazva;
    std::string brend;
    double tsina;

public:
    Kosmetyka();
    Kosmetyka(std::string n, std::string b, double t);
    virtual ~Kosmetyka();

    int setNazva(std::string n);
    int setBrend(std::string b);
    int setTsina(double t);

    double F(int x);
    double F(double x);

    virtual int pokazaty();

protected:
    int opysTovaru();
};
class Doglyad : virtual public Kosmetyka {
private:
    std::string typShkiry;

public:
    Doglyad();
    virtual ~Doglyad();

    int setTypShkiry(std::string typ);
    int pokazaty() override;
};

class KremDlyaOblychchya : public Doglyad {
private:
    int spf;

public:
    KremDlyaOblychchya();
    KremDlyaOblychchya(int s);
    virtual ~KremDlyaOblychchya();

    int setSPF(int s);
    int pokazaty() override;
};

class NichnyiKrem : public KremDlyaOblychchya {
private:
    std::string aktyvniKomponenty;

public:
    NichnyiKrem(int s, std::string komponenty);
    virtual ~NichnyiKrem();

    int pokazaty() override;
};
class Pomada : virtual public Kosmetyka {
private:
    std::string kolir;

public:
    Pomada();
    virtual ~Pomada();

    int setKolir(std::string k);
    int pokazaty() override;

    void nanesty();
    void nanesty(int kilkist);
};

class Makiyazh : virtual public Kosmetyka {
public:
    Makiyazh();
    virtual ~Makiyazh();

    int pokazaty() override;
};
class UniversalProdukt : public Doglyad, public Pomada, public Makiyazh {
public:
    UniversalProdukt();
    ~UniversalProdukt();

    int pokazaty() override; 
};

#endif