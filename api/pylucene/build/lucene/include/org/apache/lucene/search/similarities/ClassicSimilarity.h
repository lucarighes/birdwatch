#ifndef org_apache_lucene_search_similarities_ClassicSimilarity_H
#define org_apache_lucene_search_similarities_ClassicSimilarity_H

#include "org/apache/lucene/search/similarities/TFIDFSimilarity.h"

namespace java {
  namespace lang {
    class Class;
    class String;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class TermStatistics;
        class Explanation;
        class CollectionStatistics;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace similarities {

          class ClassicSimilarity : public ::org::apache::lucene::search::similarities::TFIDFSimilarity {
           public:
            enum {
              mid_init$_f2cc1bce94666404,
              mid_idf_f850d9cfe8a8e47f,
              mid_idfExplain_d7ff9aaf392c6db9,
              mid_lengthNorm_384f078ef4b8f931,
              mid_tf_8c8518d25218b9c5,
              mid_toString_db9b55ba01e03e4b,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ClassicSimilarity(jobject obj) : ::org::apache::lucene::search::similarities::TFIDFSimilarity(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            ClassicSimilarity(const ClassicSimilarity& obj) : ::org::apache::lucene::search::similarities::TFIDFSimilarity(obj) {}

            ClassicSimilarity();

            jfloat idf(jlong, jlong) const;
            ::org::apache::lucene::search::Explanation idfExplain(const ::org::apache::lucene::search::CollectionStatistics &, const ::org::apache::lucene::search::TermStatistics &) const;
            jfloat lengthNorm(jint) const;
            jfloat tf(jfloat) const;
            ::java::lang::String toString() const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace similarities {
          extern PyType_Def PY_TYPE_DEF(ClassicSimilarity);
          extern PyTypeObject *PY_TYPE(ClassicSimilarity);

          class t_ClassicSimilarity {
          public:
            PyObject_HEAD
            ClassicSimilarity object;
            static PyObject *wrap_Object(const ClassicSimilarity&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
