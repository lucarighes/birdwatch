#ifndef org_apache_pylucene_search_similarities_PythonClassicSimilarity_H
#define org_apache_pylucene_search_similarities_PythonClassicSimilarity_H

#include "org/apache/lucene/search/similarities/ClassicSimilarity.h"

namespace java {
  namespace lang {
    class Class;
    class Throwable;
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
    namespace pylucene {
      namespace search {
        namespace similarities {

          class PythonClassicSimilarity : public ::org::apache::lucene::search::similarities::ClassicSimilarity {
           public:
            enum {
              mid_init$_f2cc1bce94666404,
              mid_finalize_f2cc1bce94666404,
              mid_idf_f850d9cfe8a8e47f,
              mid_idfExplain_a65c9ef6c8dde9e4,
              mid_lengthNorm_384f078ef4b8f931,
              mid_pythonDecRef_f2cc1bce94666404,
              mid_pythonExtension_2e5ae9edcb9b072f,
              mid_pythonExtension_9c778c9bce6694df,
              mid_tf_8c8518d25218b9c5,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PythonClassicSimilarity(jobject obj) : ::org::apache::lucene::search::similarities::ClassicSimilarity(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PythonClassicSimilarity(const PythonClassicSimilarity& obj) : ::org::apache::lucene::search::similarities::ClassicSimilarity(obj) {}

            PythonClassicSimilarity();

            void finalize() const;
            jfloat idf(jlong, jlong) const;
            ::org::apache::lucene::search::Explanation idfExplain(const ::org::apache::lucene::search::CollectionStatistics &, const JArray< ::org::apache::lucene::search::TermStatistics > &) const;
            jfloat lengthNorm(jint) const;
            void pythonDecRef() const;
            jlong pythonExtension() const;
            void pythonExtension(jlong) const;
            jfloat tf(jfloat) const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace pylucene {
      namespace search {
        namespace similarities {
          extern PyType_Def PY_TYPE_DEF(PythonClassicSimilarity);
          extern PyTypeObject *PY_TYPE(PythonClassicSimilarity);

          class t_PythonClassicSimilarity {
          public:
            PyObject_HEAD
            PythonClassicSimilarity object;
            static PyObject *wrap_Object(const PythonClassicSimilarity&);
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
