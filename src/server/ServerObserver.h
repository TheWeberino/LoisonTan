// Generated by dia2code
#ifndef SERVER__SERVEROBSERVER__H
#define SERVER__SERVEROBSERVER__H

#include <iostream>

#include "ServerEvent.h"

namespace server {

  /// class ServerObserver - 
  class ServerObserver {
    // Operations
  public:
    virtual ~ServerObserver ();
    virtual void ServerChanged (ServerEvent* s);
  };

};

#endif
