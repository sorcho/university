import http from "http";
import pug from "pug";
import { Database } from "../data/Database.js";
import { parseRequestBody } from "../utils.js";

export function handleDeleteRequest(request, response, context={}) {
    switch(request.method){
    case "GET":
      handleDeleteRequestGet(request, response,context); 
      break;
    case "POST":
      handleDeleteRequestPost(request, response, context); 
      break;
  }
}

function handleDeleteRequestGet(request, response,context={}) {
    new Database().getTodos().then(todoItems => {
        context.todoItems = todoItems;
        let renderedContent = pug.renderFile("./templates/delete.pug", context);
        response.writeHead(200, {"Content-Type": "text/html"});
        response.end(renderedContent);
    });
}

function handleDeleteRequestPost(request, response, context={}) {
    parseRequestBody(request).then(data => {
        console.log(data);
    });
}