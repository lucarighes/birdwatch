#ifndef org_apache_lucene_util_PagedBytes_H
#define org_apache_lucene_util_PagedBytes_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Accountable;
        class PagedBytes$Reader;
        class PagedBytes$PagedBytesDataOutput;
        class BytesRef;
        class PagedBytes$PagedBytesDataInput;
      }
      namespace store {
        class IndexInput;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {

        class PagedBytes : public ::java::lang::Object {
         public:
          enum {
            mid_init$_040c4cd0390c5aff,
            mid_copy_d83dac9c2bf8d6bd,
            mid_copy_6919dc9b1ed68993,
            mid_copyUsingLengthPrefix_6f6ee5bba7f22d4c,
            mid_freeze_ed53a7ccc85cd8eb,
            mid_getDataInput_e168c75ab4d0482b,
            mid_getDataOutput_4e0eeedac11539bb,
            mid_getPointer_2e5ae9edcb9b072f,
            mid_ramBytesUsed_2e5ae9edcb9b072f,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PagedBytes(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PagedBytes(const PagedBytes& obj) : ::java::lang::Object(obj) {}

          PagedBytes(jint);

          void copy(const ::org::apache::lucene::store::IndexInput &, jlong) const;
          void copy(const ::org::apache::lucene::util::BytesRef &, const ::org::apache::lucene::util::BytesRef &) const;
          jlong copyUsingLengthPrefix(const ::org::apache::lucene::util::BytesRef &) const;
          ::org::apache::lucene::util::PagedBytes$Reader freeze(jboolean) const;
          ::org::apache::lucene::util::PagedBytes$PagedBytesDataInput getDataInput() const;
          ::org::apache::lucene::util::PagedBytes$PagedBytesDataOutput getDataOutput() const;
          jlong getPointer() const;
          jlong ramBytesUsed() const;
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
        extern PyType_Def PY_TYPE_DEF(PagedBytes);
        extern PyTypeObject *PY_TYPE(PagedBytes);

        class t_PagedBytes {
        public:
          PyObject_HEAD
          PagedBytes object;
          static PyObject *wrap_Object(const PagedBytes&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
