#ifndef org_apache_lucene_index_MultiPostingsEnum$EnumWithSlice_H
#define org_apache_lucene_index_MultiPostingsEnum$EnumWithSlice_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class ReaderSlice;
        class PostingsEnum;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class MultiPostingsEnum$EnumWithSlice : public ::java::lang::Object {
         public:
          enum {
            mid_toString_db9b55ba01e03e4b,
            max_mid
          };

          enum {
            fid_postingsEnum,
            fid_slice,
            max_fid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static jfieldID *fids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit MultiPostingsEnum$EnumWithSlice(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          MultiPostingsEnum$EnumWithSlice(const MultiPostingsEnum$EnumWithSlice& obj) : ::java::lang::Object(obj) {}

          ::org::apache::lucene::index::PostingsEnum _get_postingsEnum() const;
          void _set_postingsEnum(const ::org::apache::lucene::index::PostingsEnum &) const;
          ::org::apache::lucene::index::ReaderSlice _get_slice() const;
          void _set_slice(const ::org::apache::lucene::index::ReaderSlice &) const;

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
        extern PyType_Def PY_TYPE_DEF(MultiPostingsEnum$EnumWithSlice);
        extern PyTypeObject *PY_TYPE(MultiPostingsEnum$EnumWithSlice);

        class t_MultiPostingsEnum$EnumWithSlice {
        public:
          PyObject_HEAD
          MultiPostingsEnum$EnumWithSlice object;
          static PyObject *wrap_Object(const MultiPostingsEnum$EnumWithSlice&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
