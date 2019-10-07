const http = require('http')

http.createServer((request, response) => {
  response.writeHead(200, { 'Content-Type': 'text/plain' })
  response.end('Hello World')
}).listen(3000)

console.log('Server running at http://localhost:3000/')
