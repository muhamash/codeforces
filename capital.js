const readline = require('readline');
const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});

const capitalWords = ( arg ) =>
{
    console.log( arg[ 0 ].toUpperCase() + arg.slice( 1 ));
};

rl.question('', (arg) => {
    capitalWords(arg);
    rl.close();
});