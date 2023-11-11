const f =function(...valores){somador=0 
    for(i of valores){somador+=i} 
return somador}


const construtor = new Function("v1","v2", "return v1+v2")

    console.log(f(10,20,30,20)) // funcao anonima normal
    console.log(construtor(10,10)) // funcao anonima contrutor 



