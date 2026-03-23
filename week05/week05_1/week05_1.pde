// week05-1 好玩的程式設計 for(迴圈)*2
//File-Prefence偏好設定, 字型社很大
//修改前, 要Ctrl-C Ctrl-V 貼一堆, 還要改, 很煩
size(800, 500);
for (int y=0; y<500; y+=50){
  for (int x=0; x<800; x+=50){
  rect(x, y, 50, 50);
  }
}
//for (int x=0; x<800; x+=50){
// rect(x, 50, 50, 50);
//}
//for (int x=0; x<800; x+=50){
//  rect(x, 100, 50, 50);
//}
