#ifndef org_apache_lucene_search_comparators_MinDocIterator_H
#define org_apache_lucene_search_comparators_MinDocIterator_H

#include "org/apache/lucene/search/DocIdSetIterator.h"

namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace comparators {

          class MinDocIterator : public ::org::apache::lucene::search::DocIdSetIterator {
           public:
            enum {
              mid_advance_1e143afe1894d213,
              mid_cost_2e5ae9edcb9b072f,
              mid_docID_9972fcc56b44e79d,
              mid_nextDoc_9972fcc56b44e79d,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit MinDocIterator(jobject obj) : ::org::apache::lucene::search::DocIdSetIterator(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            MinDocIterator(const MinDocIterator& obj) : ::org::apache::lucene::search::DocIdSetIterator(obj) {}

            jint advance(jint) const;
            jlong cost() const;
            jint docID() const;
            jint nextDoc() const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace comparators {
          extern PyType_Def PY_TYPE_DEF(MinDocIterator);
          extern PyTypeObject *PY_TYPE(MinDocIterator);

          class t_MinDocIterator {
          public:
            PyObject_HEAD
            MinDocIterator object;
            static PyObject *wrap_Object(const MinDocIterator&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
