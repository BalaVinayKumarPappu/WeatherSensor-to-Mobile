// This Test Port skeleton source file was generated by the
// TTCN-3 Compiler of the TTCN-3 Test Executor version CRL 113 200/6 R2A
// for U-VINNU\Vinnu (Vinnu@Vinnu) on Wed May 31 00:19:32 2017

// Copyright (c) 2000-2017 Ericsson Telecom AB

// You may modify this file. Complete the body of empty functions and
// add your member functions here.

#include "servicePort.hh"

namespace WeatherSensor__to__Mobile {

servicePort::servicePort(const char *par_port_name)
	: servicePort_BASE(par_port_name)
{

}

servicePort::~servicePort()
{

}

void servicePort::set_parameter(const char * /*parameter_name*/,
	const char * /*parameter_value*/)
{

}

/*void servicePort::Handle_Fd_Event(int fd, boolean is_readable,
	boolean is_writable, boolean is_error) {}*/

void servicePort::Handle_Fd_Event_Error(int /*fd*/)
{

}

void servicePort::Handle_Fd_Event_Writable(int /*fd*/)
{

}

void servicePort::Handle_Fd_Event_Readable(int /*fd*/)
{

}

/*void servicePort::Handle_Timeout(double time_since_last_call) {}*/

void servicePort::user_map(const char * /*system_port*/)
{

}

void servicePort::user_unmap(const char * /*system_port*/)
{

}

void servicePort::user_start()
{

}

void servicePort::user_stop()
{

}

void servicePort::outgoing_send(const weatherResponse& /*send_par*/)
{

}

} /* end of namespace */

