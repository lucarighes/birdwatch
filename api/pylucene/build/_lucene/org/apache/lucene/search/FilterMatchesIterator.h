#ifndef org_apache_lucene_search_FilterMatchesIterator_H
#define org_apache_lucene_search_FilterMatchesIterator_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Query;
        class MatchesIterator;
      }
    }
  }
}
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

        class FilterMatchesIterator : public ::java::lang::Object {
         public:
          enum {
            mid_endOffset_9972fcc56b44e79d,
            mid_endPosition_9972fcc56b44e79d,
            mid_getQuery_cbf839a480265450,
            mid_getSubMatches_f62a1cfba0155bff,
            mid_next_8454bd5aa23fd11e,
            mid_startOffset_9972fcc56b44e79d,
            mid_startPosition_9972fcc56b44e79d,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FilterMatchesIterator(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FilterMatchesIterator(const FilterMatchesIterator& obj) : ::java::lang::Object(obj) {}

          jint endOffset() const;
          jint endPosition() const;
          ::org::apache::lucene::search::Query getQuery() const;
          ::org::apache::lucene::search::MatchesIterator getSubMatches() const;
          jboolean next() const;
          jint startOffset() const;
          jint startPosition() const;
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
        extern PyType_Def PY_TYPE_DEF(FilterMatchesIterator);
        extern PyTypeObject *PY_TYPE(FilterMatchesIterator);

        class t_FilterMatchesIterator {
        public:
          PyObject_HEAD
          FilterMatchesIterator object;
          static PyObject *wrap_Object(const FilterMatchesIterator&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
