#ifndef Sygnal_2_hpp
#define Sygnal_2_hpp

class Sygnal_2 {
public:
    virtual ~Sygnal() {}
    virtual double x(double t) = 0;
    virtual void wypisz(std::ostream& s) = 0;
    friend std::ostream& operator<<(std::ostream& s, const Sygnal& sygnal) {
        sygnal.wypisz(s);
        return s;
    }
};
#endif // Sygnal_2_hpp
