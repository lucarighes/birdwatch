#ifndef org_apache_lucene_index_LeafReaderContext_H
#define org_apache_lucene_index_LeafReaderContext_H

#include "org/apache/lucene/index/IndexReaderContext.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class LeafReaderContext;
        class LeafReader;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
  namespace util {
    class List;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class LeafReaderContext : public ::org::apache::lucene::index::IndexReaderContext {
         public:
          enum {
            mid_children_49ec78390f08338a,
            mid_leaves_49ec78390f08338a,
            mid_reader_8d1e1130d298ee34,
            mid_toString_db9b55ba01e03e4b,
            max_mid
          };

          enum {
            fid_docBase,
            fid_ord,
            max_fid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static jfieldID *fids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit LeafReaderContext(jobject obj) : ::org::apache::lucene::index::IndexReaderContext(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          LeafReaderContext(const LeafReaderContext& obj) : ::org::apache::lucene::index::IndexReaderContext(obj) {}

          jint _get_docBase() const;
          jint _get_ord() const;

          ::java::util::List children() const;
          ::java::util::List leaves() const;
          ::org::apache::lucene::index::LeafReader reader() const;
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
        extern PyType_Def PY_TYPE_DEF(LeafReaderContext);
        extern PyTypeObject *PY_TYPE(LeafReaderContext);

        class t_LeafReaderContext {
        public:
          PyObject_HEAD
          LeafReaderContext object;
          static PyObject *wrap_Object(const LeafReaderContext&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
