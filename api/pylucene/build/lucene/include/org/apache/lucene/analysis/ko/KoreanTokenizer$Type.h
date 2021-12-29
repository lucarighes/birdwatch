#ifndef org_apache_lucene_analysis_ko_KoreanTokenizer$Type_H
#define org_apache_lucene_analysis_ko_KoreanTokenizer$Type_H

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
          class KoreanTokenizer$Type;
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

          class KoreanTokenizer$Type : public ::java::lang::Enum {
           public:
            enum {
              mid_valueOf_cf4d800eb8d82b8c,
              mid_values_e18da5871824b6c8,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit KoreanTokenizer$Type(jobject obj) : ::java::lang::Enum(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            KoreanTokenizer$Type(const KoreanTokenizer$Type& obj) : ::java::lang::Enum(obj) {}

            static KoreanTokenizer$Type *KNOWN;
            static KoreanTokenizer$Type *UNKNOWN;
            static KoreanTokenizer$Type *USER;

            static KoreanTokenizer$Type valueOf(const ::java::lang::String &);
            static JArray< KoreanTokenizer$Type > values();
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
        namespace ko {
          extern PyType_Def PY_TYPE_DEF(KoreanTokenizer$Type);
          extern PyTypeObject *PY_TYPE(KoreanTokenizer$Type);

          class t_KoreanTokenizer$Type {
          public:
            PyObject_HEAD
            KoreanTokenizer$Type object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_KoreanTokenizer$Type *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const KoreanTokenizer$Type&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const KoreanTokenizer$Type&, PyTypeObject *);
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
