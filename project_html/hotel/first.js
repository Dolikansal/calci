const fs = require('fs');
const resturant = [];
const images = ["First" , "second" , "third" , "fourth" , "fifth" , "sixth" , "seventh" , "Eigth" ,"nine" , "tenth"];
const resturant_name = ["Utsav Restaurant",
  "Khalsa Veg Soya Chaap",
  "Sindhi Misthan",
  "FRESH BOWL",
  "Swag Restaurant Lounge Cafe",
  "Zaika Restaurant",
  "The Food Factory",
  "Tandoori Junction",
  "Spice Hub",
  "Royal Treat",
  "Flavors of Punjab",
  "Desi Tadka",
  "Urban Bites",
  "Saffron Dining",
  "The Grand Feast",
  "Taste of India",
  "Chatori Gali",
  "Biryani House",
  "Haveli Restaurant",
  "Curry Culture"]
const food_type = ["Chole Bhature",
  "Aloo Tikki",
  "Nihari",
  "Butter Chicken",
  "Kebabs",
  "Paranthas",
  "Gol Gappe (Pani Puri)",
  "Papdi Chaat",
  "Dahi Bhalla",
  "Rajma Chawal",
  "Bedmi Poori",
  "Momos",
  "Kathi Rolls",
  "Samosa",
  "Jalebi",
  "Rabri Falooda",
  "Kulfi",
  "Chur Chur Naan",
  "Malai Chaap",
  "Tandoori Chicken",
  "Dal Makhani",
  "Paneer Tikka",
  "Bhalla Papdi",
  "Street-style Chowmein",
  "Ram Ladoo",
  "Kachori",
  "Shahi Tukda",
  "Lassi",
  "Matka Kulfi",
  "Fruit Chaat"]
const locations = ["India Gate",
  "Red Fort",
  "Qutub Minar",
  "Lotus Temple",
  "Humayun's Tomb",
  "Akshardham Temple",
  "Jama Masjid",
  "Gurudwara Bangla Sahib",
  "Lodhi Garden",
  "Connaught Place",
  "Chandni Chowk",
  "Hauz Khas Village",
  "Raj Ghat",
  "National Museum",
  "ISKCON Temple",
  "Dilli Haat",
  "Safdarjung Tomb",
  "Purana Qila",
  "Agrasen ki Baoli",
  "Rashtrapati Bhavan",
  "Jantar Mantar",
  "Mehrauli Archaeological Park",
  "Khan Market",
  "Garden of Five Senses",
  "Nehru Planetarium"]
for(let i = 0 ; i<100 ; i++){
    const obj = {};
    obj["image"] = images[Math.floor(Math.random()*10)];
    obj["rest_name"] = resturant_name[Math.floor(Math.random()*20)];
    obj["rating"] = Math.floor(Math.random()*5 + 1);
    obj["food"] = food_type[Math.floor(Math.random()*30)];
    obj["price"] = Math.floor(Math.random()*2401 + 100);
    obj["location"] = locations[Math.floor(Math.random()*25)];
    obj["distance"] = Math.floor(Math.random()*4);
    obj["distance_from_customer"] = (Math.random()*4 + 1).toFixed(1);
    obj["offer"] = Math.floor(Math.random()*30);
    obj["alchol"] = Math.random() > 7;
    obj["open_time"] = Math.floor(Math.random()*24);
    obj["close_time"] = (obj["open_time"]+12)%24;

    resturant.push(obj);
}
const json_Data = JSON.stringify(resturant, null, 2);
fs.writeFileSync('temp.json', json_Data, 'utf-8');

console.log("Data saved to temp.json");