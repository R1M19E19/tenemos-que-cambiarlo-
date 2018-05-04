const ID_A_MODIFICAR = "pon_codigo_html";

function miPrimerFuncion(){    
    var i;
    var texto = 
                '\
                <div class="row">\
                    <div class="col-2">Tabla del 1</div>\
                ';
    for(i=1;i<=5;i=i+1){
        texto+='<div class="col-1">';
        texto+= i;
        texto+='</div>';
    }                
    texto+= '\
            </div>\
            <div class="row">\
                <div class="col-2">Tabla del 2</div>\
            ';    
    for(i=1;i<=5;i=i+1){
        texto+='<div class="col-1">';
        texto+= i*2;
        texto+='</div>';
    }
    texto+= '\</div>\
            <div class="row">\
                <div class="col-2">Tabla del 3</div>\
            ';
    for(i=1;i<=5;i=i+1){
        texto+='<div class="col-1">';
        texto+= i*3;
        texto+='</div>';
    }
    texto+= '</div>\
            ';
   document.getElementById(ID_A_MODIFICAR).innerHTML = texto;
}

function forAnidado(){
    var codigo;
    var i;
    for(j=1;j<=5000;j++){
        codigo+=
            '\
            <div class="row">\
                <div class="col-2">Tabla del '
                +j+
            '</div>\
            ';
        for(i=1;i<=10;i=i+1){
            codigo+='<div class="col-1">';
            codigo+= i*j;
            codigo+='</div>';
        }
        codigo+= '\
            </div>\
            ';    
    }
    document.getElementById(ID_A_MODIFICAR).innerHTML = codigo;
}
function mafiaDelPoder(){
    var nombre= ["Ramses", "Jonathan", "Liz", "Jorge", "Ricardo", "Jair"];
    var apodo= ["Playa", "Seriedad", "Facilito", "Albures", "Anaya", "Co-chino"];
    var edad = ["55", "10", "18", "30", "41", "69"];

    document.getElementById(ID_A_MODIFICAR).innerHTML = una_variable;
}