// * Constant Variables
const navul = document.querySelector("nav > ul");
const hambug = document.querySelector(".hambug");
const githubList = document.querySelector("details");

// * Event Listeners
hambug.addEventListener("click", toggelNavUl);
githubList.addEventListener("focusout", hideGithubList)

// * Functions
function toggelNavUl() {
  const animDur = '500ms';
  // console.log(navul.style.display);
  if (navul.style.display === "") {
    navul.style.display = "flex";
    hambug.style.animation = `openHam ${animDur} ease-in-out 0s 1 normal forwards`;
  } else {
    navul.style.display = '';
    hambug.style.animation = `closeHam ${animDur} ease-in-out 0s 1 normal forwards`;
  }
};

function hideGithubList(){
  // console.log("event fired");
  document.getElementById("githubList").removeAttribute("open");
}

  // alert("Hello this is me 😸")