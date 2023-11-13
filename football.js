const readline = require('readline');
const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});

const football = (args) => {
    let consecutiveZeros = 0;
    let consecutiveOnes = 0;

    for (let i = 0; i < args.length; i++) {
        if (args[i] === '0') {
            consecutiveZeros++;
            consecutiveOnes = 0;
        } else {
            consecutiveOnes++;
            consecutiveZeros = 0;
        }

        if (consecutiveZeros >= 7 || consecutiveOnes >= 7) {
            console.log("YES");
            return;
        }
    }

    console.log("NO");
};

rl.question('', (arg) => {
    football(arg);
    rl.close();
});