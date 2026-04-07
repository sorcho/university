"use strict";

let arr = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10];

/**
* the code works in the following way: in the filterer variable is stored a function that takes as parameter another function. then when we use
* filterer we can either pass a function as parameter or pass nothing, if nothing is passed then the parameter acts as "undefined", otherwise
* it checks wether is a function or not. if it's a function the copy of the array is updated thanks to the array.filter function, which applies the
* filterCriterion function to every item of the array, updating it when needed.
*/
function createMultiStepFilterer(array) {
    let currentArray = array;

    function filterer(filterCriterion){
        if (typeof filterCriterion !== "function") {
            return currentArray;
        }

        currentArray = currentArray.filter(filterCriterion)

        return currentArray;
    }

    return filterer;
}

let filterer = createMultiStepFilterer(arr);

console.log(filterer());

console.log(filterer(function(elem){ 
  return elem % 2 !== 0
}));

console.log(filterer("Foo"));

console.log(filterer(function(elem){ 
  return elem % 3 !== 0
}));
 
console.log(arr);

