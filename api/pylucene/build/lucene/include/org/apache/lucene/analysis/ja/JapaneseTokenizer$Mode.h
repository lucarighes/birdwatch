#ifndef org_apache_lucene_analysis_ja_JapaneseTokenizer$Mode_H
#define org_apache_lucene_analysis_ja_JapaneseTokenizer$Mode_H

#include "java/lang/Enum.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace ja {
          class JapaneseTokenizer$Mode;
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace ja {

          class JapaneseTokenizer$Mode : public ::java::lang::Enum {
           public:
            enum {
              mid_valueOf_b957995e57a3da75,
              mid_values_92a9327a61a3f948,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit JapaneseTokenizer$Mode(jobject obj) : ::java::lang::Enum(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            JapaneseTokenizer$Mode(const JapaneseTokenizer$Mode& obj) : ::java::lang::Enum(obj) {}

            static JapaneseTokenizer$Mode *EXTENDED;
            static JapaneseTokenizer$Mode *NORMAL;
            static JapaneseTokenizer$Mode *SEARCH;

            static JapaneseTokenizer$Mode valueOf(const ::java::lang::String &);
            static JArray< JapaneseTokenizer$Mode > values();
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
      namespace analysis {
        namespace ja {
          extern PyType_Def PY_TYPE_DEF(JapaneseTokenizer$Mode);
          extern PyTypeObject *PY_TYPE(JapaneseTokenizer$Mode);

          class t_JapaneseTokenizer$Mode {
          public:
            PyObject_HEAD
            JapaneseTokenizer$Mode object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_JapaneseTokenizer$Mode *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const JapaneseTokenizer$Mode&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const JapaneseTokenizer$Mode&, PyTypeObject *);
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
