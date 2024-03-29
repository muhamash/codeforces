const readline = require('readline');
const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});

const capsLock = ( arg ) =>
{
    console.log( arg[ 0 ].toUpperCase() + arg.slice( 1 ).toLowerCase() );
};

rl.question('', (arg) => {
    capsLock(arg);
    rl.close();
});