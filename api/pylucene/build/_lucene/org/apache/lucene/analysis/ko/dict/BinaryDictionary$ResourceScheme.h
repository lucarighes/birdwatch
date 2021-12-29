#ifndef org_apache_lucene_analysis_ko_dict_BinaryDictionary$ResourceScheme_H
#define org_apache_lucene_analysis_ko_dict_BinaryDictionary$ResourceScheme_H

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
        namespace ko {
          namespace dict {
            class BinaryDictionary$ResourceScheme;
          }
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
        namespace ko {
          namespace dict {

            class BinaryDictionary$ResourceScheme : public ::java::lang::Enum {
             public:
              enum {
                mid_valueOf_f78105a4a1e3a008,
                mid_values_690b8c63c1f82d27,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit BinaryDictionary$ResourceScheme(jobject obj) : ::java::lang::Enum(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              BinaryDictionary$ResourceScheme(const BinaryDictionary$ResourceScheme& obj) : ::java::lang::Enum(obj) {}

              static BinaryDictionary$ResourceScheme *CLASSPATH;
              static BinaryDictionary$ResourceScheme *FILE;

              static BinaryDictionary$ResourceScheme valueOf(const ::java::lang::String &);
              static JArray< BinaryDictionary$ResourceScheme > values();
            };
          }
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
        namespace ko {
          namespace dict {
            extern PyType_Def PY_TYPE_DEF(BinaryDictionary$ResourceScheme);
            extern PyTypeObject *PY_TYPE(BinaryDictionary$ResourceScheme);

            class t_BinaryDictionary$ResourceScheme {
            public:
              PyObject_HEAD
              BinaryDictionary$ResourceScheme object;
              PyTypeObject *parameters[1];
              static PyTypeObject **parameters_(t_BinaryDictionary$ResourceScheme *self)
              {
                return (PyTypeObject **) &(self->parameters);
              }
              static PyObject *wrap_Object(const BinaryDictionary$ResourceScheme&);
              static PyObject *wrap_jobject(const jobject&);
              static PyObject *wrap_Object(const BinaryDictionary$ResourceScheme&, PyTypeObject *);
              static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
              static void install(PyObject *module);
              static void initialize(PyObject *module);
            };
          }
        }
      }
    }
  }
}

#endif
