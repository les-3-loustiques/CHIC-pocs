
var matrix;
var canvasHeight = 400;
var canvasWidth = 800;
var colorValue = document.getElementById('colorSelector').value;
var c
var numberOfColumns = document.getElementById('columns').value;

function setup() {
	createCanvas(canvasWidth, canvasHeight);
	background(245);
}

function draw() {
	stroke('black');
	strokeWeight(2);
	fill(colorValue);
	rect(40, 120, 120, 40);
	
}

function mouseReleased() {

}

function changeColor(){
	colorValue = document.getElementById('colorSelector').value;
	console.log(colorValue);
}

function sizeChanged(){
	var row = []
	numberOfRows = document.getElementById('rows').value;
	for(var i = 0; i < numberOfRows; i++){
		append(row,{height: (canvasHeight/numberOfRows), width: (canvasWidth/numberOfColumns), color: "#ffffff"});
	}
	console.log(row);
}