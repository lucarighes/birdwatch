#ifndef org_apache_lucene_search_DiversifiedTopDocsCollector_H
#define org_apache_lucene_search_DiversifiedTopDocsCollector_H

#include "org/apache/lucene/search/TopDocsCollector.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class LeafReaderContext;
      }
      namespace search {
        class LeafCollector;
        class DiversifiedTopDocsCollector$ScoreDocKey;
        class ScoreMode;
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

        class DiversifiedTopDocsCollector : public ::org::apache::lucene::search::TopDocsCollector {
         public:
          enum {
            mid_init$_438c62480c481c65,
            mid_getLeafCollector_d5dbc8c30b21e920,
            mid_scoreMode_8a35254b82ee8276,
            mid_newTopDocs_89238c61a7db05c2,
            mid_insert_e634a8a02c7606ae,
            mid_getKeys_2eac8f5cce452ee7,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit DiversifiedTopDocsCollector(jobject obj) : ::org::apache::lucene::search::TopDocsCollector(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          DiversifiedTopDocsCollector(const DiversifiedTopDocsCollector& obj) : ::org::apache::lucene::search::TopDocsCollector(obj) {}

          DiversifiedTopDocsCollector(jint, jint);

          ::org::apache::lucene::search::LeafCollector getLeafCollector(const ::org::apache::lucene::index::LeafReaderContext &) const;
          ::org::apache::lucene::search::ScoreMode scoreMode() const;
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
        extern PyType_Def PY_TYPE_DEF(DiversifiedTopDocsCollector);
        extern PyTypeObject *PY_TYPE(DiversifiedTopDocsCollector);

        class t_DiversifiedTopDocsCollector {
        public:
          PyObject_HEAD
          DiversifiedTopDocsCollector object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_DiversifiedTopDocsCollector *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const DiversifiedTopDocsCollector&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const DiversifiedTopDocsCollector&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
