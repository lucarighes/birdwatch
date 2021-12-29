#ifndef org_apache_lucene_util_Bits$MatchNoBits_H
#define org_apache_lucene_util_Bits$MatchNoBits_H

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
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {

        class Bits$MatchNoBits : public ::java::lang::Object {
         public:
          enum {
            mid_init$_040c4cd0390c5aff,
            mid_get_a1d30e1ee40c89a2,
            mid_length_9972fcc56b44e79d,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit Bits$MatchNoBits(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          Bits$MatchNoBits(const Bits$MatchNoBits& obj) : ::java::lang::Object(obj) {}

          Bits$MatchNoBits(jint);

          jboolean get(jint) const;
          jint length() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        extern PyType_Def PY_TYPE_DEF(Bits$MatchNoBits);
        extern PyTypeObject *PY_TYPE(Bits$MatchNoBits);

        class t_Bits$MatchNoBits {
        public:
          PyObject_HEAD
          Bits$MatchNoBits object;
          static PyObject *wrap_Object(const Bits$MatchNoBits&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
