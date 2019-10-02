// tests go here; this will not be compiled when this package is used as a library

MuseOLED.init(32, 128)
MuseOLED.showString("hello, world!")
MuseOLED.showString("counter:")
let item = 0
basic.forever(() => {
    basic.pause(1000)
    item += 1
    MuseOLED.showNumber(item)
})

