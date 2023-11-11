const soma = (...valores)=>{
    const somar=val=>{
        rest=0
        for(v of val){
            rest+=v
        }
            return rest;
    }
        return somar(valores)

}

console.log(soma(10,20,30,40))