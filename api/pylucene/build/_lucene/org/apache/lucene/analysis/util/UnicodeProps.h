#ifndef org_apache_lucene_analysis_util_UnicodeProps_H
#define org_apache_lucene_analysis_util_UnicodeProps_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Bits;
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
      namespace analysis {
        namespace util {

          class UnicodeProps : public ::java::lang::Object {
           public:

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit UnicodeProps(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            UnicodeProps(const UnicodeProps& obj) : ::java::lang::Object(obj) {}

            static ::java::lang::String *UNICODE_VERSION;
            static ::org::apache::lucene::util::Bits *WHITESPACE;
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
        namespace util {
          extern PyType_Def PY_TYPE_DEF(UnicodeProps);
          extern PyTypeObject *PY_TYPE(UnicodeProps);

          class t_UnicodeProps {
          public:
            PyObject_HEAD
            UnicodeProps object;
            static PyObject *wrap_Object(const UnicodeProps&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
