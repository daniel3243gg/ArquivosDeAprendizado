#ifdef AULA01CABE.H
#define AULA01CABE.H
class Complexo {
    private:
        float real,img;
    public:
    Complexo(float=0.0, float=0.0);
    void print();
    Complexo add(Complexo&);
    Complexo sub(Complexo&);
};











#endif
