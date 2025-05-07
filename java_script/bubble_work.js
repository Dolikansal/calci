document.body.addEventListener("click" , ()=>{
    const circle = document.createElement('div');
    circle.className = 'circle';
    circle.textContent = 'Dost';

    const x = event.clientX;
    const y = event.clientY;
    circle.style.left=`${x-25}px`;
    circle.style.top=`${y-25}px`;
    const color = ['red', 'orange', 'yellow' , 'green' , 'blue' , 'pink' , 'white' , 'beige'];
    circle.style.backgroundColor = color[Math.floor(Math.random()*color.length)];
    document.body.appendChild(circle);

    setTimeout((event)=>{
        circle.remove();
    } , 5000)
})