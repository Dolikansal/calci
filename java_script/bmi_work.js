const button = document.getElementById('res');
button.addEventListener('click' , (event)=>{
    event.preventDefault();
    const first = document.getElementById('third');
    const height = Number(first.value);

    const second = document.getElementById('forth');
    const weight = Number(second.value);

    if(isNaN(height)||isNaN(weight)|| height===0){
        return;
    }

    const result = weight/(height*height);
    const ans = document.getElementById('result');
    ans.textContent = "Result: "+result;
})