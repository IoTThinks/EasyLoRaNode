// https://techtutorialsx.com/2017/07/01/esp32-arduino-controlling-a-buzzer-with-pwm/

void setupSpeaker()
{
  // speaker
  ledcSetup(SPK_CHANNEL, SPK_FREQ, SPK_RESOLUTION);
  ledcAttachPin(SPK, SPK_CHANNEL);   
  onSpeaker();
  delay(100);
  offSpeaker(); 
}

void onSpeaker()
{
  Serial.println("On Speaker");
  //ledcWriteTone(SPK_CHANNEL, 2400);
  ledcWrite(SPK_CHANNEL, SPK_FREQ);
}

void offSpeaker()
{
  Serial.println("Off Speaker");
  ledcWrite(SPK_CHANNEL, 0);
}


