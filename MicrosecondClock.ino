//            A
//  ========================
//  =                      =
//  =                      =
//  =                      =
//F =                      = B
//  =                      =
//  =                      =
//  =          G           =
//  ========================
//  =                      =
//  =                      =
//  =                      =
//E =                      = C
//  =                      =
//  =                      =
//  =          D           =   ==
//  ========================   ==  DP

const int DIGIT_1_SEGMENT_A = 31;
const int DIGIT_1_SEGMENT_B = 37;
const int DIGIT_1_SEGMENT_C = 33;
const int DIGIT_1_SEGMENT_D = 34;
const int DIGIT_1_SEGMENT_E = 36;
const int DIGIT_1_SEGMENT_F = 30;
const int DIGIT_1_SEGMENT_G = 35;
const int DIGIT_1_SEGMENT_DP = 32;

const int DIGIT_2_SEGMENT_A = 23;
const int DIGIT_2_SEGMENT_B = 29;
const int DIGIT_2_SEGMENT_C = 25;
const int DIGIT_2_SEGMENT_D = 26;
const int DIGIT_2_SEGMENT_E = 28;
const int DIGIT_2_SEGMENT_F = 22;
const int DIGIT_2_SEGMENT_G = 27;
const int DIGIT_2_SEGMENT_DP = 24;

const int DIGIT_3_SEGMENT_A = 39;
const int DIGIT_3_SEGMENT_B = 45;
const int DIGIT_3_SEGMENT_C = 41;
const int DIGIT_3_SEGMENT_D = 42;
const int DIGIT_3_SEGMENT_E = 44;
const int DIGIT_3_SEGMENT_F = 38;
const int DIGIT_3_SEGMENT_G = 43;
const int DIGIT_3_SEGMENT_DP = 40;

const int DIGIT_4_SEGMENT_A = 47;
const int DIGIT_4_SEGMENT_B = 53;
const int DIGIT_4_SEGMENT_C = 49;
const int DIGIT_4_SEGMENT_D = 50;
const int DIGIT_4_SEGMENT_E = 52;
const int DIGIT_4_SEGMENT_F = 46;
const int DIGIT_4_SEGMENT_G = 51;
const int DIGIT_4_SEGMENT_DP = 48;


int first_digit[8] = { DIGIT_1_SEGMENT_A, DIGIT_1_SEGMENT_B, DIGIT_1_SEGMENT_C, DIGIT_1_SEGMENT_D, DIGIT_1_SEGMENT_E, DIGIT_1_SEGMENT_F, DIGIT_1_SEGMENT_G, DIGIT_1_SEGMENT_DP };
int second_digit[8] = { DIGIT_2_SEGMENT_A, DIGIT_2_SEGMENT_B, DIGIT_2_SEGMENT_C, DIGIT_2_SEGMENT_D, DIGIT_2_SEGMENT_E, DIGIT_2_SEGMENT_F, DIGIT_2_SEGMENT_G, DIGIT_2_SEGMENT_DP };
int third_digit[8] = { DIGIT_3_SEGMENT_A, DIGIT_3_SEGMENT_B, DIGIT_3_SEGMENT_C, DIGIT_3_SEGMENT_D, DIGIT_3_SEGMENT_E, DIGIT_3_SEGMENT_F, DIGIT_3_SEGMENT_G, DIGIT_3_SEGMENT_DP };
int fourth_digit[8] = { DIGIT_4_SEGMENT_A, DIGIT_4_SEGMENT_B, DIGIT_4_SEGMENT_C, DIGIT_4_SEGMENT_D, DIGIT_4_SEGMENT_E, DIGIT_4_SEGMENT_F, DIGIT_4_SEGMENT_G, DIGIT_4_SEGMENT_DP };

int number_allOn[7] = { 1, 1, 1, 1, 1, 1, 1 };
int number_allOff[7] = { 0, 0, 0, 0, 0, 0, 0 };
int number_0[7] = { 1, 1, 1, 1, 1, 1, 0 };
int number_1[7] = { 0, 1, 1, 0, 0, 0, 0 };
int number_2[7] = { 1, 1, 0, 1, 1, 0, 1 };
int number_3[7] = { 1, 1, 1, 1, 0, 0, 1 };
int number_4[7] = { 0, 1, 1, 0, 0, 1, 1 };
int number_5[7] = { 1, 0, 1, 1, 0, 1, 1 };
int number_6[7] = { 1, 0, 1, 1, 1, 1, 1 };
int number_7[7] = { 1, 1, 1, 0, 0, 0, 0 };
int number_8[7] = { 1, 1, 1, 1, 1, 1, 1 };
int number_9[7] = { 1, 1, 1, 1, 0, 1, 1 };

int count = 0;
bool ledState = false;
char buffer[128];
int DEBUG = 1;
int lastTimestamp = 0;

