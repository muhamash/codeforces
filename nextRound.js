// let scores = [ 10, 9, 8, 7, 7, 7, 5, 5 ];
// let length = 8;
// let highScore = 5;

// const checkRound = scores.find((f)=> f > highScore? f[scores]: null)
// console.log(checkRound)

const readline = require( 'require' );
const readlineFunction = readline.createInterface( {
    input: process.input,
    output: process.stdout
} );

readlineFunction.question( 'n, k:', ( inputs ) =>
{
    const [ n, k ] = inputs.split( ' ' ).map( Number );

    readlineFunction.question( 'scores:', ( scores ) =>
    {
        const score = scores[k - 1]
    })
})