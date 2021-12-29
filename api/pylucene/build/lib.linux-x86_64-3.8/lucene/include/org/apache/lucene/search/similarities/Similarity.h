#ifndef org_apache_lucene_search_similarities_Similarity_H
#define org_apache_lucene_search_similarities_Similarity_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace similarities {
          class Similarity$SimScorer;
        }
        class TermStatistics;
        class CollectionStatistics;
      }
      namespace index {
        class FieldInvertState;
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
        namespace similarities {

          class Similarity : public ::java::lang::Object {
           public:
            enum {
              mid_init$_f2cc1bce94666404,
              mid_computeNorm_6ec3269102920d7a,
              mid_scorer_a010a2835e08a10c,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Similarity(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Similarity(const Similarity& obj) : ::java::lang::Object(obj) {}

            Similarity();

            jlong computeNorm(const ::org::apache::lucene::index::FieldInvertState &) const;
            ::org::apache::lucene::search::similarities::Similarity$SimScorer scorer(jfloat, const ::org::apache::lucene::search::CollectionStatistics &, const JArray< ::org::apache::lucene::search::TermStatistics > &) const;
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
          extern PyType_Def PY_TYPE_DEF(Similarity);
          extern PyTypeObject *PY_TYPE(Similarity);

          class t_Similarity {
          public:
            PyObject_HEAD
            Similarity object;
            static PyObject *wrap_Object(const Similarity&);
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
