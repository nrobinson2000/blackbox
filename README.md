# blackbox
> An elegant IoT project built with the Particle Photon.
-------------------------------------------------------
# Project Log

## 2017-05-20
I started `blackbox` on 2017-05-18. I wanted to create a project using the
Particle Photon, and I wanted to create a sophisticated 3D-printed enclosure.
After scoring an antenna
[like this one on Adafruit](https://www.adafruit.com/product/944) that included
a U.FL adapter from the wireless card on an old PC, I was determined to make
a project that would utilize it. After some testing I found that my Photon gets
significantly better WiFi signal when using the U.FL antenna.

I then started working on the enclosure.
Using [Tinkercad](https://tinkercad.com), I eyeballed the measurements and
designed an initial prototype. The breadboard fit in snugly, as did the antenna
as well, but the lid was too large and the micro USB hole was too low.
As [this was a prototype](https://tinkercad.com/things/0NrL4sqKlKY),
I used below-satisfactory settings, and I hadn't bothered to change the tape on
the build plate.

After evaluating the initial prototype after printing it on 2017-05-19 I began
making the changes.  I reduced the size of the lid and I raised and increased
the size of the micro USB hole.  Tonight I am
[printing this version](https://tinkercad.com/things/7f0rGWDI544) with higher
settings, and I replaced the build plate tape.

Currently `blackbox` uses these components:

* [Particle Photon](https://www.adafruit.com/product/2721)
* [Adafruit BNO055](https://www.adafruit.com/product/2472)
* [Adafruit Micro Lipo](https://www.adafruit.com/product/1904)
* [Antenna like this one](https://www.adafruit.com/product/944)
* 3.7V 2000mAH Lithium Ion Battery
* Half-size breadboard
* Jumper wires and Dupont wires
* U.FL to RP-SMA adapter

I'd like to integrate the battery and Micro Lipo more into the design,
to optimally have everything inside the case, all organized. I'd like to be
able to charge `blackbox` without opening it if possible.

I want `blackbox` to be a portable (but not like 3G portable) hacking station
for doing all kinds of great things. I'd love to make use of the
[Keyboard Library](https://docs.particle.io/reference/firmware/photon/#keyboard)
which allows the Photon to act as a normal USB keyboard.

I just came up with an idea! I could make a USB Keyboard/Mouse game controller
using `blackbox` that would use accelerometer data.
