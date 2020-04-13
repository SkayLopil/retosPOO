//Aqui empieza el sketch
var player1;
var player2;
function setup() {
  createCanvas(400, 400);
  frameRate(10);
  player1 = new Zombie(); //jugador 1
  player2 = new Luigi();  //jugador 2
}
function draw() {
  background(0);
  player1.mostrar();
  if(keyCode == 37){
  player1.izquierda();
  }
  if(keyCode == 39){
    player1.derecha();
  }
  //jugador numero 2
  player2.mostrar();
  if(keyCode == 65){
    player2.izquierda();
  }
  if(keyCode == 68){
    player2.derecha();
  }
}

//Aqui empieza el folder que contiene las clases
class Zombie{
 constructor(){
   //posicion del personaje
   this.x = width/2;
   this.y = height/2;
   this.velx = 4;
   this.dir = 0.5;
   //Imagenes
   this.img = [];//array
   this.frame = 0;
   for(var i = 0; i < 11; i++){
     this.img[i] = loadImage("zombie_"+ i +".gif");
   }
 }
  mostrar(){
   translate(this.x, this.y);
   scale(this.dir,0.5);
   imageMode(CENTER);
   image(this.img[this.frame], 0, 0);
    }
  derecha(){
    this.frame++;
    this.x = this.x + this.velx;
    this.dir = 0.5;
    if(this.frame > 10){
    this.frame = 0;
    }
  }
  izquierda(){
    this.dir = -0.5;
    this.x = this.x - this.velx;
    this.frame++;
    if(this.frame > 10){
    this.frame = 0;
    }
  }
}
class Luigi{
 constructor(){
   //posicion del personaje
   this.x = width/2;
   this.y = height/2;
   this.velx = 4;
   this.dir = 0.5;
   //Imagenes
   this.img = [];//array
   this.frame = 0;
   for(var i = 0; i < 11; i++){
     this.img[i] = loadImage("luigui_"+ i +".gif");
   }
 }
  mostrar(){
   translate(this.x, this.y);
   scale(this.dir,0.5);
   imageMode(CENTER);
   image(this.img[this.frame], 0, 0);
    }
  derecha(){
    this.frame++;
    this.x = this.x + this.velx;
    this.dir = 0.5;
    if(this.frame > 10){
    this.frame = 0;
    }
  }
  izquierda(){
    this.dir = -0.5;
    this.x = this.x - this.velx;
    this.frame++;
    if(this.frame > 10){
    this.frame = 0;
    }
  }
}
//disculpe que no haya podido subirselo en JavaScript