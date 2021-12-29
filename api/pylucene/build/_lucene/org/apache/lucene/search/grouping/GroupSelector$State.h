#ifndef org_apache_lucene_search_grouping_GroupSelector$State_H
#define org_apache_lucene_search_grouping_GroupSelector$State_H

#include "java/lang/Enum.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace grouping {
          class GroupSelector$State;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace grouping {

          class GroupSelector$State : public ::java::lang::Enum {
           public:
            enum {
              mid_valueOf_cf8839c13fb24fd6,
              mid_values_d6364c6b73db0bf6,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit GroupSelector$State(jobject obj) : ::java::lang::Enum(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            GroupSelector$State(const GroupSelector$State& obj) : ::java::lang::Enum(obj) {}

            static GroupSelector$State *ACCEPT;
            static GroupSelector$State *SKIP;

            static GroupSelector$State valueOf(const ::java::lang::String &);
            static JArray< GroupSelector$State > values();
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace grouping {
          extern PyType_Def PY_TYPE_DEF(GroupSelector$State);
          extern PyTypeObject *PY_TYPE(GroupSelector$State);

          class t_GroupSelector$State {
          public:
            PyObject_HEAD
            GroupSelector$State object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_GroupSelector$State *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const GroupSelector$State&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const GroupSelector$State&, PyTypeObject *);
            static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
