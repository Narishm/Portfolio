// Variable declaration.
var index = 0;
var dividend = 0;
var divisor = 0;
var lights = false;
var count = [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0];
var x, i, j, selElmnt, a, b, c;
x = document.getElementsByClassName("custom-select");

// OnClick Event Listener
document.addEventListener("click", closeAllSelect);

// Add an item to a counter.
function additem(index) {
  if(count[index] < 0) {
    count[index] = 0;
  }else {
    count[index] += 1;
  }
  updateCount(index);
}

// Subtract an item from a counter.
function subitem(index) {
  if(count[index] < 1) {
    count[index] = 0;
  }else {
    count[index] -= 1;
  }
  updateCount(index);
}

// Update all counters on page.
function updateCount(index) {
  document.getElementById("display" + index).innerHTML = count[index];
  var temp = 0;
  for(i = 1; i < 10; i++) {
    temp += count[i];
  }
  calculateTrackers();
}

// Calculate percentages for trackers
function calculateTrackers() {
// Add together the appropriate values.
  count[22] = count[3] + count[4] + count[5] + count[6] + count[7] + count[8];
  count[23] = count[9] + count[10] + count[11] + count[12];
  count[31] = count[22] + count[23] + count[13];
  count[21] = count[18] + count[19] + count[20];
  count[33] = count[3] + count[4];
  count[35] = count[17] + count[18] + count[19] + count[20];

// Calculate the percentages.
  calculatePercent(24, 31, 0);
  calculatePercent(25, 33, 22);
  calculatePercent(26, 21, 0);
  calculatePercent(27, 17, 35);
  calculatePercent(28, 18, 35);
  calculatePercent(29, 19, 35);
//calculatePercent(30, 20, 21);
  calculatePercent(32, 14, 0);

// Update the percentage trackers on the page.
  document.getElementById("display22").innerHTML = count[22];
  document.getElementById("display23").innerHTML = count[23];
  document.getElementById("display31").innerHTML = count[31];
}

// Percentage calculator function
function calculatePercent(index, dividend, divisor) {
  if(count[index] < 0) { // Check if count is less than 0
    count[index] = 0;
  }else { // Perform percentage calculation.
    count[index] = Math.round(count[dividend] / count[divisor] * 100);
  }
  if(isNaN(count[index])) { // Check if count is not a number.
    count[index] = 0;
  }else if(count[index] === Infinity) { // Check if count is infinite.
    count[index] = 0;
  }
  updateTrackers(index); // Update all trackers on page.
}

function updateTrackers(index) {
  switch(index) {
    case 24:
    case 25:
    case 26:
      if(count[index] > 121) { // Turn gold if over 121%.
        document.getElementById("border" + index).className = "yellowBorder3DB";
        document.getElementById("color" + index).className = "yellow3DM";
        document.getElementById("display" + index).className = "yellow3DB";
        document.getElementById("display" + index).innerHTML = count[index] + "%";
      }else if(count[index] > 74) { // Turn green if over 75%.
        document.getElementById("border" + index).className = "greenBorder3DB";
        document.getElementById("color" + index).className = "green3DM";
        document.getElementById("display" + index).className = "green3DB";
        document.getElementById("display" + index).innerHTML = count[index] + "%";
      }else if(count[index] >= 1) { // Turn red if under 1%.
        document.getElementById("border" + index).className = "redBorder3DB";
        document.getElementById("color" + index).className = "red3DM";
        document.getElementById("display" + index).className = "red3DB";
        document.getElementById("display" + index).innerHTML = count[index] + "%";
      }else { // Otherwise turn blue.
        document.getElementById("border" + index).className = "blueBorder3DB";
        document.getElementById("color" + index).className = "blue3DM";
        document.getElementById("display" + index).className = "blue3DB";
        document.getElementById("display" + index).innerHTML = count[index] + "%";
      }
      break;
    default: // Single-Double-Triple color display calculator
      document.getElementById("display" + index).innerHTML = count[index] + "%";
      if(count[27] > count[28] && count[27] > count[29]) {
        document.getElementById("display27").className = "yellow3DB";
      }else if(count[27] < count[28] && count[27] > count[29] || count[27] > count[28] && count[27] < count[29]) {
        document.getElementById("display27").className = "green3DB";
      }else if(count[27] < count[28] && count[27] < count[29]) {
        document.getElementById("display27").className = "red3DB";
      }else {
        document.getElementById("display27").className = "blue3DB";
      }
      if(count[28] > count[27] && count[28] > count[29]) {
        document.getElementById("display28").className = "yellow3DB";
      }else if(count[28] < count[27] && count[28] > count[29] || count[28] > count[27] && count[28] < count[29]) {
        document.getElementById("display28").className = "green3DB";
      }else if(count[28] < count[27] && count[28] < count[29]) {
        document.getElementById("display28").className = "red3DB";
      }else {
        document.getElementById("display28").className = "blue3DB";
      }
      if(count[29] > count[27] && count[29] > count[28]) {
        document.getElementById("display29").className = "yellow3DB";
      }else if(count[29] < count[27] && count[29] > count[28] || count[29] > count[27] && count[29] < count[28]) {
        document.getElementById("display29").className = "green3DB";
      }else if(count[29] < count[27] && count[29] < count[28]) {
        document.getElementById("display29").className = "red3DB";
      }else {
        document.getElementById("display29").className = "blue3DB";
      }
  }
}

