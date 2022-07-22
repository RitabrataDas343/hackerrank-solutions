

/**
*   Return the second largest number in the array.
*   @param {Number[]} nums - An array of numbers.
*   @return {Number} The second largest number in the array.
**/
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

function getSecondLargest(nums) {
    var sem = nums.length;
    var maximum = 0;
    var sec = 0;
    if (nums[0] > nums[1]){
        maximum = nums[0];
        sec = nums[1];
    }else{
        maximum = nums[1];
        sec = nums[0];
    }
    for (var i = 2; i < sem; i++){
        if(nums[i] > maximum){
            sec = maximum;
            maximum= nums[i];
        } else if (nums[i] < maximum && nums[i] > sec){
            sec = nums[i]; 
        } else if (sec == maximum && nums[i] < sec){
            sec = nums[i]; 
        } 
    }
    return sec;
}

function main() {
    const n = +(readLine());
    const nums = readLine().split(' ').map(Number);
    
    console.log(getSecondLargest(nums));
}