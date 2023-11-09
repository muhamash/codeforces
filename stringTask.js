const readline = require('readline');
const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout
});

rl.question( '', (inputString) => {
  const string = inputString.toLowerCase();
  const vowel = ['a', 'e', 'i', 'o', 'u', 'y'];
  var list = '';

  for (var i = 0; i < string.length; i++) {
    if (!vowel.includes(string[i])) {
      list += `.${string[i]}`;
    }
  }

  console.log(list);
  rl.close();
});
