const calmedia = function(...valores){
    let qnt = valores.length
    let soma = 0

    for(c of valores){
        soma+= c      
    }
    let resul = soma/qnt
    return resul
}
console.log(calmedia(10,20,30,40,50))