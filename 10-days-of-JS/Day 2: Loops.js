'use strict';

process.stdin.resume();
process.stdin.setEncoding('utf-8');

let inputString = '';
let currentLine = 0;

process.stdin.on('data', inputStdin => {
    inputString += inputStdin;
});

process.stdin.on('end', _ => {
    inputString = inputString.trim().split('\n').map(string => {
        return string.trim();
    });
    
    main();    
});

function readLine() {
    return inputString[currentLine++];
}

/*
 * Complete the vowelsAndConsonants function.
 * Print your output using 'console.log()'.
 */
function vowelsAndConsonants(s) {
    let vowel = [], consonants = [];
    for(var i = 0; i < s.length; i++){
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
         vowel.push(s[i]);   
        } else {
            consonants.push(s[i]);
        }
    }
    for(var i = 0; i < vowel.length; i++){
        console.log(vowel[i]);
    }
    for(var i = 0; i < consonants.length; i++){
        console.log(consonants[i]);
    }
}


function main() {
    const s = readLine();
    
    vowelsAndConsonants(s);
}