const readLine = require('readline');
const rl = readLine.createInterface({
    input: process.stdin,
    output: process.stdout
});

const numberOfCars = (n, people) => {
    let cars = 0;
    let passengers = 0;

    for (let i = 0; i < n; i++) {
        if (people[i] == 4) {
            cars++;
        } else if (people[i] == 3) {
            cars++;
        } else if (people[i] == 2) {
            cars ++;
        } else {
            passengers++;
        }
    }

    cars += Math.ceil(Math.max(0, passengers - cars) / 4);
    return Math.ceil(cars);
}

let inputNumber = 0;
let groupSize = [];
let isFirstInput = true;

rl.on('line', (input) => {
    if (isFirstInput) {
        inputNumber = parseInt(input);
        isFirstInput = false;
    } else {
        groupSize = input.split(' ').map(Number);
        const result = numberOfCars(inputNumber, groupSize);
        console.log(result);
        rl.close();
    }
});