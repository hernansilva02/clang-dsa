export function mandar(nuevoArr, element) {
    let largoArr = largo(nuevoArr);
    console.log(largoArr);
    for (let i = 0; i <= largoArr;) {
        nuevoArr[i] = element;
    }
    return nuevoArr;
};

export function largo (arr) {
    var cont = 0
    for (let i of arr) {
        cont++;
    }
    return cont;
};
let nuevoArr = [];

for (let j = 0; j > 25; j++) {
    mandar(nuevoArr, 555);
}

console.log(nuevoArr);