#ifndef org_apache_lucene_search_DocIdSetIterator_H
#define org_apache_lucene_search_DocIdSetIterator_H

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
      namespace search {
        class DocIdSetIterator;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class DocIdSetIterator : public ::java::lang::Object {
         public:
          enum {
            mid_init$_f2cc1bce94666404,
            mid_advance_1e143afe1894d213,
            mid_all_5e088db3f3a73f3d,
            mid_cost_2e5ae9edcb9b072f,
            mid_docID_9972fcc56b44e79d,
            mid_empty_173d81d7b8f93882,
            mid_nextDoc_9972fcc56b44e79d,
            mid_range_49e04a876d0cf39a,
            mid_slowAdvance_1e143afe1894d213,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit DocIdSetIterator(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          DocIdSetIterator(const DocIdSetIterator& obj) : ::java::lang::Object(obj) {}

          static jint NO_MORE_DOCS;

          DocIdSetIterator();

          jint advance(jint) const;
          static DocIdSetIterator all(jint);
          jlong cost() const;
          jint docID() const;
          static DocIdSetIterator empty();
          jint nextDoc() const;
          static DocIdSetIterator range(jint, jint);
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        extern PyType_Def PY_TYPE_DEF(DocIdSetIterator);
        extern PyTypeObject *PY_TYPE(DocIdSetIterator);

        class t_DocIdSetIterator {
        public:
          PyObject_HEAD
          DocIdSetIterator object;
          static PyObject *wrap_Object(const DocIdSetIterator&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
