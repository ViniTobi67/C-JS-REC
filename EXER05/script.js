function tudo(){
    var nome = document.getElementById("nome").value 
    var desc = document.getElementById("desc").value 
    var idade = document.getElementById("idade").value 
    var gen = document.getElementById("gen").value 
    var hobby = document.getElementById("hobby").value 
 
    document.getElementById("pnome").textContent = nome
    document.getElementById("pdesc").textContent = desc
    document.getElementById("pidade").textContent = idade
    document.getElementById("pgen").textContent = gen
    document.getElementById("phobby").textContent = hobby
}