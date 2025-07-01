// Express js > Getting started > Hello world
// npm init -y
// npm i express
// nodemon server.js

const express = require('express')
const app = express()
const port = 3000

app.use(express.static("public"))

app.get('/', (req, res) => {
  console.log("Hello get");
  res.send('Hello, I am get req')
})  

// NOT WORKING NEED TO ADD A ASYNC FUN() ? PUBLIC > INDEX.HTML > FUN() & L10 above app.get is compulsory
app.post('/', (req, res) => {
  console.log("Hello post");
  res.send('Hello, I am post req')
}) 
    
app.listen(port, () => {
  console.log(`Example app listening on port ${port}`)
}) 
 