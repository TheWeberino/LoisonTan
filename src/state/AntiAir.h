// Generated by dia2code
#ifndef STATE__ANTIAIR__H
#define STATE__ANTIAIR__H


namespace state {
  class Element;
  class Ground;
}

#include "Ground.h"

namespace state {

  /// class AntiAir - 
  class AntiAir : public state::Ground {
    // Operations
  public:
    AntiAir ();
    TypeID const getTypeID ();
    bool const equals (const Element& other);
  };

};

#endif