const readLine = require( 'readline' );
const rl = readLine.createInterface( {
    input: process.stdin,
    output: process.stdout

})

const numberOfCars = ( n, people ) =>
{
    let cars = 0;
    let passengers = 0;

    for ( let i = 0; i < n; i++ )
    {
        if ( people[ i ] === 4 )
        {
            cars++
        }
        else if ( people[ i ] === 3 )
        {
            cars++
        }
        else if ( people[ i ] === 2 )
        {
            cars = cars + 0.5
        }
        else
        {
            passengers++
        }
    }

    cars += Math.ceil( Math.max( 0, passengers - cars ) / 3 );
    return Math.ceil( cars );
}

// console.log(numberOfCars(5, [1, 2, 4, 3, 3])); 
// console.log(numberOfCars(8, [2, 3, 4, 4, 2, 1, 3, 1]));

rl.question( "", ( inputNumber ) =>
{
    let count = 0;
    let groupSize = [];

    const getGroupSize = () =>
    {
        if ( count < inputNumber )
        {
            rl.question( '', ( size ) =>
            {
                groupSize.push( parseInt( size ) );
                count++
                getGroupSize();
            })
        }
        else
        {
            const result = numberOfCars(inputNumber, groupSize)
            console.log( result );
            rl.close();
        }
    }
    getGroupSize()
} )

