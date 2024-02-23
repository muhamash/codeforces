const readLine = require( 'readline' );
const rl = readLine.createInterface( {
    input: process.stdin,
    output: process.stdout
} )

const pizza = (m,n) =>
{
    result = Math.floor( ( m * n ) / 2 );
    console.log( result );
}

rl.question( '', ( input ) =>
{
    const [ m, n ] = input.split( ' ' ).map( Number );
    pizza( m, n );
    rl.close();
} );