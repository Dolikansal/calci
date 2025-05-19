import React, { useState } from "react";
import ReactDOM from "react-dom/client";

function Color() {
    const [color, setColor] = useState("black");
    document.body.style.backgroundColor = color;
    
    return (
        <div className="try">
            <button style={{backgroundColor: "red"}} onClick={() => setColor("red")}>red</button>
            <button style={{backgroundColor: "violet"}} onClick={() => setColor("violet")}>violet</button>
            <button style={{backgroundColor: "blue"}} onClick={() => setColor("blue")}>blue</button>
            <button style={{backgroundColor: "yellow"}} onClick={() => setColor("yellow")}>yellow</button>
            <button style={{backgroundColor: "green"}} onClick={() => setColor("green")}>green</button>
        </div>
    );
}

const root = ReactDOM.createRoot(document.getElementById('root'));
root.render(<Color />);