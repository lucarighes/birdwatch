#ifndef org_apache_lucene_index_IndexWriter$IndexReaderWarmer_H
#define org_apache_lucene_index_IndexWriter$IndexReaderWarmer_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class LeafReader;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class IndexWriter$IndexReaderWarmer : public ::java::lang::Object {
         public:
          enum {
            mid_warm_947f3bbc1666c05e,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit IndexWriter$IndexReaderWarmer(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          IndexWriter$IndexReaderWarmer(const IndexWriter$IndexReaderWarmer& obj) : ::java::lang::Object(obj) {}

          void warm(const ::org::apache::lucene::index::LeafReader &) const;
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
        extern PyType_Def PY_TYPE_DEF(IndexWriter$IndexReaderWarmer);
        extern PyTypeObject *PY_TYPE(IndexWriter$IndexReaderWarmer);

        class t_IndexWriter$IndexReaderWarmer {
        public:
          PyObject_HEAD
          IndexWriter$IndexReaderWarmer object;
          static PyObject *wrap_Object(const IndexWriter$IndexReaderWarmer&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
