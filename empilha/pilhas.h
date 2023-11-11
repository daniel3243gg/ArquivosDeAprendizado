

class Pilha{
    static const int max = 10;
    private:
    int tamanho;
    int* estrutura; 
    public:
    Pilha();
    bool pilha_vazia ();
    bool pilha_lotada();
    void pilha_push (int valor);
    void pilha_pop();
    void pilha_print();


};