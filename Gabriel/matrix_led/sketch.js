
var matrix = [];
var canvasHeight = 400;
var canvasWidth = 800;
var colorValue = document.getElementById('colorSelector').value;
var numberOfColumns = document.getElementById('columns').value;
var numberOfRows = document.getElementById('rows').value;
var heightLed;
var widthLed;

function setup() {
	cnv = createCanvas(canvasWidth, canvasHeight);
	cnv.mouseClicked(mouseClick);
	cnv.mouseMoved(mouseMv);
	cnv.touchMoved(mouseMv);
	cnv.touchStarted(mouseClick);
	background(245);
	stroke('black');
	strokeWeight(2);
	sizeChanged();
}

function draw() {
	matrix.forEach(function(row){
		row.forEach(function(element){
			fill(element.color);
			rect(element.X, element.Y, element.width, element.height);
		});
	});
}


function mouseMv(element){
	if(mouseIsPressed){
		mouseClick(element);
	}
	
	return false;
}
function mouseClick(element) {
	
	console.log(element);
		
	x = element.layerX;
	y = element.layerY;
	matrix.forEach(function(row){
		row.forEach(function(cell){
			if((cell.X < x) && 
				(x < cell.X+cell.width) &&
				(cell.Y < y) &&
				(y < cell.Y+cell.height)){
					cell.color = colorValue;
			}
		});
	});
	return false;
}

function changeColor(){
	colorValue = document.getElementById('colorSelector').value;
}

function quainc(){
	var offset = document.getElementById('quinconce').checked ? heightLed/2 : widthLed/(-2) ;
	matrix.forEach(function(row){
		row.forEach(function(element){
			if(element.col%2 == 1){
				element.Y = element.Y + offset;
			}
		});
	});
}

function gomme(){
	colorValue = document.getElementById('gomme').checked ? "#ffffff" : document.getElementById('colorSelector').value;
}

function sizeChanged(){
	var row = [];
	matrix = [];
	numberOfRows = document.getElementById('rows').value;
	numberOfColumns = document.getElementById('columns').value;
	
	heightLed = (canvasHeight/numberOfRows);
	widthLed = (canvasWidth/numberOfColumns);
	
	for(var e = 0; e < numberOfColumns; e++){
		row = [];
		for(var i = 0; i < numberOfRows; i++){
			append(row,
			{row: i,
			col:e,
			X: e*widthLed,
			Y: i*heightLed,
			height: heightLed,
			width: widthLed, 
			color: "#ffffff"});
		}
		append(matrix,row);
	}
}