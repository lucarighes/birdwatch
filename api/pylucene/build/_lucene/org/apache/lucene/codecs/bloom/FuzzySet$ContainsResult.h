#ifndef org_apache_lucene_codecs_bloom_FuzzySet$ContainsResult_H
#define org_apache_lucene_codecs_bloom_FuzzySet$ContainsResult_H

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
      namespace codecs {
        namespace bloom {
          class FuzzySet$ContainsResult;
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        namespace bloom {

          class FuzzySet$ContainsResult : public ::java::lang::Enum {
           public:
            enum {
              mid_valueOf_1bfb75237b095bf0,
              mid_values_e3682583c4d1be18,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit FuzzySet$ContainsResult(jobject obj) : ::java::lang::Enum(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            FuzzySet$ContainsResult(const FuzzySet$ContainsResult& obj) : ::java::lang::Enum(obj) {}

            static FuzzySet$ContainsResult *MAYBE;
            static FuzzySet$ContainsResult *NO;

            static FuzzySet$ContainsResult valueOf(const ::java::lang::String &);
            static JArray< FuzzySet$ContainsResult > values();
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
      namespace codecs {
        namespace bloom {
          extern PyType_Def PY_TYPE_DEF(FuzzySet$ContainsResult);
          extern PyTypeObject *PY_TYPE(FuzzySet$ContainsResult);

          class t_FuzzySet$ContainsResult {
          public:
            PyObject_HEAD
            FuzzySet$ContainsResult object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_FuzzySet$ContainsResult *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const FuzzySet$ContainsResult&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const FuzzySet$ContainsResult&, PyTypeObject *);
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
