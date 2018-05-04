function seriePar(){
    var serie ="";
    var i=2;
    while (i <= 20) {
        serie += "El numerin es: "+ i + "</br>";
        i+=2; //or i=i+2;
    }
    document.getElementById("numerin").innerHTML = serie;
    }