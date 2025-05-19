const timer = document.getElementById('day');
const now = new Date();
const target = new Date('2028-07-21');
const diff = target - now;
const left = Math.ceil(diff / (1000 * 60 * 60 * 24)); 
timer.innerHTML = left; 
