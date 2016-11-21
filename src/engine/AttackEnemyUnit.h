// Generated by dia2code
#ifndef ENGINE__ATTACKENEMYUNIT__H
#define ENGINE__ATTACKENEMYUNIT__H

#include <iostream>

namespace state {
  class MobileElement;
};
namespace engine {
  class Action;
}

#include "Action.h"
#include "state/MobileElement.h"

namespace engine {

  /// class AttackEnemyUnit - 
  class AttackEnemyUnit : public engine::Action {
    // Attributes
  protected:
    state::MobileElement* attacker;
    state::MobileElement* defender;
    // Operations
  public:
    AttackEnemyUnit (state::MobileElement* attacker, state::MobileElement* defender);
    ~AttackEnemyUnit ();
  };

};

#endif
