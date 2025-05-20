let input = document.getElementById('inputbox');
let buttons = document.querySelectorAll('button');

let string = "";
Array.from(buttons).forEach(button => {
    button.addEventListener('click', (e) => {
        const value = e.target.innerHTML;
        if(value === '='){
            try{
                string = eval(string);
                input.value = string;
            }
            catch{
                input.value = 'ERROR';
            }
        }
        else if(value === 'Ac'){
            string = "";
            input.value = string;
        }
        else if(value === 'del'){
            string = string.slice(0, -1);
            input.value = string;
        }
        else if (value === '+/-') {
            if (string) {
                string = String(-1 * parseFloat(string));
                input.value = string;
            }
        } else {
            string += value;
            input.value = string;
        }
    })
}) 