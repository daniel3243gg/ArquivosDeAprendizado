class animal {
    constructor(nome, especie){
        this.nome = nome
        this.especie = especie
    }
    

};
const cachorro1 = new animal('puf', 'canino');
console.log(`${cachorro1.nome} é da raça ${cachorro1.especie}`)
