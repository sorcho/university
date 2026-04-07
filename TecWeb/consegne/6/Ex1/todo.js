"use strict";

let todoItems = document.getElementsByTagName("li"); // this is a HTMLCollection, so a live collection

function addTodoElement() {    
    let todoElement = document.getElementById("todo-input");
    let todoListItem = document.createElement("li");

    todoListItem.innerHTML = todoElement.value;

    if (todoElement.value !== "") {
        document.getElementById("todo-list").append(todoListItem);
    }

    todoElement.value = "";

    todoItems[todoItems.length - 1].addEventListener("click", markTodoElementAsDone);
    todoItems[todoItems.length - 1].addEventListener("dblclick", removeTodoElement);
}

function checkKeyPressed (event) {
    if (event.key == "Enter") {
        addTodoElement(); 
        event.preventDefault();
    }
}

function markTodoElementAsDone(event) {
    let target = event.target;

    target.classList.toggle("done");
}   

function removeTodoElement(event) {
    let target = event.target;

    target.remove();
}

let todoAddButton = document.getElementById("todo-add-button");
let todoInput = document.getElementById("todo-input");

todoInput.addEventListener("keydown", checkKeyPressed);
todoAddButton.addEventListener("click", addTodoElement);

