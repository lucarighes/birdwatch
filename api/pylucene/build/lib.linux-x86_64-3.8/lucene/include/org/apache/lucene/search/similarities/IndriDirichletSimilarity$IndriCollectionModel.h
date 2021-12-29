#ifndef org_apache_lucene_search_similarities_IndriDirichletSimilarity$IndriCollectionModel_H
#define org_apache_lucene_search_similarities_IndriDirichletSimilarity$IndriCollectionModel_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace similarities {
          class BasicStats;
          class LMSimilarity$CollectionModel;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace similarities {

          class IndriDirichletSimilarity$IndriCollectionModel : public ::java::lang::Object {
           public:
            enum {
              mid_init$_f2cc1bce94666404,
              mid_computeProbability_3f1239f1e5e20981,
              mid_getName_db9b55ba01e03e4b,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit IndriDirichletSimilarity$IndriCollectionModel(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            IndriDirichletSimilarity$IndriCollectionModel(const IndriDirichletSimilarity$IndriCollectionModel& obj) : ::java::lang::Object(obj) {}

            IndriDirichletSimilarity$IndriCollectionModel();

            jdouble computeProbability(const ::org::apache::lucene::search::similarities::BasicStats &) const;
            ::java::lang::String getName() const;
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
          extern PyType_Def PY_TYPE_DEF(IndriDirichletSimilarity$IndriCollectionModel);
          extern PyTypeObject *PY_TYPE(IndriDirichletSimilarity$IndriCollectionModel);

          class t_IndriDirichletSimilarity$IndriCollectionModel {
          public:
            PyObject_HEAD
            IndriDirichletSimilarity$IndriCollectionModel object;
            static PyObject *wrap_Object(const IndriDirichletSimilarity$IndriCollectionModel&);
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
