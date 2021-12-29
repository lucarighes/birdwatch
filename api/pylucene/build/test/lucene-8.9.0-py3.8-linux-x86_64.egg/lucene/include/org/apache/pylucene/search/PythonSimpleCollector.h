#ifndef org_apache_pylucene_search_PythonSimpleCollector_H
#define org_apache_pylucene_search_PythonSimpleCollector_H

#include "org/apache/lucene/search/SimpleCollector.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class LeafReaderContext;
      }
      namespace search {
        class Scorable;
        class ScoreMode;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class Throwable;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace pylucene {
      namespace search {

        class PythonSimpleCollector : public ::org::apache::lucene::search::SimpleCollector {
         public:
          enum {
            mid_init$_f2cc1bce94666404,
            mid_collect_040c4cd0390c5aff,
            mid_collect_da161bce5801b190,
            mid_doSetNextReader_8747e0e89febf88d,
            mid_finalize_f2cc1bce94666404,
            mid_pythonDecRef_f2cc1bce94666404,
            mid_pythonExtension_2e5ae9edcb9b072f,
            mid_pythonExtension_9c778c9bce6694df,
            mid_scoreMode_8a35254b82ee8276,
            mid_setScorer_57a565cc0113e133,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PythonSimpleCollector(jobject obj) : ::org::apache::lucene::search::SimpleCollector(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PythonSimpleCollector(const PythonSimpleCollector& obj) : ::org::apache::lucene::search::SimpleCollector(obj) {}

          PythonSimpleCollector();

          void collect(jint) const;
          void collect(jint, jfloat) const;
          void doSetNextReader(const ::org::apache::lucene::index::LeafReaderContext &) const;
          void finalize() const;
          void pythonDecRef() const;
          jlong pythonExtension() const;
          void pythonExtension(jlong) const;
          ::org::apache::lucene::search::ScoreMode scoreMode() const;
          void setScorer(const ::org::apache::lucene::search::Scorable &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace pylucene {
      namespace search {
        extern PyType_Def PY_TYPE_DEF(PythonSimpleCollector);
        extern PyTypeObject *PY_TYPE(PythonSimpleCollector);

        class t_PythonSimpleCollector {
        public:
          PyObject_HEAD
          PythonSimpleCollector object;
          static PyObject *wrap_Object(const PythonSimpleCollector&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
