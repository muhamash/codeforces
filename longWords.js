let list = [ 'word', 'localization', 'internationalization', 'pneumonoultramicroscopicsilicovolcanoconiosis' ];

const checkString = list.map( ( m ) =>
{
    // console.log(m)
    // console.log(m.length)
    // console.log( m[0])
    // console.log(m[m.length - 1])
    if ( m.length <= 10 )
    {
        return m
    }
    else
    {
      return `${m[1]}${m.length-2}${m[m.length-1]}`  
    }
} );

console.log(checkString)