#ifndef org_apache_lucene_search_FilterLeafCollector_H
#define org_apache_lucene_search_FilterLeafCollector_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
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
      namespace search {
        class Scorable;
        class LeafCollector;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class FilterLeafCollector : public ::java::lang::Object {
         public:
          enum {
            mid_init$_ecd966a57601cc44,
            mid_collect_040c4cd0390c5aff,
            mid_setScorer_57a565cc0113e133,
            mid_toString_db9b55ba01e03e4b,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FilterLeafCollector(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FilterLeafCollector(const FilterLeafCollector& obj) : ::java::lang::Object(obj) {}

          FilterLeafCollector(const ::org::apache::lucene::search::LeafCollector &);

          void collect(jint) const;
          void setScorer(const ::org::apache::lucene::search::Scorable &) const;
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
      namespace search {
        extern PyType_Def PY_TYPE_DEF(FilterLeafCollector);
        extern PyTypeObject *PY_TYPE(FilterLeafCollector);

        class t_FilterLeafCollector {
        public:
          PyObject_HEAD
          FilterLeafCollector object;
          static PyObject *wrap_Object(const FilterLeafCollector&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
