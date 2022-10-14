
double calculate_angle = 0;
double integral =0;
double delta_t= Brain.Timer.time(msec)-last_t;
//use integral to calculate rotation angle
calculate_angle += 0.0031*rotation_scale*delta_t*6/180*PI;

double actual_angle = Inertial3.rotation(degrees)*PI/180;
double error = calculate_angle-actual_angle;
integral = integral + error*delta_t;
double derivative = (error - previous_error) /delat_t;
double output = Kp*error + Ki * integral + Kd * derivative;
double previous_error =error;
double last_t = Brain.Timer.time(msec);