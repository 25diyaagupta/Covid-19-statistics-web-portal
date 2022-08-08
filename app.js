const express =require('express');

const app=express();

app.use(express.static("public"));
app.get("/",(req, res) => {
  console.log("am going to index page")
  res.sendFile(__dirname+"/index.html");
})
// app.get("*",(req, res) => {
//   console.log("am going to error page")
//   res.sendFile(__dirname+"/error.html");
// })









app.listen(3001,function(){
  console.log('Successly started on port 3001')
})
