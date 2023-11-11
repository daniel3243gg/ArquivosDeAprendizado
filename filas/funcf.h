const int max_ = 5;

class filas{
    private:
    int frente,atras;
    int* estrutura;  


    public:
    filas();
    bool estavazia();
    bool estacheira();
    void inserir(int item);
    int retirar();
    void print();    

};