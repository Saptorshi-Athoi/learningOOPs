function outerFunction() {
    let outerVariable = "I'm from the outer function";
  
    function innerFunction() {
      console.log(outerVariable); // Accessing outerVariable from the inner function
    }
  
}
innerFunction();     // Calling the inner function

  outerFunction(); // Calling the outer function