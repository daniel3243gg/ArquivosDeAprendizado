#ifndef complexo_h
#define complexo_h

class complexo{
    private:
        float real, img; 

    public:
     complexo(float =0.0, float = 0.0);
    void print();
    complexo add(complexo&);
    complexo sub(complexo&);


};

#endif