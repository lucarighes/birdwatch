#ifndef org_apache_lucene_search_DisiPriorityQueue_H
#define org_apache_lucene_search_DisiPriorityQueue_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class DisiWrapper;
      }
    }
  }
}
namespace java {
  namespace util {
    class Iterator;
  }
  namespace lang {
    class Iterable;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class DisiPriorityQueue : public ::java::lang::Object {
         public:
          enum {
            mid_init$_040c4cd0390c5aff,
            mid_add_6468c0fd1cdc1ee8,
            mid_iterator_233a192dadb0917d,
            mid_pop_372bd5f47505c967,
            mid_size_9972fcc56b44e79d,
            mid_top_372bd5f47505c967,
            mid_topList_372bd5f47505c967,
            mid_updateTop_372bd5f47505c967,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit DisiPriorityQueue(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          DisiPriorityQueue(const DisiPriorityQueue& obj) : ::java::lang::Object(obj) {}

          DisiPriorityQueue(jint);

          ::org::apache::lucene::search::DisiWrapper add(const ::org::apache::lucene::search::DisiWrapper &) const;
          ::java::util::Iterator iterator() const;
          ::org::apache::lucene::search::DisiWrapper pop() const;
          jint size() const;
          ::org::apache::lucene::search::DisiWrapper top() const;
          ::org::apache::lucene::search::DisiWrapper topList() const;
          ::org::apache::lucene::search::DisiWrapper updateTop() const;
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
        extern PyType_Def PY_TYPE_DEF(DisiPriorityQueue);
        extern PyTypeObject *PY_TYPE(DisiPriorityQueue);

        class t_DisiPriorityQueue {
        public:
          PyObject_HEAD
          DisiPriorityQueue object;
          static PyObject *wrap_Object(const DisiPriorityQueue&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
