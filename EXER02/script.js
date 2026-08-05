function mostraMajoridade(){
    var a = document.getElementById("idade").value 
    var resposta = document.getElementById("resposta")

    if(a >= 18){
        resposta.textContent = "MAIOR DE IDADE"
    }else {
        resposta.textContent = "MENOR DE IDADE"
    }
}