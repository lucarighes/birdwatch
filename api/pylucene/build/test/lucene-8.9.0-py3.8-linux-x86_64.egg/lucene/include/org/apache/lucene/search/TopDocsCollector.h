#ifndef org_apache_lucene_search_TopDocsCollector_H
#define org_apache_lucene_search_TopDocsCollector_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Collector;
        class TopDocs;
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

        class TopDocsCollector : public ::java::lang::Object {
         public:
          enum {
            mid_getTotalHits_9972fcc56b44e79d,
            mid_topDocs_45154c559b39de4e,
            mid_topDocs_a28828dc6b19e268,
            mid_topDocs_147fb0db3e29666e,
            mid_populateResults_22b73975846c3758,
            mid_newTopDocs_89238c61a7db05c2,
            mid_topDocsSize_9972fcc56b44e79d,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit TopDocsCollector(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          TopDocsCollector(const TopDocsCollector& obj) : ::java::lang::Object(obj) {}

          jint getTotalHits() const;
          ::org::apache::lucene::search::TopDocs topDocs() const;
          ::org::apache::lucene::search::TopDocs topDocs(jint) const;
          ::org::apache::lucene::search::TopDocs topDocs(jint, jint) const;
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
        extern PyType_Def PY_TYPE_DEF(TopDocsCollector);
        extern PyTypeObject *PY_TYPE(TopDocsCollector);

        class t_TopDocsCollector {
        public:
          PyObject_HEAD
          TopDocsCollector object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_TopDocsCollector *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const TopDocsCollector&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const TopDocsCollector&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
