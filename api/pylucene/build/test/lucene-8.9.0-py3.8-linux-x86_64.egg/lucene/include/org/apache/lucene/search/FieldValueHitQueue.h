#ifndef org_apache_lucene_search_FieldValueHitQueue_H
#define org_apache_lucene_search_FieldValueHitQueue_H

#include "org/apache/lucene/util/PriorityQueue.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class LeafReaderContext;
      }
      namespace search {
        class SortField;
        class LeafFieldComparator;
        class FieldComparator;
        class FieldValueHitQueue;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class Object;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class FieldValueHitQueue : public ::org::apache::lucene::util::PriorityQueue {
         public:
          enum {
            mid_create_199d803b90218dfa,
            mid_getComparators_9ea4bc24b88e775e,
            mid_getComparators_b924d680b3cf1048,
            mid_getReverseMul_d2c45ef07a322466,
            mid_lessThan_93b00f87a714d725,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FieldValueHitQueue(jobject obj) : ::org::apache::lucene::util::PriorityQueue(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FieldValueHitQueue(const FieldValueHitQueue& obj) : ::org::apache::lucene::util::PriorityQueue(obj) {}

          static FieldValueHitQueue create(const JArray< ::org::apache::lucene::search::SortField > &, jint);
          JArray< ::org::apache::lucene::search::FieldComparator > getComparators() const;
          JArray< ::org::apache::lucene::search::LeafFieldComparator > getComparators(const ::org::apache::lucene::index::LeafReaderContext &) const;
          JArray< jint > getReverseMul() const;
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
        extern PyType_Def PY_TYPE_DEF(FieldValueHitQueue);
        extern PyTypeObject *PY_TYPE(FieldValueHitQueue);

        class t_FieldValueHitQueue {
        public:
          PyObject_HEAD
          FieldValueHitQueue object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_FieldValueHitQueue *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const FieldValueHitQueue&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const FieldValueHitQueue&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
