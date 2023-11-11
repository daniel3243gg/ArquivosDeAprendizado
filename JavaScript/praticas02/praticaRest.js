function somar(...valores){
let tam = valores.length
let somador= 0
for(i of valores){
    somador+=i
}
    return somador;

}


console.log(somar(10,15,15))