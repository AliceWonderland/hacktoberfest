// LANGUAGE: Javascript
// ENV: Node.js
// AUTHOR: Wan Wan
// GITHUB: https://github.com/lf2com

function Who(params) {
    params = (params||{});
    var str = 'Hello World';
    if (params.name) {
        str += (' by '+params.name);
    }
    if (params.location) {
        str += (' @ '+params.location);
    }
    console.log(str);
}

Who({
    name: 'Wan Wan',
    location: 'Taipei, Taiwan'
});