// Light/Dark switch controller.
function switchLights() {
  if(lights === false) {
    turnOn();
  }else {
    turnOff();
  }
}

// Clears all of the data from the page.
function clearAll() {
  for(var i = 0; i < count.length; i++) {
    count[i] = 0;
    updateCount(i);
  }
}

// Switches the CSS attributes to the ones for Light Mode.
function turnOn() { // Clean this function up with a loop.
  document.getElementById("bgcolormain").className = "";
  document.getElementById("button3").className = "button buttonB";
  document.getElementById("button4").className = "button buttonB";
  document.getElementById("button5").className = "button buttonB";
  document.getElementById("button6").className = "button buttonB";
  document.getElementById("button7").className = "button buttonB";
  document.getElementById("button8").className = "button buttonB";
  document.getElementById("button17").className = "button buttonB";
  document.getElementById("button18").className = "button buttonB";
  document.getElementById("button19").className = "button buttonB";
  document.getElementById("button20").className = "button buttonB";
  document.getElementById("button16").className = "button buttonB";
  document.getElementById("button9").className = "button buttonB";
  document.getElementById("button10").className = "button buttonB";
  document.getElementById("button11").className = "button buttonB";
  document.getElementById("button12").className = "button buttonB";
  document.getElementById("button13").className = "button buttonB";
  document.getElementById("button14").className = "button buttonB";
  document.getElementById("button15").className = "button buttonB";
  document.getElementById("button0").className = "button2 buttonB2";
  document.getElementById("button1").className = "button2 buttonB2";
  document.getElementById("button2").className = "button2 buttonB2";
  document.getElementById("button34").className = "button2 buttonR2";
  document.getElementById("button3.").className = "button buttonR";
  document.getElementById("button4.").className = "button buttonR";
  document.getElementById("button5.").className = "button buttonR";
  document.getElementById("button6.").className = "button buttonR";
  document.getElementById("button7.").className = "button buttonR";
  document.getElementById("button8.").className = "button buttonR";
  document.getElementById("button17.").className = "button buttonR";
  document.getElementById("button18.").className = "button buttonR";
  document.getElementById("button19.").className = "button buttonR";
  document.getElementById("button20.").className = "button buttonR";
  document.getElementById("button16.").className = "button buttonR";
  document.getElementById("button9.").className = "button buttonR";
  document.getElementById("button10.").className = "button buttonR";
  document.getElementById("button11.").className = "button buttonR";
  document.getElementById("button12.").className = "button buttonR";
  document.getElementById("button13.").className = "button buttonR";
  document.getElementById("button14.").className = "button buttonR";
  document.getElementById("button15.").className = "button buttonR";
  document.getElementById("button0.").className = "button2 buttonR2";
  document.getElementById("button1.").className = "button2 buttonR2";
  document.getElementById("button2.").className = "button2 buttonR2";
  document.getElementById("text15").className = "cblue3Dt";
  document.getElementById("text23").className = "cblue3Dt";
  document.getElementById("text22").className = "cblue3Dt";
  document.getElementById("text14").className = "cblue3Dt";
  document.getElementById("text13").className = "cblue3Dt";
  document.getElementById("text12").className = "cblue3Dt";
  document.getElementById("text11").className = "cblue3Dt";
  document.getElementById("text10").className = "cblue3Dt";
  document.getElementById("text9").className = "cblue3Dt";
  document.getElementById("text8").className = "cblue3Dt";
  document.getElementById("text7").className = "cblue3Dt";
  document.getElementById("text6").className = "cblue3Dt";
  document.getElementById("text5").className = "cblue3Dt";
  document.getElementById("text4").className = "cblue3Dt";
  document.getElementById("text3").className = "cblue3Dt";
  document.getElementById("text20").className = "cblue3Dt";
  document.getElementById("text19").className = "cblue3Dt";
  document.getElementById("text18").className = "cblue3Dt";
  document.getElementById("text17").className = "cblue3Dt";
  document.getElementById("text16").className = "cblue3Ds";
  document.getElementById("text2").className = "cblue3Ds";
  document.getElementById("text1").className = "cblue3Ds";
  document.getElementById("text32").className = "cblue3Ds";
  document.getElementById("text31").className = "cblue3Ds";
  document.getElementById("text0").className = "cblue3Ds";
  document.getElementById("yieldcolor").className = "cblue3Ds";
  document.getElementById("voicecolor").className = "cblue3Dt";
  document.getElementById("internetcolor").className = "cblue3Dt";
  document.getElementById("selfinstallcolor").className = "cblue3Dt";
  document.getElementById("bundlecolor").className = "cblue3Dt";
  document.getElementById("tvcolor").className = "cblue3Dt";
  lights = true; // Set light toggle to on
}

