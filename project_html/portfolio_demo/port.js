//read me
const butt = document.getElementById('read');
butt.addEventListener("click", () => {
    const aboutMeParagraph = document.querySelector('.about_me p');
    const newText = document.createElement('p');
    newText.textContent = "Currently, I'm deeply immersed in learning system design, dedicating focused time to grasp concepts like scalability, distributed systems. My approach combines theory with hands-on practice—I build small projects to solidify my understanding.What excites me most is the rapid evolution of technology; I'm always eager to experiment with emerging trends, ensuring my skills align with industry demands. My goal is to bridge knowledge with innovation, turning ideas into robust systems.";
    newText.style.color = "antiquewhite";
    newText.id = "additional-text"; 
    
    const nextbutt = document.createElement('button');
    nextbutt.textContent = "Read less"; 
    nextbutt.style.color = "black";
    nextbutt.id = "readless";
    
    aboutMeParagraph.insertAdjacentElement('afterend', newText);
    newText.insertAdjacentElement('afterend', nextbutt);   
    butt.style.display = 'none';
    nextbutt.addEventListener("click", () => {
        newText.remove(); 
        nextbutt.remove(); 
        butt.style.display = ''; 
    });
});
//introduction
const butt1 = document.getElementById('det');
butt1.addEventListener("mousemove", () => {
    butt1.style.color = "white";
    butt1.style.transform = "scale(1.10)"; 
    butt1.style.cursor = "pointer";
    butt1.style.padding = "20px";
});

butt1.addEventListener("mouseleave", () => {
    butt1.style.color = "";
    butt1.style.transform = "";
    butt1.style.cursor = ""; 
    butt1.style.padding = "";
});
//icons
const icElements = document.querySelectorAll(".ic");

icElements.forEach(ic => {
    ic.addEventListener("mousemove", () => {
        ic.style.transform = "scale(1.15)";
        ic.style.backgroundColor = "white";
    });
    
    ic.addEventListener("mouseleave", () => {
        ic.style.transform = "";
        ic.style.backgroundColor = "";
    });
});