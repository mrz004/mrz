// alert("hello world")
// console.log("hello world")
// console.warn("hello world")
// console.error("hello world")
// console.assert(false, "hello world")
// console.info("hello world")
// let a = document.getElementById("webname")
// console.log(a)
// document.getElementById("webname").innerHTML =`<div class="webname">\n\t<h1>\n\t\thello\n\t</h1>\n</div>`

// document.getElementById("webname::after").addEventListener("click", togglehide)
// function togglehide(){
//     let navigationList = document.getElementById("navdiv");
//     navigationList.style.display = "none";
// }

if (window.innerWidth < 768) {
  ToggleHide();
}

function ToggleHide() {
  if (window.innerWidth < 768) {
    let searchbar = document.getElementById("navdiv");
    let aro = document.getElementById("aro");

    if (searchbar.style.display == "none") {
      searchbar.style.display = "";
      aro.innerHTML = "ˆ";
    } else {
      searchbar.style.display = "none";
      aro.innerHTML = "ˇ";
    }
  }
}

// ToggleHide();