// Switches the CSS attributes to the ones for Dark Mode.
function turnOff() { // Clean this function up with a loop.
  document.getElementById("bgcolormain").className = "bodydark";
  document.getElementById("button3").className = "button buttonBdark";
  document.getElementById("button4").className = "button buttonBdark";
  document.getElementById("button5").className = "button buttonBdark";
  document.getElementById("button6").className = "button buttonBdark";
  document.getElementById("button7").className = "button buttonBdark";
  document.getElementById("button8").className = "button buttonBdark";
  document.getElementById("button17").className = "button buttonBdark";
  document.getElementById("button18").className = "button buttonBdark";
  document.getElementById("button19").className = "button buttonBdark";
  document.getElementById("button20").className = "button buttonBdark";
  document.getElementById("button16").className = "button buttonBdark";
  document.getElementById("button9").className = "button buttonBdark";
  document.getElementById("button10").className = "button buttonBdark";
  document.getElementById("button11").className = "button buttonBdark";
  document.getElementById("button12").className = "button buttonBdark";
  document.getElementById("button13").className = "button buttonBdark";
  document.getElementById("button14").className = "button buttonBdark";
  document.getElementById("button15").className = "button buttonBdark";
  document.getElementById("button0").className = "button2 buttonB2dark";
  document.getElementById("button1").className = "button2 buttonB2dark";
  document.getElementById("button2").className = "button2 buttonB2dark";
  document.getElementById("button34").className = "button2 buttonR2dark";
  document.getElementById("button3.").className = "button buttonRdark";
  document.getElementById("button4.").className = "button buttonRdark";
  document.getElementById("button5.").className = "button buttonRdark";
  document.getElementById("button6.").className = "button buttonRdark";
  document.getElementById("button7.").className = "button buttonRdark";
  document.getElementById("button8.").className = "button buttonRdark";
  document.getElementById("button17.").className = "button buttonRdark";
  document.getElementById("button18.").className = "button buttonRdark";
  document.getElementById("button19.").className = "button buttonRdark";
  document.getElementById("button20.").className = "button buttonRdark";
  document.getElementById("button16.").className = "button buttonRdark";
  document.getElementById("button9.").className = "button buttonRdark";
  document.getElementById("button10.").className = "button buttonRdark";
  document.getElementById("button11.").className = "button buttonRdark";
  document.getElementById("button12.").className = "button buttonRdark";
  document.getElementById("button13.").className = "button buttonRdark";
  document.getElementById("button14.").className = "button buttonRdark";
  document.getElementById("button15.").className = "button buttonRdark";
  document.getElementById("button0.").className = "button2 buttonR2dark";
  document.getElementById("button1.").className = "button2 buttonR2dark";
  document.getElementById("button2.").className = "button2 buttonR2dark";
  document.getElementById("text15").className = "cblue3Dtdark";
  document.getElementById("text23").className = "cblue3Dtdark";
  document.getElementById("text22").className = "cblue3Dtdark";
  document.getElementById("text14").className = "cblue3Dtdark";
  document.getElementById("text13").className = "cblue3Dtdark";
  document.getElementById("text12").className = "cblue3Dtdark";
  document.getElementById("text11").className = "cblue3Dtdark";
  document.getElementById("text10").className = "cblue3Dtdark";
  document.getElementById("text9").className = "cblue3Dtdark";
  document.getElementById("text8").className = "cblue3Dtdark";
  document.getElementById("text7").className = "cblue3Dtdark";
  document.getElementById("text6").className = "cblue3Dtdark";
  document.getElementById("text5").className = "cblue3Dtdark";
  document.getElementById("text4").className = "cblue3Dtdark";
  document.getElementById("text3").className = "cblue3Dtdark";
  document.getElementById("text20").className = "cblue3Dtdark";
  document.getElementById("text19").className = "cblue3Dtdark";
  document.getElementById("text18").className = "cblue3Dtdark";
  document.getElementById("text17").className = "cblue3Dtdark";
  document.getElementById("text16").className = "cblue3Dsdark";
  document.getElementById("text2").className = "cblue3Dsdark";
  document.getElementById("text1").className = "cblue3Dsdark";
  document.getElementById("text32").className = "cblue3Dsdark";
  document.getElementById("text31").className = "cblue3Dsdark";
  document.getElementById("text0").className = "cblue3Dsdark";
  document.getElementById("yieldcolor").className = "cblue3Dsdark";
  document.getElementById("voicecolor").className = "cblue3Dtdark";
  document.getElementById("internetcolor").className = "cblue3Dtdark";
  document.getElementById("selfinstallcolor").className = "cblue3Dtdark";
  document.getElementById("bundlecolor").className = "cblue3Dtdark";
  document.getElementById("tvcolor").className = "cblue3Dtdark";
  lights = false; // Set light toggle to off
}

