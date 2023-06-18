/*

Construct the following pattern in a X by X grid(Multidimensional array)

X should be an odd number

ooxoo

oxxxo

xxxxx

oxxxo

ooxoo

Example :

Input X = 5 should return

[["o","o","x","o","o"],

["o","x","x","x","o"],

["x","x","x","x","x"],

["o","x","x","x","o"],

["o","o","x","o","o"]]

*/

function drowPattern(x) {
    
    var draw_array = [];

    var middle = parseInt(x / 2);

    let size_of_array = x;

    let x_count = 1;

    let direction = -1;

    for(let i = 0; i < size_of_array; i++){
        
        const row = [];

        for(let j = 0; j < size_of_array; j++){
            
            var symbol = (j >= middle && j < middle + x_count ? 'x' : 'o');
            
            row.push(symbol);    
            
        }

        middle += direction;

        // if middle is less than 0, then change direction to 1 and add 2 to middle
        
        if (middle < 0) 
        { 
            direction *= -1
            
            middle += 2
        }
        
        x_count = x_count - direction * 2
        
        draw_array.push(row);
    }
    
    return draw_array;
}


console.log(drowPattern(5));