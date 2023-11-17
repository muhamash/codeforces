const readline = require('readline');
const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
} );

const lex = ( arg1, arg2 ) =>
{
    const strOne = arg1.toLowerCase();
    const strTwo = arg2.toLowerCase();

    if ( strOne > strTwo )
    {
        console.log( '1' )
    }
    else if ( strTwo > strOne )
    {
        console.log("-1")
    }
    else
    {
        console.log("0")
    }
}


rl.question( '', ( arg1 ) =>
{
    rl.question( '', ( arg2 ) =>
    {
        lex( arg1, arg2 );
        rl.close();
    } );
} );