void setup() {

  Serial.begin(115200);
  
  // put your setup code here, to run once:
  pinMode(LED_BUILTIN, OUTPUT);

  Serial.println("Setting up first digit LED IOs");
  pinMode(DIGIT_1_SEGMENT_A, OUTPUT);
  pinMode(DIGIT_1_SEGMENT_B, OUTPUT);
  pinMode(DIGIT_1_SEGMENT_C, OUTPUT);
  pinMode(DIGIT_1_SEGMENT_D, OUTPUT);
  pinMode(DIGIT_1_SEGMENT_E, OUTPUT);
  pinMode(DIGIT_1_SEGMENT_F, OUTPUT);
  pinMode(DIGIT_1_SEGMENT_G, OUTPUT);
  pinMode(DIGIT_1_SEGMENT_DP, OUTPUT);

  Serial.println("Setting up second digit LED IOs");
  pinMode(DIGIT_2_SEGMENT_A, OUTPUT);
  pinMode(DIGIT_2_SEGMENT_B, OUTPUT);
  pinMode(DIGIT_2_SEGMENT_C, OUTPUT);
  pinMode(DIGIT_2_SEGMENT_D, OUTPUT);
  pinMode(DIGIT_2_SEGMENT_E, OUTPUT);
  pinMode(DIGIT_2_SEGMENT_F, OUTPUT);
  pinMode(DIGIT_2_SEGMENT_G, OUTPUT);
  pinMode(DIGIT_2_SEGMENT_DP, OUTPUT);

  Serial.println("Setting up third digit LED IOs");
  pinMode(DIGIT_3_SEGMENT_A, OUTPUT);
  pinMode(DIGIT_3_SEGMENT_B, OUTPUT);
  pinMode(DIGIT_3_SEGMENT_C, OUTPUT);
  pinMode(DIGIT_3_SEGMENT_D, OUTPUT);
  pinMode(DIGIT_3_SEGMENT_E, OUTPUT);
  pinMode(DIGIT_3_SEGMENT_F, OUTPUT);
  pinMode(DIGIT_3_SEGMENT_G, OUTPUT);
  pinMode(DIGIT_3_SEGMENT_DP, OUTPUT);
  
  Serial.println("Setting up fourth digit LED IOs");
  pinMode(DIGIT_4_SEGMENT_A, OUTPUT);
  pinMode(DIGIT_4_SEGMENT_B, OUTPUT);
  pinMode(DIGIT_4_SEGMENT_C, OUTPUT);
  pinMode(DIGIT_4_SEGMENT_D, OUTPUT);
  pinMode(DIGIT_4_SEGMENT_E, OUTPUT);
  pinMode(DIGIT_4_SEGMENT_F, OUTPUT);
  pinMode(DIGIT_4_SEGMENT_G, OUTPUT);
  pinMode(DIGIT_4_SEGMENT_DP, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:


  int m = micros();
  //int m = millis();
  int s = m / 1000;

  if (m - lastTimestamp > 500) {
    ledState = !ledState;
    digitalWrite(LED_BUILTIN, ledState);
    lastTimestamp = m;
  }

  //sprintf(buffer, "s: %d\tm: %d", s, m);
  //Serial.println(buffer);

  // this is if you want to show hundreds of millseconds and hundreds of microseconds
  // hundreds of milliseconds 
  SetNumber(1, (s / 100) % 10, false);

  // tends of milliseconds
  SetNumber(2, (s / 10 % 10), false);      

  // thousandths of second (millisecond)
  SetNumber(3, s % 10, true);

  // tenths of milliseconds (hundreds of microseconds)
  SetNumber(4, (m / 100) % 10, false);

//  // this is if you want to show tens of milliseconds and tens of micro seconds
//  // tens 
//  if (s >= 100) {
//      SetNumber(1, (s / 10 % 10), false);
//  }    
//  else {  
//    SetNumber(1, s / 10, false);      
//  }
//
//  // singles
//  SetNumber(2, s % 10, true);
//
//  // tenths
//  SetNumber(3, (m / 100) % 10, false);
//
//  // hundredths
//  SetNumber(4, (m / 10) % 10, false);
}

// Set the number on the LCD panel
void SetNumber(int digit, int number, bool decimalPoint) {

  int* digit_pins;

  switch(digit) {
    case 1: digit_pins = first_digit; break;
    case 2: digit_pins = second_digit; break;
    case 3: digit_pins = third_digit; break;
    case 4: digit_pins = fourth_digit; break;
  }

  //sprintf (buffer, "SetNumber - Digit: %d\tNumber: %d\tDecimal: %s", digit, number, decimalPoint ? "true" : "false" );
  //Serial.println(buffer);
 
  for (int i = 0; i < 7; i++) {
    digitalWrite(digit_pins[i], !GetSegmentStateForNumber(number, i));
  }

  // turn on the decimal?
  digitalWrite(digit_pins[7], !decimalPoint);
}

bool GetSegmentStateForNumber(int number, int segment_number) {
  switch(number) {
    case 0:
      return number_0[segment_number];
      break;
    case 1:
      return number_1[segment_number];
      break;
    case 2:
      return number_2[segment_number];
      break;
    case 3:
      return number_3[segment_number];
      break;
    case 4:
      return number_4[segment_number];
      break;
    case 5:
      return number_5[segment_number];
      break;
    case 6:
      return number_6[segment_number];
      break;
    case 7:
      return number_7[segment_number];
      break;
    case 8:
      return number_8[segment_number];
      break;
    case 9:
      return number_9[segment_number];
      break;
    case -1:
      return number_allOn[segment_number];
      break;    
    default:
      return number_allOff[segment_number];
      break;
      
  }
}
