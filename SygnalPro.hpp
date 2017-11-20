#ifndef SygnalPro_hpp
#define SygnalPro_hpp

class SygnalPro(){
public:
    SygnalPro(){};
    void dodajProbke( const Probka& p);
    int iloscProbek();
    Probka& operator[](int i);
};

#endif // SygnalPro_hpp
