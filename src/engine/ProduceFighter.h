// Generated by dia2code
#ifndef ENGINE__PRODUCEFIGHTER__H
#define ENGINE__PRODUCEFIGHTER__H

#include <iostream>

namespace state {
  class ElementList;
};
namespace engine {
  class Action;
}

#include "Action.h"
#include "state/ElementList.h"

namespace engine {

  /// class ProduceFighter - 
  class ProduceFighter : public engine::Action {
    // Attributes
  protected:
    int x;
    int y;
    state::ElementList* ListOfElements;
    state::ElementList* ListOfTurn;
    int playerColor;
    // Operations
  public:
    ProduceFighter (int x, int y, state::ElementList* ListOfElements, state::ElementList* ListOfTurn, int playerColor);
    ~ProduceFighter ();
    void execute () const;
  };

};

#endif
