// Generated by dia2code
#ifndef ENGINE__ENGINE__H
#define ENGINE__ENGINE__H


namespace engine {
  class CommandSet;
  class Command;
  class Ruler;
}

#include "Ruler.h"
#include "CommandSet.h"

namespace engine {

  /// class Engine - 
  class Engine {
    // Associations
    // Attributes
  protected:
    state::State currentState;
    CommandSet* currentCommands;
    CommandSet* waitingCommands;
    // Operations
  public:
    ~Engine ();
    Engine ();
    EngineMode getMode () const;
    const state::State& getState () const;
    void addCommand (Command* cmd);
    void takeCommands (CommandSet& commands);
  protected:
    void loadLevel (const char* file_name) const;
    void setMode (EngineMode mode);
  };

};

#endif