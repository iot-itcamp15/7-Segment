# 7-Segment 💻

7 Segment คือหน้าจอแสดงผลตัวเลข - ตัวอักษร (ได้บางตัว) ที่มีหน้าจอทำมาจากการจัดวางหลอด LED ในแนวยาว เมื่อทำให้หลอด LED แต่ละดวงติดพร้อมกัน ก็จะทำให้แสดงออกมาเป็นตัวเลขทรงเหลี่ยมได้

## 📌การแบ่งแยก 7 Segment
#### แบ่งตามขา Common
* Common Anode - ขาคอมม่อนจะต้องต่ออยู่กับขั่วบวก แล้วขาอื่นๆ ต่ออยู่กับกราว์ด จึงจะทำให้ส่วนนั้นๆติดสว่าง
* Common Cathode - ขาคอมม่อนจะต้องต่ออยู่กับขั่วลบ แล้วขาอื่นๆ ต่ออยู่กับขั้วบวก จึงจะทำให้ส่วนนั้นๆติดสว่าง
#### แบ่งตามขนาด
7 Segment มีด้วยกันหลายขนาด ขนาดที่เป็นมาตรฐานใช้งานทั่วไปคือขนาด 0.56 นิ้ว มีขนาดเล็กกว่า หรือใหญ่กว่าให้เลือกใช้งานด้วย
#### แบ่งตามจำนวนตัวเลข
ใน 7 Segment อาจจะมีตัวเลขแสดงผลหลายๆตัวติดอยู่ด้วยกัน ทำให้การต่อวงจรง่ายมากยิ่งขึ้น
#### แบ่งตามสี
* สีแดง
* สีเขียว
* สีอื่นๆ - ผสมสีเพื่อให้สีไม่เหมือนกันในแต่ละจุดได้

## 📌การสั่งงาน 7 Segment
7 Segment มีขาหลักๆอยู่ด้วยกันทั้งหมด 9 ขา คือ a b c d e f g dot และ common ในกรณีที่มีตัวเลขจำนวนหลักมากขึ้น ก็จะมีขา Common เพิ่มมากขึ้น เป็น com1 สำหรับควบคุมการแสดงผลหลักที่ 1 , com2 ควบคุมการแสดงผลหลักที่ 2 , com(n) ควบคุมการแสดงผลหลักที่ n

จากรูปที่ 2 จะเห็นว่าในแต่ละแถบยาว จะมีตัวอักษรกำกับอยู่ ซึ่งเป็นชื่อของขาที่ใช้ควบคุมแถบนั้น ตัวอย่างเช่น หากต้องการให้แสดงผลตัวเลข 1 จะต้องให้แถบ b และ c ติดสว่าง จึงจะได้เป็นรูปเลข 1 ที่สมบูรณ์ และหากต้องการให้ติดเลข 3 จะต้องให้แถบ a b c d และ g ติดสว่าง จึงจะทำให้แสดงเลข 3 ที่สมบูรณ์

การจะทำให้แถบแต่ละแถบติดสว่างได้ จะต้องทราบก่อนว่า 7 Segment นั้นเป็นคอมม้อนอะไร เมื่อทราบแล้วจะทำให้สามารถควบคุมการติดดับของแต่ละแถบได้ แบบเดียวกับการควบคุม LED โดยที่หากเป็นคอมม้อน Anode จะต้องต่อขาคอมม้นเข้ากับขั้วบวกของแหล่งจ่ายไฟ (5V) และหากต้องการให้แถบใดติดสว่าง จะต้องให้ขาของแถบนั้นต้องลงกราว์ด (เป็นลอจิก LOW หรือที่เรียกว่า ลอจิกศูนย์)

แต่ถ้าหากเป็นคอมม้อน Cathode จะต้องต่อขาคอมม้อนเข้ากับกราว์ด แล้วต่อขาของแถบที่ต้องการแสดงผลเข้าที่ขั้วบวกของแหล่งจ่าย (เป็นลอจิก HIGH หรือที่เรียกว่าลอจิกหนึ่ง)

## 📌ต่อวงจรใช้งานกับ Arduino

เพื่อความง่ายในการต่อวงจร และไม่ยุ่งยากในการเขียนโปรแแกรม ทำให้ในบทความนี้ผมเลือกที่จะใช้ขา 0 ถึงขา 6 ในการต่อร่วมกับ 7 Segment โดยเรียงให้ a - g ต่อเข้าที่ขา 0 - 7

* กรณี Comon Anode
![5](https://github.com/iot-itcamp15/7-Segment/blob/master/5.png)

* กรณี Comon Cathode
![4](https://github.com/iot-itcamp15/7-Segment/blob/master/4.PNG)

## 📌สามารถดูตำแหน่งได้จากรูปนี้ครับ
  โดยขา COM นั้นเราจะต่อลง GND ละส่วนขาด D0-D6 โดยตัวอย่างโค๊ดที่พี่ให้ไปนั้นจะแทนค่าด้วยตัวแปร A-G
![1](https://github.com/iot-itcamp15/7-Segment/blob/master/1.gif)
![3](https://github.com/iot-itcamp15/7-Segment/blob/master/3.gif)

## 📌ตัวอย่างการต่อ
  น้องๆสามารถดูรูปนี้แล้วทำตามได้เลยครับ อย่าลืมลองโหลดโค๊ดมารันด้วยนะ อันนี้เป็นแบบ Comon Cathode นะครับ
![2](https://github.com/iot-itcamp15/7-Segment/blob/master/2.jpg)

## รายชื่อพี่ 😎
* นายณภัทร อารยวัฒนาพงษ์ (พี่ภัทร)
* นายชาญวิทย์ เศรษฐวงศ์สิน (พี่แม็กซ์)
* นางสาวกฤติมา จันทะชาลี (พี่ออมสิน)
