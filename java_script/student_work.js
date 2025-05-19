const form = document.querySelector('form');
form.addEventListener('submit',(event)=>{

    event.preventDefault();
    const first = document.getElementById('first');
    console.log(first.value);

    const second = document.getElementById('last');
    console.log(second.value);

    const third = document.getElementById('age');
    console.log(third.value);

    const final = document.getElementById('result');
    final.innerHTML = `${first.value} ${second.value} is ${third.value} year old`

    document.body.appendChild('final')
})