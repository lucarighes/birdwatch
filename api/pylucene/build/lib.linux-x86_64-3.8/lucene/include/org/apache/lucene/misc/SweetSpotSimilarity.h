#ifndef org_apache_lucene_misc_SweetSpotSimilarity_H
#define org_apache_lucene_misc_SweetSpotSimilarity_H

#include "org/apache/lucene/search/similarities/ClassicSimilarity.h"

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
      namespace misc {

        class SweetSpotSimilarity : public ::org::apache::lucene::search::similarities::ClassicSimilarity {
         public:
          enum {
            mid_init$_f2cc1bce94666404,
            mid_baselineTf_8c8518d25218b9c5,
            mid_hyperbolicTf_8c8518d25218b9c5,
            mid_lengthNorm_384f078ef4b8f931,
            mid_setBaselineTfFactors_5a9245193073da7b,
            mid_setHyperbolicTfFactors_2944a3cac38261c2,
            mid_setLengthNormFactors_b2a45559b5888aa2,
            mid_tf_8c8518d25218b9c5,
            mid_toString_db9b55ba01e03e4b,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit SweetSpotSimilarity(jobject obj) : ::org::apache::lucene::search::similarities::ClassicSimilarity(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          SweetSpotSimilarity(const SweetSpotSimilarity& obj) : ::org::apache::lucene::search::similarities::ClassicSimilarity(obj) {}

          SweetSpotSimilarity();

          jfloat baselineTf(jfloat) const;
          jfloat hyperbolicTf(jfloat) const;
          jfloat lengthNorm(jint) const;
          void setBaselineTfFactors(jfloat, jfloat) const;
          void setHyperbolicTfFactors(jfloat, jfloat, jdouble, jfloat) const;
          void setLengthNormFactors(jint, jint, jfloat, jboolean) const;
          jfloat tf(jfloat) const;
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
      namespace misc {
        extern PyType_Def PY_TYPE_DEF(SweetSpotSimilarity);
        extern PyTypeObject *PY_TYPE(SweetSpotSimilarity);

        class t_SweetSpotSimilarity {
        public:
          PyObject_HEAD
          SweetSpotSimilarity object;
          static PyObject *wrap_Object(const SweetSpotSimilarity&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
