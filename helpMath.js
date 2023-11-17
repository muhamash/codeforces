const readline = require('readline');
const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
} );

const helpMath = (arg) =>
{
    // const type = typeof(arg)
    // console.log(type)
    // const short = arg.split( "" ).sort().join( "" );
    // console.log(short)
    const numberStr = arg.split( '+' ).map( Number );
    const shortedStr = numberStr.sort( ( a, b ) => a - b );
    console.log(shortedStr.join('+'))
}

rl.question('', (arg) => {
    helpMath(arg);
    rl.close();
});