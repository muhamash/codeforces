const readline = require('readline');
const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});

const capsLock = (arg) => {
    // if (arg[0] === arg[0].toLowerCase() && arg[0] !== arg[0].toUpperCase()) {
    //     // console.log(arg[i]);
    //     arg = arg[ 0 ].toUpperCase() + arg.slice( 1 )
    //     console.log(arg)
// }
    if ( /[a-z]/.test(arg[ 0 ]) )
    {
        arg = arg[ 0 ].toUpperCase() + arg.slice( 1 );
        console.log(arg)
    }
    else
    {
        console.log(arg)
    }
};

rl.question('', (arg) => {
    capsLock(arg);
    rl.close();
});