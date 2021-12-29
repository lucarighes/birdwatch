#ifndef org_apache_lucene_util_IntBlockPool$SliceWriter_H
#define org_apache_lucene_util_IntBlockPool$SliceWriter_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class IntBlockPool;
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

        class IntBlockPool$SliceWriter : public ::java::lang::Object {
         public:
          enum {
            mid_init$_8c5ae63a3106e19c,
            mid_getCurrentOffset_9972fcc56b44e79d,
            mid_reset_040c4cd0390c5aff,
            mid_startNewSlice_9972fcc56b44e79d,
            mid_writeInt_040c4cd0390c5aff,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit IntBlockPool$SliceWriter(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          IntBlockPool$SliceWriter(const IntBlockPool$SliceWriter& obj) : ::java::lang::Object(obj) {}

          IntBlockPool$SliceWriter(const ::org::apache::lucene::util::IntBlockPool &);

          jint getCurrentOffset() const;
          void reset(jint) const;
          jint startNewSlice() const;
          void writeInt(jint) const;
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
        extern PyType_Def PY_TYPE_DEF(IntBlockPool$SliceWriter);
        extern PyTypeObject *PY_TYPE(IntBlockPool$SliceWriter);

        class t_IntBlockPool$SliceWriter {
        public:
          PyObject_HEAD
          IntBlockPool$SliceWriter object;
          static PyObject *wrap_Object(const IntBlockPool$SliceWriter&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
