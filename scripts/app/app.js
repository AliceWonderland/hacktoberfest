// ??basic libraries import


 const express = require('express')
const app = express()
const port = 3000

app.get('/', (req, res) => res.send('Hello World!'))
app.get('/app/', (req, res) => res.send('THE NEXT PAGE IS AWESOME'))
app.listen(port, () => console.log(`Example app listening on port ${port}!`))