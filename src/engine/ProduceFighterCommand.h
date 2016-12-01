// Generated by dia2code
#ifndef ENGINE__PRODUCEFIGHTERCOMMAND__H
#define ENGINE__PRODUCEFIGHTERCOMMAND__H

#include <iostream>

namespace state {
  class ElementList;
};
namespace engine {
  class Command;
}

#include "CommandTypeID.h"
#include "Command.h"
#include "state/ElementList.h"

namespace engine {

  /// class ProduceFighterCommand - 
  class ProduceFighterCommand : public engine::Command {
    // Attributes
  protected:
    int x;
    int y;
    state::ElementList* ListOfElements;
    state::ElementList* ListOfTurn;
    int playerColor;
    // Operations
  public:
    ProduceFighterCommand (int x, int y, state::ElementList* ListOfElements, state::ElementList* ListOfTurn, int playerColor);
    ~ProduceFighterCommand ();
    CommandTypeID getCommandTypeID () const;
    int getX ();
    int getY ();
    state::ElementList* getListOfElements ();
    state::ElementList* getListOfTurn ();
    int getPlayerColor ();
  };

};

#endif