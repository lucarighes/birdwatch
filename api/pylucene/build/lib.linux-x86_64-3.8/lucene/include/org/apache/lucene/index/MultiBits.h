#ifndef org_apache_lucene_index_MultiBits_H
#define org_apache_lucene_index_MultiBits_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Bits;
      }
      namespace index {
        class IndexReader;
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
      namespace index {

        class MultiBits : public ::java::lang::Object {
         public:
          enum {
            mid_get_a1d30e1ee40c89a2,
            mid_getLiveDocs_9c861d8363e9bed5,
            mid_length_9972fcc56b44e79d,
            mid_toString_db9b55ba01e03e4b,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit MultiBits(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          MultiBits(const MultiBits& obj) : ::java::lang::Object(obj) {}

          jboolean get(jint) const;
          static ::org::apache::lucene::util::Bits getLiveDocs(const ::org::apache::lucene::index::IndexReader &);
          jint length() const;
          ::java::lang::String toString() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        extern PyType_Def PY_TYPE_DEF(MultiBits);
        extern PyTypeObject *PY_TYPE(MultiBits);

        class t_MultiBits {
        public:
          PyObject_HEAD
          MultiBits object;
          static PyObject *wrap_Object(const MultiBits&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
