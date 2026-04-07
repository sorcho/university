"use strict";

let arr = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10];

function createMultiStepFilterer(array) {
    let currentArray = array;
    
    function filterer(filterCriterion){
        let newArray = [];
        
        if (typeof filterCriterion !== "function") {
            return currentArray;
        }

        currentArray.forEach(element => {
            if (filterCriterion(element)) {
                newArray.push(element)
            }
        });

        currentArray = newArray;

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

/** 
 * ok now that's some bullshit, didn't understand SHIT of what i just did but it works i guess.
 * still i needed the help of ia because apparently i don't remember how to code shit.
 * fuck me i guess
 * 
 * update: apparently i used something called "closure" which is the concept of an inner function accessing the variables of the outer function
 * in this case it happens when i assing filterer = createMultiStepFilterer(arr), now filterer containt the filterer function which can
 * access the currentArray variable. ok that's pretty cool and i don't think it's mentioned in the slides, damn.
 */