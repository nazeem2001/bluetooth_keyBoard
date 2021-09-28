#include <HIDKeyboard.h>
HIDKeyboard keyboard;
void setup() {
  keyboard.begin();
  Serial1.begin(9600);
  

  // put your setup code here, to run once:

}

void loop() {
 String inStr;

if (Serial1.available()){
  // put your main code here, to run repeatedly:
   inStr= Serial1.readString();
   Serial1.print(inStr);
   if(inStr.equals("K.tab")|inStr.equals("K.tab\r\n"))
{
keyboard.tapSpecialKey(TAB);
}
if(inStr.equals("K.caps_lock")|inStr.equals("K.caps_lock\r\n"))
{
keyboard.tapSpecialKey(CAPSLOCK);
}
if(inStr.equals("K.shift")|inStr.equals("K.shift\r\n"))
{
keyboard.tapSpecialKey(SHIFT);
}
if(inStr.equals("K.ctrl_l")|inStr.equals("K.ctrl_l\r\n"))
{
keyboard.tapSpecialKey(CTRL);
}
if(inStr.equals("K.cmd")|inStr.equals("K.cmd\r\n"))
{
keyboard.tapSpecialKey(GUI);
}
if(inStr.equals("K.alt_l")|inStr.equals("K.alt_l\r\n"))
{
keyboard.tapSpecialKey(ALT);
}
if(inStr.equals("K.space")|inStr.equals("K.space\r\n"))
{
keyboard.tapSpecialKey(SPACEBAR);
}
if(inStr.equals("K.left")|inStr.equals("K.left\r\n"))
{
keyboard.tapSpecialKey(LEFTARROW);
}
if(inStr.equals("K.up")|inStr.equals("K.up\r\n"))
{
keyboard.tapSpecialKey(UPARROW);
}
if(inStr.equals("K.right")|inStr.equals("K.right\r\n"))
{
keyboard.tapSpecialKey(RIGHTARROW);
}
if(inStr.equals("K.down")|inStr.equals("K.down\r\n"))
{
keyboard.tapSpecialKey(DOWNARROW);
}
if(inStr.equals("K.page_down")|inStr.equals("K.page_down\r\n"))
{
keyboard.tapSpecialKey(PAGEDOWN);
}
if(inStr.equals("K.page_up")|inStr.equals("K.page_up\r\n"))
{
keyboard.tapSpecialKey(PAGEUP);
}
if(inStr.equals("K.home")|inStr.equals("K.home\r\n"))
{
keyboard.tapSpecialKey(HOME);
}
if(inStr.equals("K.delete")|inStr.equals("K.delete\r\n"))
{
keyboard.tapSpecialKey(DELETE);
}
if(inStr.equals("K.insert")|inStr.equals("K.insert\r\n"))
{
keyboard.tapSpecialKey(INSERT);
}
if(inStr.equals("K.ctrl_l")|inStr.equals("K.ctrl_l\r\n"))
{
keyboard.tapSpecialKey(CTRL);
}
if(inStr.equals("K.print_screen")|inStr.equals("K.print_screen\r\n"))
{
keyboard.tapSpecialKey(PRINTSCREEN);
}
if(inStr.equals("K.scroll_lock")|inStr.equals("K.scroll_lock\r\n"))
{
keyboard.tapSpecialKey(SCROLLLOCK);
}
if(inStr.equals("K.num_lock")|inStr.equals("K.num_lock\r\n"))
{
keyboard.tapSpecialKey(NUMLOCK);
}
if(inStr.equals("K.esc")|inStr.equals("K.esc\r\n"))
{
keyboard.tapSpecialKey(ESCAPE);
}
if(inStr.equals("K.enter")|inStr.equals("K.enter\r\n"))
{
keyboard.tapSpecialKey(ENTER);
}
if(inStr.equals("K.backspace")|inStr.equals("K.backspace\r\n"))
{
keyboard.tapSpecialKey(BACKSPACE);
}

   else{
     int str_len = inStr.length() + 1;
     char cha[str_len];
     inStr.toCharArray(cha, str_len);
     
     keyboard.print(cha);
     Serial1.print(cha);
     }
  }
}
