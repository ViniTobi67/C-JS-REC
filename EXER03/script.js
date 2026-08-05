function area(){
    var a = parseFloat(document.getElementById("lado1").value)
    var b = parseFloat(document.getElementById("lado2").value)
    var resp = document.getElementById("resposta")
    resp.innerHTML = (a * b).toFixed(2)
}

