#ifndef org_apache_lucene_index_PKIndexSplitter_H
#define org_apache_lucene_index_PKIndexSplitter_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class Term;
        class IndexWriterConfig;
      }
      namespace store {
        class Directory;
      }
      namespace search {
        class Query;
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
      namespace index {

        class PKIndexSplitter : public ::java::lang::Object {
         public:
          enum {
            mid_init$_7933d0aff3596c51,
            mid_init$_aa2aaa576b8ac589,
            mid_init$_0a9e625411962393,
            mid_init$_5debbf787d957c54,
            mid_split_f2cc1bce94666404,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PKIndexSplitter(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PKIndexSplitter(const PKIndexSplitter& obj) : ::java::lang::Object(obj) {}

          PKIndexSplitter(const ::org::apache::lucene::store::Directory &, const ::org::apache::lucene::store::Directory &, const ::org::apache::lucene::store::Directory &, const ::org::apache::lucene::index::Term &);
          PKIndexSplitter(const ::org::apache::lucene::store::Directory &, const ::org::apache::lucene::store::Directory &, const ::org::apache::lucene::store::Directory &, const ::org::apache::lucene::search::Query &);
          PKIndexSplitter(const ::org::apache::lucene::store::Directory &, const ::org::apache::lucene::store::Directory &, const ::org::apache::lucene::store::Directory &, const ::org::apache::lucene::index::Term &, const ::org::apache::lucene::index::IndexWriterConfig &, const ::org::apache::lucene::index::IndexWriterConfig &);
          PKIndexSplitter(const ::org::apache::lucene::store::Directory &, const ::org::apache::lucene::store::Directory &, const ::org::apache::lucene::store::Directory &, const ::org::apache::lucene::search::Query &, const ::org::apache::lucene::index::IndexWriterConfig &, const ::org::apache::lucene::index::IndexWriterConfig &);

          void split() const;
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
        extern PyType_Def PY_TYPE_DEF(PKIndexSplitter);
        extern PyTypeObject *PY_TYPE(PKIndexSplitter);

        class t_PKIndexSplitter {
        public:
          PyObject_HEAD
          PKIndexSplitter object;
          static PyObject *wrap_Object(const PKIndexSplitter&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
