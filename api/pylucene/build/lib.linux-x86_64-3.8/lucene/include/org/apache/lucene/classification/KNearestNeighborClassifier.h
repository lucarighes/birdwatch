#ifndef org_apache_lucene_classification_KNearestNeighborClassifier_H
#define org_apache_lucene_classification_KNearestNeighborClassifier_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class IndexReader;
      }
      namespace search {
        namespace similarities {
          class Similarity;
        }
        class Query;
      }
      namespace classification {
        class Classifier;
        class ClassificationResult;
      }
      namespace analysis {
        class Analyzer;
      }
      namespace util {
        class BytesRef;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
  namespace io {
    class IOException;
  }
  namespace util {
    class List;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace classification {

        class KNearestNeighborClassifier : public ::java::lang::Object {
         public:
          enum {
            mid_init$_770a00a5864970d8,
            mid_assignClass_5edc036bda71a93d,
            mid_getClasses_25278b4b3ab80e37,
            mid_getClasses_a5d57c41d0cd0867,
            mid_toString_db9b55ba01e03e4b,
            mid_classifyFromTopDocs_6fc8879c93b9f25b,
            mid_buildListFromTopDocs_e221c61940c02716,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit KNearestNeighborClassifier(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          KNearestNeighborClassifier(const KNearestNeighborClassifier& obj) : ::java::lang::Object(obj) {}

          KNearestNeighborClassifier(const ::org::apache::lucene::index::IndexReader &, const ::org::apache::lucene::search::similarities::Similarity &, const ::org::apache::lucene::analysis::Analyzer &, const ::org::apache::lucene::search::Query &, jint, jint, jint, const ::java::lang::String &, const JArray< ::java::lang::String > &);

          ::org::apache::lucene::classification::ClassificationResult assignClass(const ::java::lang::String &) const;
          ::java::util::List getClasses(const ::java::lang::String &) const;
          ::java::util::List getClasses(const ::java::lang::String &, jint) const;
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
      namespace classification {
        extern PyType_Def PY_TYPE_DEF(KNearestNeighborClassifier);
        extern PyTypeObject *PY_TYPE(KNearestNeighborClassifier);

        class t_KNearestNeighborClassifier {
        public:
          PyObject_HEAD
          KNearestNeighborClassifier object;
          static PyObject *wrap_Object(const KNearestNeighborClassifier&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
