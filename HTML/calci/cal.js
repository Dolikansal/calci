const button = document.querySelector('#button');
button.addEventListener('click', (event) => {
    // Prevent default form submission
    event.preventDefault();

    // Read the data
    const input1 = document.getElementById('number1');
    const number1 = Number(input1.value);

    const input2 = document.getElementById('number2');
    const number2 = Number(input2.value);

    if (isNaN(number1) || isNaN(number2)) {
        alert('Please enter valid numbers!');
        return;
    }

    // Output the result
    const result = number1 + number2;
    const re = document.getElementById('result');
    re.textContent = "Result: " + result;
});
const b=document.getElementById('multi');
// button.getElementById('multi');
b.addEventListener('click',(event)=>{
    event.preventDefault();
    const input1=document.getElementById('number1');
    const number1= Number(input1.value);
    const input2=document.getElementById('number2');
    const number2= Number(input2.value);
    if(isNaN(number1) || isNaN(number2)){
        return;
    }
    const result =number1*number2;
    const re = document.getElementById('result');
    re.textContent = "Result: "+result;
});