#include "kosmetyka5.h"

int main() {

    std::cout << "BASIC TEST\n";
    Doglyad t1;

    std::cout << "\n";

    Pomada t2;
    t2.nanesty();
    t2.nanesty(3);

    std::cout << "\n";

    KremDlyaOblychchya t3(30);

    std::cout << "\n";

    NichnyiKrem t4(0, "Retynol");

    std::cout << "\n";

    Kosmetyka k;
    std::cout << k.F(5) << "\n";
    std::cout << k.F(5.5) << "\n";

    std::cout << "\n";

    Kosmetyka* obj = new Pomada();
    obj->pokazaty();
    delete obj;

    std::cout << "\nMULTIPLE INHERITANCE\n";

    UniversalProdukt u;

    std::cout << "Object created\n";

    std::cout << "\nROMB PROBLEM\n";

    RombTest r;

    r.RombA::setNazva("Product A");
    r.RombB::setNazva("Product B");

    r.test();

    return 0;
}