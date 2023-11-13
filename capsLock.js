const readline = require('readline');
const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});

const capsLock = (arg) => {
    if (arg[0] === arg[0].toLowerCase() && arg[0] !== arg[0].toUpperCase()) {
        console.log("lower");
    } else {
        console.log("upper");
    }
};

rl.question('', (arg) => {
    capsLock(arg);
    rl.close();
});