function transformafrase(frase){
    const palavras = frase.split(' ')
    const palavrasmanis = palavras.map((palavra) => palavra.trim().toUpperCase())
    const result= palavrasmanis.join('-')
        return result
}

console.log(transformafrase('vai si fude adm'))