// Hide selection box on web page.
function closeAllSelect(elmnt) {
  var x, y, i, arrNo = [];
  x = document.getElementsByClassName("select-items");
  y = document.getElementsByClassName("select-selected");
  for(i = 0; i < y.length; i++) {
    if(elmnt == y[i]) {
      arrNo.push(i)
    } else {
      y[i].classList.remove("select-arrow-active");
    }
  }
  for(i = 0; i < x.length; i++) {
    if(arrNo.indexOf(i)) {
      x[i].classList.add("select-hide");
    }
  }
}

// Base code for page setup and event listening
for(i = 0; i < x.length; i++) {
  selElmnt = x[i].getElementsByTagName("select")[0];
  a = document.createElement("DIV");
  a.setAttribute("class", "select-selected");
  a.innerHTML = selElmnt.options[selElmnt.selectedIndex].innerHTML;
  x[i].appendChild(a);
  b = document.createElement("DIV");
  b.setAttribute("class", "select-items select-hide");
  for(j = 0; j < selElmnt.length; j++) {
    c = document.createElement("DIV");
    c.innerHTML = selElmnt.options[j].innerHTML;
    c.addEventListener("click", function(e) {
      var y, i, k, s, h;
      s = this.parentNode.parentNode.getElementsByTagName("select")[0];
      h = this.parentNode.previousSibling;
      for(i = 0; i < s.length; i++) {
        if(s.options[i].innerHTML == this.innerHTML) {
          s.selectedIndex = i;
          h.innerHTML = this.innerHTML;
          y = this.parentNode.getElementsByClassName("same-as-selected");
          for(k = 0; k < y.length; k++) {
            y[k].removeAttribute("class");
          }
          this.setAttribute("class", "same-as-selected");
          break;
        }
      }
      h.click();
    });
    b.appendChild(c);
  }
  x[i].appendChild(b);
  a.addEventListener("click", function(e) {
    e.stopPropagation();
    closeAllSelect(this);
    this.nextSibling.classList.toggle("select-hide");
    this.classList.toggle("select-arrow-active");
  });
}
