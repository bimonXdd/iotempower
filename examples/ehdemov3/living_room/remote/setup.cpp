const char* p="pressed";
const char* r="released";
button(lower, D0, r, p).with_pull_up(false);
button(left, D3, r, p);
button(right, D6, r, p);

led(blue, ONBOARDLED,"off","on").set("off");
led(red, D7);
led(yellow, D8);

dht(th, D1);

display(dp1, font_medium).i2c(D2, D5);
