"use strict";

function Person(firstName, lastName) {
    this.firstName = firstName;
    this.lastName = lastName;
}

let mattia = new Person("Mattia", "Scotellaro");
let marta = new Person("Marta", "Pagliuso");

function greet() {
    console.log(`Hello I'm ${this.firstName} ${this.lastName}`);
}

Person.prototype.greet = greet;

mattia.greet();
marta.greet();

function Student(firstName, lastName, degreeProgram) {
    Person.call(this, firstName, lastName)
    this.degreeProgram = degreeProgram;
}

Student.prototype = Object.create(Person.prototype)
Student.prototype.constructor = Person.constructor;

let studentMattia = new Student("Mattia", "Scotellaro", "Computer Science");
let studentMarta = new Student("Marta", "Pagliuso", "Computer Science");

studentMattia.greet();
studentMarta.greet();

Student.prototype.greet = function() {
    console.log(`Hello I'm ${this.firstName} ${this.lastName} and I'm enrolled in ${this.degreeProgram}`);
}

studentMattia.greet();
studentMarta.greet();