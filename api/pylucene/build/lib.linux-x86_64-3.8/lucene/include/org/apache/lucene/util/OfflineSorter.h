#ifndef org_apache_lucene_util_OfflineSorter_H
#define org_apache_lucene_util_OfflineSorter_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Comparator;
    namespace concurrent {
      class ExecutorService;
    }
  }
  namespace lang {
    class Class;
    class String;
  }
  namespace io {
    class IOException;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class Directory;
      }
      namespace util {
        class OfflineSorter$BufferSize;
        class BytesRef;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {

        class OfflineSorter : public ::java::lang::Object {
         public:
          enum {
            mid_init$_a9516587cd7033fe,
            mid_init$_55abbb9889e12777,
            mid_init$_5e4395b2c4e37b25,
            mid_getComparator_beb0414e0ec1de00,
            mid_getDirectory_7452b086ce8219b2,
            mid_getTempFileNamePrefix_db9b55ba01e03e4b,
            mid_sort_9bfa75c9f141b67f,
            mid_getReader_fdd98311b70cfc52,
            mid_getWriter_a3f4fcc649c141ac,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit OfflineSorter(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          OfflineSorter(const OfflineSorter& obj) : ::java::lang::Object(obj) {}

          static jlong ABSOLUTE_MIN_SORT_BUFFER_SIZE;
          static ::java::util::Comparator *DEFAULT_COMPARATOR;
          static jlong GB;
          static jint MAX_TEMPFILES;
          static jlong MB;
          static jlong MIN_BUFFER_SIZE_MB;

          OfflineSorter(const ::org::apache::lucene::store::Directory &, const ::java::lang::String &);
          OfflineSorter(const ::org::apache::lucene::store::Directory &, const ::java::lang::String &, const ::java::util::Comparator &);
          OfflineSorter(const ::org::apache::lucene::store::Directory &, const ::java::lang::String &, const ::java::util::Comparator &, const ::org::apache::lucene::util::OfflineSorter$BufferSize &, jint, jint, const ::java::util::concurrent::ExecutorService &, jint);

          ::java::util::Comparator getComparator() const;
          ::org::apache::lucene::store::Directory getDirectory() const;
          ::java::lang::String getTempFileNamePrefix() const;
          ::java::lang::String sort(const ::java::lang::String &) const;
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
        extern PyType_Def PY_TYPE_DEF(OfflineSorter);
        extern PyTypeObject *PY_TYPE(OfflineSorter);

        class t_OfflineSorter {
        public:
          PyObject_HEAD
          OfflineSorter object;
          static PyObject *wrap_Object(const OfflineSorter&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
