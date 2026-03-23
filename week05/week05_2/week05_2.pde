//week05-2
void setup(){
  size(800,500);
}
void draw(){
  for(int y=0;y<500;y+=50){
    for(int x=0;x<800;x+=50){
      if(x<mouseX&&mouseY<x+50) fill(#5DFF1F);
      else if(y<mouseY&&mouseX<y+50) fill(#5DFF1F);
      else fill(255);
      rect(x,y,50,50);
    } 
  }   
}      
