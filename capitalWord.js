let string = [ 'a', 'p', 'P', 'L', 'e' ];

if ( string[ 0 ] >= 'A' && string[ 0 ] <= 'Z' )
    {
    console.log( string );
}
else
    {
    string[ 0 ] = string[ 0 ].toUpperCase();
    console.log( string );
};