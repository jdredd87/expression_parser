#include "expression_parser.h"

void setup() {
  Serial.begin(9600);

  if (CrashReport) {
    Serial.println(CrashReport);
  }

  char *f1 = "3+3";
  double val1 = parse_expression(f1);  
  Serial.println(val1);

  char *f2 = "3+tacos";
  double val2 = parse_expression(f2); // <--- should fail
  Serial.println(val2);
}

void loop() {
  // put your main code here, to run repeatedly:

}
