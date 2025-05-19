var s1 = document.getElementById("1");
s1.addEventListener("click" ,()=>{
    let r = Math.floor(Math.random()*100);
    s1.innerHTML = `<h3>${r}</h3>`;
},2*1000)
var s2 = document.getElementById("2");
s2.addEventListener("click" , ()=>{
    if(s2.style.backgroundColor === "rgba(85, 38, 118, 0.6)"){
        s2.style.backgroundColor = "#daa520";
    }
    else{
        s2.style.backgroundColor = "rgba(85, 38, 118, 0.6)";
    }
})
var s3 = document.getElementById("3");
s3.addEventListener("click" , ()=>{
    let r1 = Math.floor(Math.random()*255);
    let r2 = Math.floor(Math.random()*255);
    //let r3 = Math.floor(Math.random()*100);

    s3.style.backgroundColor = `rgb(${r1} , ${r2} , ${255})`;
})

var s4 = document.getElementById("4");
s4.addEventListener("click" , ()=>{
    let r1 = Math.floor(Math.random()*255);
    let r2 = Math.floor(Math.random()*255);
    let r3 = Math.floor(Math.random()*255);
    s1.style.backgroundColor = `rgb(${r1} , ${r2} , ${r3})`;
    s2.style.backgroundColor = `rgb(${r2} , ${r3} , ${r1})`;
    s3.style.backgroundColor = `rgb(${r3} , ${r1} , ${r2})`;
})