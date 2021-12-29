#ifndef org_apache_lucene_util_PagedBytes$PagedBytesDataInput_H
#define org_apache_lucene_util_PagedBytes$PagedBytesDataInput_H

#include "org/apache/lucene/store/DataInput.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class PagedBytes$PagedBytesDataInput;
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

        class PagedBytes$PagedBytesDataInput : public ::org::apache::lucene::store::DataInput {
         public:
          enum {
            mid_clone_e168c75ab4d0482b,
            mid_getPosition_2e5ae9edcb9b072f,
            mid_readByte_871cd52a74f26213,
            mid_readBytes_43fdd39c09bb2fad,
            mid_setPosition_9c778c9bce6694df,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PagedBytes$PagedBytesDataInput(jobject obj) : ::org::apache::lucene::store::DataInput(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PagedBytes$PagedBytesDataInput(const PagedBytes$PagedBytesDataInput& obj) : ::org::apache::lucene::store::DataInput(obj) {}

          PagedBytes$PagedBytesDataInput clone() const;
          jlong getPosition() const;
          jbyte readByte() const;
          void readBytes(const JArray< jbyte > &, jint, jint) const;
          void setPosition(jlong) const;
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
        extern PyType_Def PY_TYPE_DEF(PagedBytes$PagedBytesDataInput);
        extern PyTypeObject *PY_TYPE(PagedBytes$PagedBytesDataInput);

        class t_PagedBytes$PagedBytesDataInput {
        public:
          PyObject_HEAD
          PagedBytes$PagedBytesDataInput object;
          static PyObject *wrap_Object(const PagedBytes$PagedBytesDataInput&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
