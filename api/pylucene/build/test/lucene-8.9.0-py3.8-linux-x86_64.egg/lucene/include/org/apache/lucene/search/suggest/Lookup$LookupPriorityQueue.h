#ifndef org_apache_lucene_search_suggest_Lookup$LookupPriorityQueue_H
#define org_apache_lucene_search_suggest_Lookup$LookupPriorityQueue_H

#include "org/apache/lucene/util/PriorityQueue.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace suggest {
          class Lookup$LookupResult;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace suggest {

          class Lookup$LookupPriorityQueue : public ::org::apache::lucene::util::PriorityQueue {
           public:
            enum {
              mid_init$_040c4cd0390c5aff,
              mid_getResults_1a5a470cdd517b9c,
              mid_lessThan_6ee020b4330cb3c5,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Lookup$LookupPriorityQueue(jobject obj) : ::org::apache::lucene::util::PriorityQueue(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Lookup$LookupPriorityQueue(const Lookup$LookupPriorityQueue& obj) : ::org::apache::lucene::util::PriorityQueue(obj) {}

            Lookup$LookupPriorityQueue(jint);

            JArray< ::org::apache::lucene::search::suggest::Lookup$LookupResult > getResults() const;
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
        namespace suggest {
          extern PyType_Def PY_TYPE_DEF(Lookup$LookupPriorityQueue);
          extern PyTypeObject *PY_TYPE(Lookup$LookupPriorityQueue);

          class t_Lookup$LookupPriorityQueue {
          public:
            PyObject_HEAD
            Lookup$LookupPriorityQueue object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_Lookup$LookupPriorityQueue *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const Lookup$LookupPriorityQueue&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const Lookup$LookupPriorityQueue&, PyTypeObject *);
            static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
