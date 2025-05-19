const button = document.getElementById('add');

button.addEventListener('click' , ()=>{

    const num1 = document.getElementById('first');
    const number1 = Number(num1.value);

    const num2 = document.getElementById('second');
    const number2 = Number(num2.value);

    if(isNaN(number1)||isNaN(number2)){
        return;
    }

    const result = number1+number2;
    const re = document.getElementById('final');
    re.innerHTML = `<h3>Result: ${result}</h3>`;
})

const button2 = document.getElementById('res4');

button2.addEventListener('click' , ()=>{

    const num1 = document.getElementById('first');
    const number1 = Number(num1.value);

    const num2 = document.getElementById('second');
    const number2 = Number(num2.value);

    if(isNaN(number1)||isNaN(number2)){
        return;
    }

    const result = number1*number2;
    const re = document.getElementById('final');
    re.innerHTML = `<h3>Result: ${result}</h3>`;
})

const button3 = document.getElementById('sub');

button3.addEventListener('click' , ()=>{

    const num1 = document.getElementById('first');
    const number1 = Number(num1.value);

    const num2 = document.getElementById('second');
    const number2 = Number(num2.value);

    if(isNaN(number1)||isNaN(number2)){
        return;
    }

    const result = (number1-number2);
    const re = document.getElementById('final');
    re.innerHTML = `<h3>Result: ${result}</h3>`;
})