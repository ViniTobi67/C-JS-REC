function calcular(){
    var a = document.getElementById("numero1").valueAsNumber 
    var b = document.getElementById("numero2").valueAsNumber 
    var r = (a + b) - 5

    document.getElementById("resposta").textContent = r
}