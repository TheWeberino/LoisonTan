// Generated by dia2code
#ifndef STATE__ELEMENTLIST__H
#define STATE__ELEMENTLIST__H

#include <iostream>
#include <vector>

namespace state {
  class State;
  class Element;
  class ElementList;
  class Observable;
}

#include "Observable.h"
#include "Element.h"

namespace state {

  /// class ElementList - 
  class ElementList : public state::Observable {
    // Associations
    // Attributes
  public:
    State& s;
    std::vector<Element*> elements;
    // Operations
  public:
    ElementList (State& s);
    ~ElementList ();
    bool equals (const ElementList& other) const;
    const State& getState () const;
    int const size ();
    Element* get (int i) const;
    void clear ();
    void set (int i, Element* e);
  };

};

#endif
