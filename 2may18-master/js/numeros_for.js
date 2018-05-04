function serie(){
var serie ="";
var i;
for (i = 1; i <= 10; i++) {
    serie += "El numerin es: "+ i + "</br>";
}
document.getElementById("numerin").innerHTML = serie;
}