const stonesOnTable = ( n, s ) =>
{
    let counter=0;

    for ( let i = 0; i < n; i++ )
    {
        if ( s[ i ] === s[ i - 1 ] )
        {
            counter++
        }

        console.log(s[i], s[i-1])
    }

    console.log(counter)
}

stonesOnTable( 4, "abcd" );