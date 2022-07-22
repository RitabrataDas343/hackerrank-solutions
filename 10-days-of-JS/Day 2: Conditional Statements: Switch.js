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


function getLetter(s) {
    let letter;
    const ss = "aeiou";
    const sss = "bcdfg";
    const ssss = "hjklm";
    const sssss = "npqrstvwxyz";
    var check = s[0];
    for(var i = 0; i < 11; i++){
        switch(check){
            case ss[i]:
            letter = 'A';
            break;
            case sss[i]:
            letter = 'B';
            break;
            case ssss[i]:
            letter = 'C';
            break;
            case sssss[i]:
            letter = 'D';
            break;
        }
    }
    return letter;
}


function main() {
    const s = readLine();
    
    console.log(getLetter(s));
}