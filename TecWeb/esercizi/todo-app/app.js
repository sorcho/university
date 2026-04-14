"use strict";

import pug from "pug"
//basic_example.pug is the file with the template to render
let html = pug.renderFile("./templates/basic_example.pug");
console.log(html); //html contains the generated HTML code
