#ifndef org_apache_lucene_search_similarities_LMSimilarity$LMStats_H
#define org_apache_lucene_search_similarities_LMSimilarity$LMStats_H

#include "org/apache/lucene/search/similarities/BasicStats.h"

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

          class LMSimilarity$LMStats : public ::org::apache::lucene::search::similarities::BasicStats {
           public:
            enum {
              mid_init$_b5c6442be7f92276,
              mid_getCollectionProbability_8c74b787998ce4bc,
              mid_setCollectionProbability_3c435f10a3b1e038,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit LMSimilarity$LMStats(jobject obj) : ::org::apache::lucene::search::similarities::BasicStats(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            LMSimilarity$LMStats(const LMSimilarity$LMStats& obj) : ::org::apache::lucene::search::similarities::BasicStats(obj) {}

            LMSimilarity$LMStats(const ::java::lang::String &, jdouble);

            jdouble getCollectionProbability() const;
            void setCollectionProbability(jdouble) const;
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
          extern PyType_Def PY_TYPE_DEF(LMSimilarity$LMStats);
          extern PyTypeObject *PY_TYPE(LMSimilarity$LMStats);

          class t_LMSimilarity$LMStats {
          public:
            PyObject_HEAD
            LMSimilarity$LMStats object;
            static PyObject *wrap_Object(const LMSimilarity$LMStats&);
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
