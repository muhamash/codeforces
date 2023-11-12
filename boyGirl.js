const readline = require('readline');

const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});

const checkGender = (string) => {
    let checkString = [];

    for (let i = 0; i < string.length; i++) {
        if (!checkString.includes(string[i])) {
            checkString.push(string[i]);
        }
    }

    if ((checkString.length + 1) % 2 === 0) {
        return 'IGNORE HIM!';
    } else {
        return 'CHAT WITH HER!';
    }
};

rl.question('', (username) => {
    const result = checkGender(username);
    console.log(result);
    rl.close();
});