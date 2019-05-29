//การใช้งาน 7-Segment

// Define คือ การกำหนดชื่อตัวแปรให้กับขา(Pin) ใน NodeMCU, Arduino
// D0-D6 ที่พี่ได้ทำการกำหนดนั้นสามารถดูตำแหน่งได้จากบน Board ได้เลย
#define A D0
#define B D1
#define C D2
#define D D3
#define E D4
#define F D5
#define G D6

void setup() {
  // Void Setup จะทำงานตอน Board Start แค่ครั้งเดียว
  // ตั้งค่าสถานะของ Pin บน NodeMCU, Arduino (INPUT/OUTPUT).
  // INPUT เป็นการส่งค่าเข้า NodeMCU, Arduino เพื่อนำมาใช้งานในโค๊ดของเรา
  // - Digital จะมีค่าอยู่ที่(0, 1) จะใช้ digitalRead(Pin ที่ต้องการที่จะอ่านค่า) ในการอ่านค่า
  // - Analog ค่าที่ได้จะอยู่ในช่วง(0-1023) จะใช้ analogRead(Pin ที่ต้องการที่จะอ่านค่า) ในการอ่านค่า
  // OUTPUT จะเป็นส่วนในการแสดงผลลัพธ์ โดยค่าจะส่งตามค่าของ Digital, Analog

  pinMode(A, OUTPUT);
  pinMode(B, OUTPUT);
  pinMode(C, OUTPUT);
  pinMode(D, OUTPUT);
  pinMode(E, OUTPUT);
  pinMode(F, OUTPUT);
  pinMode(G, OUTPUT);
  Serial.begin(9600); // ในส่วนนี้เรามีการกำหนด Serial Port เพื่อให้ Board สามารถสื่อสารกับคอมพิวเตอร์ได้ โดยที่พี่กำหนดคือ 9600
}

void loop() {
  // Void loop หลังจากที่ทำงานในส่วนของ Void setup เสร็จแล้วจะมาทำในส่วนนี้ต่อโดยในส่วนนี้จะทำงานตลอดจนกว่าเราจะหยุดการทำงานของบอร์ด

  int value = 0; // สร้างตัวแปรที่ชื่อว่า value เก็บค่าประเภทจำนวนเต็ม(int คือ integer) โดยพี่ใส่ให้ค่าเท่ากับ 0 โดยน้องๆสามารถเปลี่ยนค่าได้จากตรงนี้โดยค่าที่สามารถใส่ได้จะเป็นเลข(0-9 ใส่เลขอะไรไฟก็จะแสดงผลตามเลขนั้น)

  Serial.println(value); // ส่วนนี้จะเป็นการแสดงผลทางหน้าจอว่าเราได้กำหนดค่า value นั้นมีค่าเท่ากับเท่าไหร่

  // ส่วนนี้จะเป็นส่วนของการเช็คเงื่อนไขโดยเช็คจากค่า value ที่เรากำหนดไว้ก่อนหน้านั้น
  // หมายเหตุ :
  // digitalWrite(ขา Pin ที่เราจะใช้, ค่าสถานะของการทำงาน โดยที่ค่า HIGH คือเปิดไฟ ส่วน LOW คือปิดไฟ)
  // เมื่อเรากำหนดค่า value = 0 ผลลัพธ์ที่ได้จะแสดงไฟบน 7-Segment คือเลข 0
  if(value == 0) {
    digitalWrite(A, HIGH);
    digitalWrite(B, HIGH);
    digitalWrite(C, HIGH);
    digitalWrite(D, HIGH);
    digitalWrite(E, HIGH);
    digitalWrite(F, HIGH);
    digitalWrite(G, LOW);
  }

  // เมื่อเรากำหนดค่า value = 1 ผลลัพธ์ที่ได้จะแสดงไฟบน 7-Segment คือเลข 1
  else if(value == 1) {
    digitalWrite(A, LOW);
    digitalWrite(B, HIGH);
    digitalWrite(C, HIGH);
    digitalWrite(D, LOW);
    digitalWrite(E, LOW);
    digitalWrite(F, LOW);
    digitalWrite(G, LOW);
  }
  // เมื่อเรากำหนดค่า value = 2 ผลลัพธ์ที่ได้จะแสดงไฟบน 7-Segment คือเลข 2
  else if(value == 2) {
    digitalWrite(A, HIGH);
    digitalWrite(B, HIGH);
    digitalWrite(C, LOW);
    digitalWrite(D, HIGH);
    digitalWrite(E, HIGH);
    digitalWrite(F, LOW);
    digitalWrite(G, HIGH);
  }

  // เมื่อเรากำหนดค่า value = 3 ผลลัพธ์ที่ได้จะแสดงไฟบน 7-Segment คือเลข 3
  else if(value == 3) {
    digitalWrite(A, HIGH);
    digitalWrite(B, HIGH);
    digitalWrite(C, HIGH);
    digitalWrite(D, HIGH);
    digitalWrite(E, LOW);
    digitalWrite(F, LOW);
    digitalWrite(G, HIGH);
  }
  // เมื่อเรากำหนดค่า value = 4 ผลลัพธ์ที่ได้จะแสดงไฟบน 7-Segment คือเลข 4
  else if(value == 4) {
    digitalWrite(A, LOW);
    digitalWrite(B, HIGH);
    digitalWrite(C, HIGH);
    digitalWrite(D, LOW);
    digitalWrite(E, LOW);
    digitalWrite(F, HIGH);
    digitalWrite(G, HIGH);
  }

  // เมื่อเรากำหนดค่า value = 5 ผลลัพธ์ที่ได้จะแสดงไฟบน 7-Segment คือเลข 5
  else if() {
    //Code here
  }
  // เมื่อเรากำหนดค่า value = 6 ผลลัพธ์ที่ได้จะแสดงไฟบน 7-Segment คือเลข 6
    //Code here

  // เมื่อเรากำหนดค่า value = 7 ผลลัพธ์ที่ได้จะแสดงไฟบน 7-Segment คือเลข 7
    //Code here

  // เมื่อเรากำหนดค่า value = 8 ผลลัพธ์ที่ได้จะแสดงไฟบน 7-Segment คือเลข 8
    //Code here

 // เมื่อเรากำหนดค่า value = 9 ผลลัพธ์ที่ได้จะแสดงไฟบน 7-Segment คือเลข 9
    //Code here
}
