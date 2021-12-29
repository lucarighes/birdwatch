#ifndef org_apache_lucene_index_IndexCommit_H
#define org_apache_lucene_index_IndexCommit_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Map;
    class Collection;
  }
  namespace lang {
    class Comparable;
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
      namespace index {
        class IndexCommit;
      }
      namespace store {
        class Directory;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class IndexCommit : public ::java::lang::Object {
         public:
          enum {
            mid_compareTo_72e6178fc455abbc,
            mid_delete_f2cc1bce94666404,
            mid_equals_8b72f2dcdde6fd1d,
            mid_getDirectory_7452b086ce8219b2,
            mid_getFileNames_d4dfbf7a26ff41df,
            mid_getGeneration_2e5ae9edcb9b072f,
            mid_getSegmentCount_9972fcc56b44e79d,
            mid_getSegmentsFileName_db9b55ba01e03e4b,
            mid_getUserData_1c3426541413a55d,
            mid_hashCode_9972fcc56b44e79d,
            mid_isDeleted_8454bd5aa23fd11e,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit IndexCommit(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          IndexCommit(const IndexCommit& obj) : ::java::lang::Object(obj) {}

          jint compareTo(const IndexCommit &) const;
          void delete$() const;
          jboolean equals(const ::java::lang::Object &) const;
          ::org::apache::lucene::store::Directory getDirectory() const;
          ::java::util::Collection getFileNames() const;
          jlong getGeneration() const;
          jint getSegmentCount() const;
          ::java::lang::String getSegmentsFileName() const;
          ::java::util::Map getUserData() const;
          jint hashCode() const;
          jboolean isDeleted() const;
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
        extern PyType_Def PY_TYPE_DEF(IndexCommit);
        extern PyTypeObject *PY_TYPE(IndexCommit);

        class t_IndexCommit {
        public:
          PyObject_HEAD
          IndexCommit object;
          static PyObject *wrap_Object(const IndexCommit&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
