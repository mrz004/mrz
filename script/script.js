if (window.innerWidth < 769) {
  aro.innerHTML = "ˇ";

  document.getElementById("resNav").innerHTML = `
  <ul id="navbar">
          <li>
            <a href="" onclick="location.reload();">Home</a>
          </li>
          <li>
            <a href="https://techiverse7.blogspot.com/" target="_blank">Blog</a>
          </li>
          <li>
            <a href="https://github.com/mrz004" target="_blank">GitHub</a>
          </li>
        </ul>
        <hr/>
  `;
} else {
  document.getElementById("navbar").innerHTML = `
  <li>
  <a href="" onclick="location.reload();">Home</a>
</li>
<li>
  <a href="https://techiverse7.blogspot.com/" target="_blank">Blog</a>
</li>
<li>
  <a href="https://github.com/mrz004" target="_blank">GitHub</a>
</li>
<li>
  <!-- <a href="codes.html" target="_blank">Codes</a> -->
  <a id="codesButton">Codes</a>
</li>
  `;
}
document.getElementById("sidebar").style.left = "-100%";

// function ToggleHide() {
//   if (window.innerWidth < 768) {
//     let searchbar = document.getElementById("navbar");
//     let aro = document.getElementById("aro");

//     if (searchbar.style.display == "none") {
//       searchbar.style.display = "";
//       aro.innerHTML = "ˆ";
//     } else {
//       searchbar.style.display = "none";
//      aro.innerHTML = "ˇ";
//     }
//   }
// }

document.getElementById("webname").addEventListener("click", toggleCodes);

// ToggleHide();

let tcBool = false;
function toggleCodes() {
  // let code = document.getElementById("sidebar");
  console.log(document.getElementById("sidebar").style.left);
  if (tcBool == true) {
    tcBool = false;
    document.getElementById("sidebar").style.left = "-100%";
    if (aro.innerHTML = "ˆ") {
     aro.innerHTML = "ˇ";
    }
  } else {
    tcBool = true;
    document.getElementById("sidebar").style.left = "0%";
    if (aro.innerHTML = "ˇ") {
      aro.innerHTML = "ˆ";
     }
  }
}

document.getElementById("codesButton").addEventListener("click", toggleCodes);
