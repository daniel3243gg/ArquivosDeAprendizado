function* geradoraa(){
    const raça = yield 'qual sua raça'
    const nome = yield 'qual seu nome'
    const local = yield 'qual seu local'


    return raça+nome+local
}

const etc=geradoraa()
console.log(etc.next('humano ').value)
console.log(etc.next('humano ').value)
console.log(etc.next(' danie').value)
console.log(etc.next(' cidadae pequena').value)




