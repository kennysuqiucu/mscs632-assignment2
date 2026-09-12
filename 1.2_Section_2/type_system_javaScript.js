function testingTypes() {
    
    let x5 = 5;
    console.log(`x = ${x5}, type = ${typeof x5}`);

    x5 = "five"; // x5 can be dynamically changed, see how it was a number and now it can be a string without having to specify int/string
    console.log(`x = ${x5}, type = ${typeof x5}`);

    // In this case, it's using addition, but it's also coercing the number to be a string because a string takes precedence when "adding" a string and a number
    let result = "5" + 3; 
    console.log(`Implicit coercion: "5" + 3 = "${result}" (type: ${typeof result})`);

    // In this case, it's using subtraction, but it's coercing the string to be a number because in JavaScript, 
    // subtracting a string with a number does not make sense, instead, it turns the string to a number
    result = "5" - 3; 
    console.log(`Implicit coercion: "5" - 3 = ${result} (type: ${typeof result})`);
}

testingTypes();