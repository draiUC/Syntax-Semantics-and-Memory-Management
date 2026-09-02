// JavaScript: dynamic, weakly-typed
// Variables can be reassigned to any type, and mixed-type operations
// are silently coerced instead of raising an error.

function describe(value) {
    console.log(`${JSON.stringify(value)} is of type ${typeof value}`);
}

let age = 25;
describe(age);
age = "twenty-five";       // legal: dynamic typing allows re-binding
describe(age);

let score = 10;
let bonus = "5";
let total = score + bonus;  // number + string: '+' coerces to string concatenation
console.log("score + bonus =", total, "(type:", typeof total + ")");

console.log("Correct way:", score + Number(bonus));
