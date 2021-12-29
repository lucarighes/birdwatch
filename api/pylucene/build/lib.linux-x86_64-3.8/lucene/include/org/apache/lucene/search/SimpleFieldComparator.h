#ifndef org_apache_lucene_search_SimpleFieldComparator_H
#define org_apache_lucene_search_SimpleFieldComparator_H

#include "org/apache/lucene/search/FieldComparator.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class LeafReaderContext;
      }
      namespace search {
        class LeafFieldComparator;
        class Scorable;
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
      namespace search {

        class SimpleFieldComparator : public ::org::apache::lucene::search::FieldComparator {
         public:
          enum {
            mid_init$_f2cc1bce94666404,
            mid_getLeafComparator_6183906b7058c4b5,
            mid_setScorer_57a565cc0113e133,
            mid_doSetNextReader_8747e0e89febf88d,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit SimpleFieldComparator(jobject obj) : ::org::apache::lucene::search::FieldComparator(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          SimpleFieldComparator(const SimpleFieldComparator& obj) : ::org::apache::lucene::search::FieldComparator(obj) {}

          SimpleFieldComparator();

          ::org::apache::lucene::search::LeafFieldComparator getLeafComparator(const ::org::apache::lucene::index::LeafReaderContext &) const;
          void setScorer(const ::org::apache::lucene::search::Scorable &) const;
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
        extern PyType_Def PY_TYPE_DEF(SimpleFieldComparator);
        extern PyTypeObject *PY_TYPE(SimpleFieldComparator);

        class t_SimpleFieldComparator {
        public:
          PyObject_HEAD
          SimpleFieldComparator object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_SimpleFieldComparator *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const SimpleFieldComparator&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const SimpleFieldComparator&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
