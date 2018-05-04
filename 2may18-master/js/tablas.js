function tabla(){
    var i; //multiplicando o iterador del primer for
    var j; //multiplicador o iterador del segundo for
    var tabla_html='';
    
    for(i=1;i<=10;i++){
        tabla_html+='<div class="row">'+'<div class="col-1">'+'Tabla del '+'</div>'+'<div class="col-1">'+i+'</div>';
        for(j=1;j<=10;j++){
            tabla_html+='<div class="col-1">'+(i*j)+'</div>';
        }
        tabla_html+='</div>';
    }
    document.getElementById('tabla').innerHTML = tabla_html;
    
}