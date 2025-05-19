import React from "react";
import Reactdom from "react-dom/client"

const ele = <h1>Hello world</h1>
const root = Reactdom.createRoot(document.getElementById('root'));
root.render(ele);