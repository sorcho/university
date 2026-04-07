"use strict";

let studentName = "Mattia";
let age = 23;
let isEnrolled = true;

console.log(`${studentName} is of type ${typeof(studentName)}`)
console.log(`${age} is of type ${typeof(age)}`)
console.log(`${isEnrolled} is of type ${typeof(isEnrolled)}`)

let studentInfo = (studentName, age, course="Web Technologies", isEnrolled=true) => {
    if (isEnrolled) {
        console.log(`${studentName} (${age}) is enrolled in the ${course} course`);
    } else {
        console.log(`${studentName} (${age}) is NOT enrolled in the ${course} course`);
    }
}

studentInfo("Mattia", 23);
studentInfo("Mattia", 23, "Statistics", false);