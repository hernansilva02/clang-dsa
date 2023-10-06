//import {mandar, largo} from "./test.js";

function binariowh(x) {
    var division = x;
    var resto;
    const divisor = 2;
    var result = [];
    var nuevoResult = [];
    while (division > 1) {
        resto = division % divisor;
        division = Math.floor(division / divisor);
       // console.log(resto);
        result.push(Math.floor(resto));
    }
   result.push(division);
    var final = result.length;
    for (let i = 0; i < result.length; i++) {
        nuevoResult.push(result[final - 1]);
        final --;
   }
    return nuevoResult;
}
console.log(binariowh(1000000));

