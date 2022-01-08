// addition
document.getElementById("sum").addEventListener("click", () => {
  let a = Number(document.getElementById("number1").value);
  let b = Number(document.getElementById("number2").value);
  let c = document.getElementById("number3");
  document.getElementById("ans").innerHTML = `The sum of the two numbers is : `;
  c.style.display = "inline";
  c.value = Number(a) + Number(b);
  // console.log("The sum of the numbers is : ", Number(a)+Number(b));
});

// subtraction
document.getElementById("diff").addEventListener("click", () => {
  let a = Number(document.getElementById("number1").value);
  let b = Number(document.getElementById("number2").value);
  let c = document.getElementById("number3");
  document.getElementById("ans").innerHTML = `The difference of the two numbers is : `;
  c.style.display = "inline";
  c.value = Number(a) - Number(b);
  // console.log("The sum of the numbers is : ", Number(a)-Number(b));
});

// multiplication
document.getElementById("prod").addEventListener("click", () => {
  let a = Number(document.getElementById("number1").value);
  let b = Number(document.getElementById("number2").value);
  let c = document.getElementById("number3");
  document.getElementById("ans").innerHTML = `The product of the two numbers is : `;
  c.style.display = "inline";
  c.value = Number(a) * Number(b);
  // console.log("The sum of the numbers is : ", Number(a)*Number(b));
});

// division
document.getElementById("divi").addEventListener("click", () => {
  let a = Number(document.getElementById("number1").value);
  let b = Number(document.getElementById("number2").value);
  if (b == 0) {
    alert("Denominator can't be 0");
  } else {
    let c = document.getElementById("number3");
    document.getElementById("ans").innerHTML = `The division of the two numbers is : `;
    c.style.display = "inline";
    c.value = Number(a) / Number(b);
    // console.log("The sum of the numbers is : ", Number(a)/Number(b));
  }
});
