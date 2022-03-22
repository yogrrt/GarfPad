# MIDI-Keyboard
 Macropad with rotary encoder, slide potentiometer, and OLED screen.

 This ReadMe will be updated as the project moves along, and will (hopefully) be posted to the larger collection by Help-14 when I feel more confident.

# Hardware

This little macropad is intended for use with the Elite-C V4. I'm not 100% sure on backwards compatability, but I am using some of the extra broken out pins so using a regular ProMicro will not work.

Rev 1 had a white backlighting scheme with a transistor driving the LEDs, while the most recent revision uses SK6812 MINI-E RGB LEDs for maximum gamer productivity.

The OLED is a standard 128 x 32 I2C module that is compatable with QMK, but the larger 128 x 64 version would also work just fine.

The EC11 encoder optionally can be used as another switch. You don't need to have it, and you can disable that switch in QMK, but it's pretty essential for the functionality out of the box.

# Who is this for?

Good question. This was mainly built as a substitute for the MidiFighter 3D. I had no reason to use the 3D capability, and I wanted to be able to change the feel of the switches since arcade buttons don't really appeal to me as much. The MidiFighter is also pretty chunky, and I'm on the move a lot, so I wanted something that would be slim and nearly pocketable. 

# How do I make one?

I'll get back to you on that.
