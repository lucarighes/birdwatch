#ifndef org_apache_lucene_store_IOContext_H
#define org_apache_lucene_store_IOContext_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class IOContext;
        class FlushInfo;
        class MergeInfo;
        class IOContext$Context;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {

        class IOContext : public ::java::lang::Object {
         public:
          enum {
            mid_init$_f2cc1bce94666404,
            mid_init$_8897978edf843878,
            mid_init$_23fae1dd76741319,
            mid_init$_4557bd3f2eec88bc,
            mid_init$_de1b75c1c9501eab,
            mid_equals_8b72f2dcdde6fd1d,
            mid_hashCode_9972fcc56b44e79d,
            mid_toString_db9b55ba01e03e4b,
            max_mid
          };

          enum {
            fid_context,
            fid_flushInfo,
            fid_mergeInfo,
            fid_readOnce,
            max_fid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static jfieldID *fids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit IOContext(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          IOContext(const IOContext& obj) : ::java::lang::Object(obj) {}

          static IOContext *DEFAULT;
          static IOContext *READ;
          static IOContext *READONCE;

          ::org::apache::lucene::store::IOContext$Context _get_context() const;
          ::org::apache::lucene::store::FlushInfo _get_flushInfo() const;
          ::org::apache::lucene::store::MergeInfo _get_mergeInfo() const;
          jboolean _get_readOnce() const;

          IOContext();
          IOContext(const ::org::apache::lucene::store::IOContext$Context &);
          IOContext(const ::org::apache::lucene::store::FlushInfo &);
          IOContext(const ::org::apache::lucene::store::MergeInfo &);
          IOContext(const IOContext &, jboolean);

          jboolean equals(const ::java::lang::Object &) const;
          jint hashCode() const;
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
      namespace store {
        extern PyType_Def PY_TYPE_DEF(IOContext);
        extern PyTypeObject *PY_TYPE(IOContext);

        class t_IOContext {
        public:
          PyObject_HEAD
          IOContext object;
          static PyObject *wrap_Object(const IOContext&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
