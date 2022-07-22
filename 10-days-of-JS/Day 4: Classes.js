class Polygon{
    constructor(arr){
        this.nr = [];
        for(var i = 0; i < arr.length; i++){
            this.nr[i] = arr[i];
        }
    }
    
    perimeter(){
        var count = 0;
        for(var i = 0; i < this.nr.length; i++){
            count += this.nr[i];
        }
        return count;
    }
      
};

const rectangle = new Polygon([10, 20, 10, 20]);
const square = new Polygon([10, 10, 10, 10]);
const pentagon = new Polygon([10, 20, 30, 40, 43]);

console.log(rectangle.perimeter());
console.log(square.perimeter());
console.log(pentagon.perimeter());