#ifndef org_apache_lucene_search_spell_SuggestMode_H
#define org_apache_lucene_search_spell_SuggestMode_H

#include "java/lang/Enum.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace spell {
          class SuggestMode;
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
        namespace spell {

          class SuggestMode : public ::java::lang::Enum {
           public:
            enum {
              mid_valueOf_74fe85d4d33681d3,
              mid_values_8de0133cf65a6173,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SuggestMode(jobject obj) : ::java::lang::Enum(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SuggestMode(const SuggestMode& obj) : ::java::lang::Enum(obj) {}

            static SuggestMode *SUGGEST_ALWAYS;
            static SuggestMode *SUGGEST_MORE_POPULAR;
            static SuggestMode *SUGGEST_WHEN_NOT_IN_INDEX;

            static SuggestMode valueOf(const ::java::lang::String &);
            static JArray< SuggestMode > values();
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
        namespace spell {
          extern PyType_Def PY_TYPE_DEF(SuggestMode);
          extern PyTypeObject *PY_TYPE(SuggestMode);

          class t_SuggestMode {
          public:
            PyObject_HEAD
            SuggestMode object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_SuggestMode *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const SuggestMode&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const SuggestMode&, PyTypeObject *);
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
