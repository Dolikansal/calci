import React from "react";
import ReactDOM from "react-dom/client";

function Counter() {
    const [count, setCount] = React.useState(0);
    
    return (
        <div className="first">
            <h1>count is: {count}</h1>
            <button onClick={() => setCount(count + 1)} className="butt">Increase</button>
            <button onClick={() => setCount(count - 1)} className="butt">Decrease</button>
        </div>
    );
}

ReactDOM.createRoot(document.getElementById('root')).render(<Counter/>);