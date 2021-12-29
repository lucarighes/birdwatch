#ifndef org_apache_lucene_codecs_TermVectorsReader_H
#define org_apache_lucene_codecs_TermVectorsReader_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class Fields;
      }
      namespace codecs {
        class TermVectorsReader;
      }
      namespace util {
        class Accountable;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Cloneable;
    class Class;
  }
  namespace io {
    class Closeable;
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {

        class TermVectorsReader : public ::java::lang::Object {
         public:
          enum {
            mid_checkIntegrity_f2cc1bce94666404,
            mid_clone_f69eb90f55592154,
            mid_get_9997c94b783ad8be,
            mid_getMergeInstance_f69eb90f55592154,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit TermVectorsReader(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          TermVectorsReader(const TermVectorsReader& obj) : ::java::lang::Object(obj) {}

          void checkIntegrity() const;
          TermVectorsReader clone() const;
          ::org::apache::lucene::index::Fields get(jint) const;
          TermVectorsReader getMergeInstance() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        extern PyType_Def PY_TYPE_DEF(TermVectorsReader);
        extern PyTypeObject *PY_TYPE(TermVectorsReader);

        class t_TermVectorsReader {
        public:
          PyObject_HEAD
          TermVectorsReader object;
          static PyObject *wrap_Object(const TermVectorsReader&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
