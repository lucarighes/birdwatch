#ifndef org_apache_lucene_search_DiversifiedTopDocsCollector$ScoreDocKey_H
#define org_apache_lucene_search_DiversifiedTopDocsCollector$ScoreDocKey_H

#include "org/apache/lucene/search/ScoreDoc.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class DiversifiedTopDocsCollector$ScoreDocKey;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Long;
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class DiversifiedTopDocsCollector$ScoreDocKey : public ::org::apache::lucene::search::ScoreDoc {
         public:
          enum {
            mid_getKey_24165e10e82b50a8,
            mid_toString_db9b55ba01e03e4b,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit DiversifiedTopDocsCollector$ScoreDocKey(jobject obj) : ::org::apache::lucene::search::ScoreDoc(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          DiversifiedTopDocsCollector$ScoreDocKey(const DiversifiedTopDocsCollector$ScoreDocKey& obj) : ::org::apache::lucene::search::ScoreDoc(obj) {}

          ::java::lang::Long getKey() const;
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
        extern PyType_Def PY_TYPE_DEF(DiversifiedTopDocsCollector$ScoreDocKey);
        extern PyTypeObject *PY_TYPE(DiversifiedTopDocsCollector$ScoreDocKey);

        class t_DiversifiedTopDocsCollector$ScoreDocKey {
        public:
          PyObject_HEAD
          DiversifiedTopDocsCollector$ScoreDocKey object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_DiversifiedTopDocsCollector$ScoreDocKey *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const DiversifiedTopDocsCollector$ScoreDocKey&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const DiversifiedTopDocsCollector$ScoreDocKey&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
