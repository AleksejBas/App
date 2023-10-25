// Программа тестирует скорость выполнения операции сложения типа double в JS

console.log('Fast start test JS!');

let a = 3.1456789;
let b = 2.785;

console.time('JS');

for(let i = 0; i < 100000000; i++)
    a+=b;

console.timeEnd('JS');