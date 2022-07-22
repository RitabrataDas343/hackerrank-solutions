let display = document.getElementById("res");

function funZero(){
    display.innerHTML += '0';
}

function funOne(){
    display.innerHTML += '1';
}

function clrone(){
    display.innerHTML = "";
}

function sum(){
    display.innerHTML += '+';
}

function sub(){
    display.innerHTML += '-';
}

function multiply(){
    display.innerHTML += '*';
}

function divide(){
    display.innerHTML += '/';
}

function binaryToDecimal(n){
    return parseInt(n, 2);
}

function decimalToBinary(n){
    return n.toString(2);
}

function equal(){
    var temp = display.innerHTML;
    var operator;
    var flag = false;
    for(var i = 0; i < temp.length; i++){
        if(temp[i] == '+' || temp[i] == '-' || temp[i] == '*' || temp[i] == '/'){
            operator = temp[i];
            flag = true;
        }
    }
    if(flag){
    const arr = temp.split(operator);
    var dec1 = binaryToDecimal(arr[0]);
    var dec2 = binaryToDecimal(arr[1]);
    var dec3;
    switch(operator){
        case '+':
            dec3 = dec1 + dec2;
            break;
        case '-':
            dec3 = dec1 - dec2;
            break;
        case '*':
            dec3 = dec1 * dec2;
            break;
        case '/':
            dec3 = dec1 / dec2;
            break;
    }
    var result = decimalToBinary(dec3);
    display.innerHTML = result;
    }
}

