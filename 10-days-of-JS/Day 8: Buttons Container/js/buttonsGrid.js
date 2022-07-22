function func(){
    var button1 = document.getElementById("btn1");
    var button2 = document.getElementById("btn2");
    var button3 = document.getElementById("btn3");
    var button4 = document.getElementById("btn4");
    var button6 = document.getElementById("btn6");
    var button7 = document.getElementById("btn7");
    var button8 = document.getElementById("btn8");
    var button9 = document.getElementById("btn9");
    
    var temp = button1.innerHTML;
    button1.innerHTML = button4.innerHTML;
    button4.innerHTML = button7.innerHTML;
    button7.innerHTML = button8.innerHTML;
    button8.innerHTML = button9.innerHTML;
    button9.innerHTML = button6.innerHTML;
    button6.innerHTML = button3.innerHTML;
    button3.innerHTML = button2.innerHTML;
    button2.innerHTML = temp;
    
}