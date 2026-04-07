#include "kosmetyka5.h"

Kosmetyka::Kosmetyka() {
    nazva = "Unknown";
    brend = "Unknown";
    tsina = 0;
    std::cout << "Create Kosmetyka\n";
}

Kosmetyka::Kosmetyka(std::string n, std::string b, double t) {
    nazva = n;
    brend = b;
    tsina = t;
    std::cout << "Create Kosmetyka param\n";
}

Kosmetyka::~Kosmetyka() {
    std::cout << "Destroy Kosmetyka\n";
}  // ---

int Kosmetyka::setNazva(std::string n) { nazva = n; return 1; }
int Kosmetyka::setBrend(std::string b) { brend = b; return 1; }
int Kosmetyka::setTsina(double t) { tsina = t; return 1; }

double Kosmetyka::F(int x) {
    std::cout << "F(int)\n";
    return x * 2;
}

double Kosmetyka::F(double x) {
    std::cout << "F(double)\n";
    return x / 2;
}

int Kosmetyka::pokazaty() {
    std::cout << "Kosmetyka\n";
    return 1;
}

int Kosmetyka::opysTovaru() {
    std::cout << "[" << brend << "] " << nazva << " " << tsina << " grn\n";
    return 1;
}

Doglyad::Doglyad() {
    std::cout << "Create Doglyad\n";
}

Doglyad::~Doglyad() {
    std::cout << "Destroy Doglyad\n";
}  // ---

int Doglyad::setTypShkiry(std::string typ) {
    typShkiry = typ;
    return 1;
}

int Doglyad::pokazaty() {
    std::cout << "Doglyad: " << typShkiry << "\n";
    return 1;
}

KremDlyaOblychchya::KremDlyaOblychchya() {
    std::cout << "Create Krem\n";
}

KremDlyaOblychchya::KremDlyaOblychchya(int s) {
    spf = s;
    std::cout << "Create Krem SPF\n";
}

KremDlyaOblychchya::~KremDlyaOblychchya() {
    std::cout << "Destroy Krem\n";
}  // ---

int KremDlyaOblychchya::setSPF(int s) {
    spf = s;
    return 1;
}

int KremDlyaOblychchya::pokazaty() {
    std::cout << "SPF: " << spf << "\n";
    return 1;
}

NichnyiKrem::NichnyiKrem(int s, std::string komponenty) {
    aktyvniKomponenty = komponenty;
    setSPF(s);
    std::cout << "Create NichnyiKrem\n";
}

NichnyiKrem::~NichnyiKrem() {
    std::cout << "Destroy NichnyiKrem\n";
}  // ---

int NichnyiKrem::pokazaty() {
    std::cout << "Sklad: " << aktyvniKomponenty << "\n";
    return 1;
}

Pomada::Pomada() {
    std::cout << "Create Pomada\n";
}

Pomada::~Pomada() {
    std::cout << "Destroy Pomada\n";
}  // ---

int Pomada::setKolir(std::string k) {
    kolir = k;
    return 1;
}

int Pomada::pokazaty() {
    std::cout << "Kolir: " << kolir << "\n";
    return 1;
}

void Pomada::nanesty() {
    std::cout << "1 shar\n";
}

void Pomada::nanesty(int k) {
    std::cout << k << " shariv\n";
}

Makiyazh::Makiyazh() {
    std::cout << "Create Makiyazh\n";
}

Makiyazh::~Makiyazh() {
    std::cout << "Destroy Makiyazh\n";
}  // ---

int Makiyazh::pokazaty() {
    std::cout << "Makiyazh\n";
    return 1;
}

int UniversalProdukt::pokazaty() {
    std::cout << "Universal produkt:\n";
    Doglyad::pokazaty();
    Pomada::pokazaty();
    Makiyazh::pokazaty();
    return 1;
}

UniversalProdukt::UniversalProdukt() {
    std::cout << "Create UniversalProdukt\n";
}

UniversalProdukt::~UniversalProdukt() {
    std::cout << "Destroy UniversalProdukt\n";
}  // ---

RombA::RombA() {
    std::cout << "Create RombA\n";
}

RombA::~RombA() {
    std::cout << "Destroy RombA\n";
}  // ---

RombB::RombB() {
    std::cout << "Create RombB\n";
}

RombB::~RombB() {
    std::cout << "Destroy RombB\n";
}  // ---

RombTest::RombTest() {
    std::cout << "Create RombTest\n";
}

RombTest::~RombTest() {
    std::cout << "Destroy RombTest\n";
}  // ---

void RombTest::test() {
    std::cout << "Romb test:\n";
    RombA::opysTovaru();
    RombB::opysTovaru();
}